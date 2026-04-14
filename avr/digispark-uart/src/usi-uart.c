/**
 *---------------------------------------------------------------------------
 * @brief    Simple libary for using USI on AVR tiny devices as uart.
 *
 * @file     usi-uart.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include "usi-uart.h"

/*
 * ATtiny85 USI UART TX Only - 9600 baud @ 8 MHz
 * TX on PB1 (pin 6)
 * Original concept: Mark Osborne (becomingmaker.com)
 * Simplified and cleaned for clarity
 */

#define BAUDRATE 9600

#include <avr/interrupt.h>
#include <avr/io.h>
#include <util/delay.h>

// USI states for transmission
#define IDLE 0
#define START 1
#define DATA 2
#define STOP 3

volatile uint8_t usi_state = IDLE;
volatile uint8_t usi_tx_data = 0;  // Data being shifted out (reversed bits)
volatile uint8_t tx_buffer = 0;    // Next byte to send
volatile uint8_t tx_ready = 0;     // Flag: new byte is ready to send

// Reverse the bits of a byte (UART sends LSB first)
static uint8_t reverse_byte(uint8_t b) {
    b = ((b & 0xF0) >> 4) | ((b & 0x0F) << 4);
    b = ((b & 0xCC) >> 2) | ((b & 0x33) << 2);
    b = ((b & 0xAA) >> 1) | ((b & 0x55) << 1);
    return b;
}

// Send one byte (non-blocking - queues the byte)
void usi_uart_send(uint8_t data) {
    while (tx_ready);  // Wait if previous byte still transmitting
    tx_buffer = data;
    tx_ready = 1;
}

// Initialize USI as UART transmitter
void usi_uart_init(void) {
    // PB1 (DO) as output
    DDRB |= (1 << PB1);

    // USI in 3-wire mode (SPI), external clock from Timer0 compare match
    // USIOIE = enable overflow interrupt
    USICR = (1 << USIWM0) |                  // 3-wire mode
            (1 << USICS0) | (0 << USICLK) |  // Clock from Timer0 compare
            (1 << USIOIE);                   // Enable overflow interrupt

    // Timer0: CTC mode, prescaler 8 (for 9600 baud @ 8MHz)
    // 8000000 / 8 / 9600 ≈ 104.166 → OCR0A = 103
    TCCR0A = (1 << WGM01);               // CTC mode
    TCCR0B = (1 << CS01);                // Prescaler 8
    OCR0A = (F_CPU / 8 / BAUDRATE) - 1;  // 103 for 9600 @ 8MHz
    TCNT0 = 0;

    // Enable Timer0 compare match A interrupt (this clocks the USI)
    TIMSK |= (1 << OCIE0A);

    usi_state = IDLE;
    //sei();  // Global interrupts
}

// USI overflow interrupt - shifts out the next bit
ISR(USI_OVF_vect) {
    switch (usi_state) {
        case START:
            USIDR = 0x00;  // Start bit (0)
            usi_state = DATA;
            break;

        case DATA:
            USIDR = usi_tx_data;  // Send next 8 bits
            usi_state = STOP;
            break;

        case STOP:
            USIDR = 0xFF;  // Stop bit (1)
            usi_state = IDLE;
            tx_ready = 0;  // Transmission complete
            break;

        default:  // IDLE or error
            if (tx_ready) {
                usi_tx_data =
                    reverse_byte(tx_buffer);  // Prepare data (LSB first)
                USIDR = 0x00;                 // Start bit
                usi_state = DATA;
            } else {
                USIDR = 0xFF;  // Idle high
            }
            break;
    }

    USISR = (1 << USIOIF);  // Clear overflow flag
}

// Timer0 Compare Match A - generates the bit clock for USI
ISR(TIMER0_COMPA_vect) {
    // This interrupt just clocks the USI.
    // The actual bit shifting happens in USI_OVF_vect.
}