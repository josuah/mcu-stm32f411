#include "gpio.h"

int
main(void)
{
	gpio_enable(GPIOC);
	gpio_mode_output(GPIOC, 13, GPIO_OSPEED_MEDIUM);
	for (;;) gpio_port_set(GPIOB, 1u << 13);

	return 0;
}
