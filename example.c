#include "libc.h"
#include "registers.h"
#include "functions.h"

int
main(void)
{
	gpio_enable(GPIOC);
	GPIOC->MODER = (GPIOC->MODER & ~GPIO_MODER_MODER_Msk(13)) | GPIO_MODER_MODER_OUTPUT(13);

	usart_init(USART1, 9600, PINOUT_);
	return 0;
}
