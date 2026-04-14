/**
 *---------------------------------------------------------------------------
 * @brief    Simple libary for using USI on AVR tiny devices as uart.
 *
 * @file     usi-uart.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
#endif

    void usi_uart_send(uint8_t data);

// Initialize USI as UART transmitter
void usi_uart_init(void);   

#ifdef __cplusplus
} //end brace for extern "C"
#endif
