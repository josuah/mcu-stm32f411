#include "libc.h"
#include "registers.h"
#include "functions.h"

void
usart_init(struct mcu_usart *usart, uint32_t baud_hz, pinout_t tx, pinout_t rx)
{
	/* configure the tx and rx pins */
	gpio_set_altfn(gpio_tx, tx.gpio, tx.pin);
	gpio_set_altfn(gpio_rx, rx.gpio, rx.pin);

	/* enable the usart */
	if (usart == USART1)
		RCC->APB2ENR |= RCC_APB2ENR_USART1EN;
	if (usart == USART2)
		RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
	if (usart == USART6)
		RCC->APB2ENR |= RCC_APB2ENR_USART6EN;

	/* set the baud rate */
	usart->BRR = 160000 / 96;

	/* configure and enable the usart */
	usart->CR1 = 0
	/* sample 8 times per bit */
	 | USART_CR1_OVER8_OVERSAMPLE16
	/* word length to 8 bits */
	 | USART_CR1_M_M8
	/* enable interrupt */
	 | USART_CR1_PEIE		/* parity error */
	 | USART_CR1_TXEIE		/* transmission error */
	 | USART_CR1_TCIE		/* transmission complete */
	 | USART_CR1_RXNEIE		/* reception complete */
	/* enable the transmitter and the whole usart */
	 | USART_CR1_TE
	 | USART_CR1_UE;
}

void
usart_interrupt(struct mcu_usart *usart)
{

}
