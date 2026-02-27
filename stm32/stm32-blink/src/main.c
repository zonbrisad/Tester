/**
 *---------------------------------------------------------------------------
 * @file    main.c
 * @brief   A test example for STM32 Cortex M3 MCU
 *
 * @author  GPLv2
 * @date    2016-02-24
 * @licence Peter Malmberg <peter.malmberg@gmail.com>
 *
 *---------------------------------------------------------------------------
 */

#include <stdio.h>

#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_usart.h"


/**
 * Macro declarations
 *------------------------------------------------------------------
 */

/**
 * Variable declarations
 *------------------------------------------------------------------
 */
//__flash char *kalle="123412341234";

/**
 * Prototype declarations
 *------------------------------------------------------------------
 */
/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */

/**
 * Code
 *------------------------------------------------------------------
 */

int _write (int fd, const void *buf, size_t count) {
  return 0;
}

void hwInit() {
/* USART configuration structure for USART1 */
  USART_InitTypeDef uart1; 
	//int i;
	/* Initialize Leds mounted on STM32 board */
	GPIO_InitTypeDef  gpioc;
	GPIO_InitTypeDef  gpioa;
  
	/* Initialize LED which connected to PC6,9, Enable the Clock*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA |
                         RCC_APB2Periph_GPIOB |
												 RCC_APB2Periph_GPIOC |
												 RCC_APB2Periph_USART1 ,ENABLE);

	/* Configure the GPIO_LED pin */
	gpioc.GPIO_Pin   = GPIO_Pin_13;
	gpioc.GPIO_Mode  = GPIO_Mode_Out_PP;
	gpioc.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &gpioc);
	
  gpioa.GPIO_Pin   = GPIO_Pin_9;
  gpioa.GPIO_Mode  = GPIO_Mode_AF_PP;
  gpioa.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &gpioa);
  

	 /* Enable USART1 */
    USART_Cmd(USART1, ENABLE);  
    /* Baud rate 9600, 8-bit data, One stop bit
     * No parity, Do both Rx and Tx, No HW flow control
     */
    uart1.USART_BaudRate   = 115200;   
    uart1.USART_WordLength = USART_WordLength_8b;  
    uart1.USART_StopBits   = USART_StopBits_1;   
    uart1.USART_Parity     = USART_Parity_No ;
    uart1.USART_Mode       = USART_Mode_Rx | USART_Mode_Tx;
    uart1.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
    /* Configure USART1 */
    USART_Init(USART1, &uart1);
    /* Enable RXNE interrupt */
    //USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);
    /* Enable USART1 global interrupt */
    //NVIC_EnableIRQ(USART1_IRQn);

}

void checkResetCause() {
  if (PWR_GetFlagStatus(PWR_FLAG_SB))
  printf("System resumed from STANDBY mode");
 
  if (RCC_GetFlagStatus(RCC_FLAG_SFTRST))
    printf("Software Reset");
 
  if (RCC_GetFlagStatus(RCC_FLAG_PORRST))
    printf("Power-On-Reset");
 
  if (RCC_GetFlagStatus(RCC_FLAG_PINRST)) // Always set, test other cases first
    printf("External Pin Reset");
 
  if (RCC_GetFlagStatus(RCC_FLAG_IWDGRST) != RESET)
    printf("Watchdog Reset");
 
  if (RCC_GetFlagStatus(RCC_FLAG_WWDGRST) != RESET)
    printf("Window Watchdog Reset");
 
  if (RCC_GetFlagStatus(RCC_FLAG_LPWRRST) != RESET)
    printf("Low Power Reset");
   
//if (RCC_GetFlagStatus(RCC_FLAG_BORRST) != RESET) // F4 Usually set with POR
//  printf("Brown-Out Reset");
   
  RCC_ClearFlag(); // The flags cleared after use
}
int main() {
	int i;
	int j;
  hwInit();
	
  printf("\nSTM32 Example startup...\n");
  
	checkResetCause();
  j=0;
	while(1){
    
    printf("Blink %d\n",j);
		GPIOC->ODR ^= GPIO_Pin_13;
    for(i=0;i<0x40000;i++) {
    }

		j++;
	}
  
}
