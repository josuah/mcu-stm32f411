#include <rcc.h>
#include <gpio.h>

void
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

void
gpio_mode_output(struct sdk_gpio *gpio, uint8_t pin, uint8_t speed)
{
	gpio->OSPEEDR = GPIO_OSPEED(pin, speed);
	gpio->MODER = GPIO_MODE(pin, GPIO_MODE_OUT);
}

void
gpio_mode_altfn(struct sdk_gpio *gpio, uint8_t pin, uint8_t altfn)
{
	uint32_t reg;

	/* setup the port in alternate function mode */
	reg = gpio->MODER & ~GPIO_MODE_MASK(pin);
	gpio->MODER = reg | GPIO_MODE(pin, GPIO_MODE_ALT);

	/* set the actual mode */
	reg = gpio->AFR & ~GPIO_AF_MASK(pin);
	gpio->AFR = reg | GPIO_AF(pin, altfn);
}

void
gpio_port_set(struct sdk_gpio *gpio, uint32_t mask)
{
	gpio->ODR |= mask;
}

void
gpio_port_clear(struct sdk_gpio *gpio, uint32_t mask)
{
	gpio->ODR &= mask;
}
