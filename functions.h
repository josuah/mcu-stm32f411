#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define FIELD(reg, fld)		(((reg) & fld##_Msk) >> fld##_Pos)

/*** GPIO ***/

static inline void
gpio_enable(struct sdk_gpio *gpio)
{
	if (gpio == GPIOA)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	if (gpio == GPIOB)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
	if (gpio == GPIOC)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	if (gpio == GPIOD)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	if (gpio == GPIOE)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
	if (gpio == GPIOH)
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOHEN;
}

static inline void
gpio_set_altfn(struct sdk_gpio *gpio, uint8_t pin, uint8_t altfn)
{
	/* setup the port in alternate function mode */
	gpio->MODER = (gpio->MODER & ~GPIO_MODER_MODER_Msk(pin))
	 | GPIO_MODER_MODER_ALTERNATE(pin);

	/* set the actual mode */
	gpio->AFR = (gpio->AFR & ~GPIO_AFR_AFR_Msk(pin))
	 | altfn << GPIO_AFR_AFR_Pos(pin);
}

#endif
