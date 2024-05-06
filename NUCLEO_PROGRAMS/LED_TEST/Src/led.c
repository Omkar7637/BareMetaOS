/*
 * led.c
 *
 *  Created on: Apr 25, 2024
 *      Author: om
 */


#include "led.h"


#define GPIOAEN			(1U<<0)
#define LED_PIN			(1U<<5)

void led_init(void)
{

	RCC->AHB1ENR  |= GPIOAEN;

	GPIOA->MODER |=(1U<<10);
	GPIOA->MODER &= ~(1U<<11);

}


void led_on(void)
{

	GPIOA->ODR |= LED_PIN;
}


void led_off(void)
{

	GPIOA->ODR &= ~LED_PIN;

}




