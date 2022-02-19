#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define RCC ((struct zmcu_rcc *)0x40023800)

struct zmcu_rcc {
	
	/* 0x00: RCC clock control register */
	uint32_t volatile CR;
#define RCC_CR_PLLI2SRDY			(1u << 27)
#define RCC_CR_PLLI2SON				(1u << 26)
#define RCC_CR_PLLRDY				(1u << 25)
#define RCC_CR_PLLON				(1u << 24)
#define RCC_CR_CSSON				(1u << 19)
#define RCC_CR_HSEBYP				(1u << 18)
#define RCC_CR_HSERDY				(1u << 17)
#define RCC_CR_HSEON				(1u << 16)
#define RCC_CR_HSICAL(x)			(1u << 8)
#define RCC_CR_HSITRIM(x)			(1u << 3)
#define RCC_CR_HSIRDY				(1u << 1)
#define RCC_CR_HSION				(1u << 0)

	/* 0x04: RCC PLL configuration register */
	uint32_t volatile PLLCFGR;
#define RCC_PLLCFGR_PLLQ(x)			(1u << 24)
#define RCC_PLLCFGR_PLLSRC			(1u << 22)
#define RCC_PLLCFGR_PLLP(x)			(1u << 16)
#define RCC_PLLCFGR_PLLN(x)			(1u << 6)
#define RCC_PLLCFGR_PLLM(x)			(1u << 0)

	/* 0x08: RCC clock configuration register */
	uint32_t volatile CFGR;
#define RCC_CFGR_MCO2(x)			(1u << 30)
#define RCC_CFGR_MCO2PRE(x)			(1u << 27)
#define RCC_CFGR_MCO1PRE(x)			(1u << 24)
#define RCC_CFGR_I2SSRC				(1u << 23)
#define RCC_CFGR_MCO1(x)			(1u << 21)
#define RCC_CFGR_RTCPRE(x)			(1u << 16)
#define RCC_CFGR_PPRE2(x)			(1u << 13)
#define RCC_CFGR_PPRE1(x)			(1u << 10)
#define RCC_CFGR_HPRE(x)			(1u << 4)
#define RCC_CFGR_SWS(x)				(1u << 2)
#define RCC_CFGR_SW(x)				(1u << 0)

	/* 0x0C: RCC clock interrupt register */
	uint32_t volatile CIR;
#define RCC_CIR_CSSC				(1u << 23)
#define RCC_CIR_PLLI2SRDYC			(1u << 21)
#define RCC_CIR_PLLRDYC				(1u << 20)
#define RCC_CIR_HSERDYC				(1u << 19)
#define RCC_CIR_HSIRDYC				(1u << 18)
#define RCC_CIR_LSERDYC				(1u << 17)
#define RCC_CIR_LSIRDYC				(1u << 16)
#define RCC_CIR_PLLI2SRDYIE			(1u << 13)
#define RCC_CIR_PLLRDYIE			(1u << 12)
#define RCC_CIR_HSERDYIE			(1u << 11)
#define RCC_CIR_HSIRDYIE			(1u << 10)
#define RCC_CIR_LSERDYIE			(1u << 9)
#define RCC_CIR_LSIRDYIE			(1u << 8)
#define RCC_CIR_CSSF				(1u << 7)
#define RCC_CIR_PLLI2SRDYF			(1u << 5)
#define RCC_CIR_PLLRDYF				(1u << 4)
#define RCC_CIR_HSERDYF				(1u << 3)
#define RCC_CIR_HSIRDYF				(1u << 2)
#define RCC_CIR_LSERDYF				(1u << 1)
#define RCC_CIR_LSIRDYF				(1u << 0)

	/* 0x10: RCC AHB1 peripheral reset register */
	uint32_t volatile AHB1RSTR;
#define RCC_AHB1RSTR_DMA2RST			(1u << 22)
#define RCC_AHB1RSTR_DMA1RST			(1u << 21)
#define RCC_AHB1RSTR_CRCRST			(1u << 12)
#define RCC_AHB1RSTR_GPIOHRST			(1u << 7)
#define RCC_AHB1RSTR_GPIOERST			(1u << 4)
#define RCC_AHB1RSTR_GPIODRST			(1u << 3)
#define RCC_AHB1RSTR_GPIOCRST			(1u << 2)
#define RCC_AHB1RSTR_GPIOBRST			(1u << 1)
#define RCC_AHB1RSTR_GPIOARST			(1u << 0)

	/* 0x14: RCC AHB2 peripheral reset register */
	uint32_t volatile AHB2RSTR;
#define RCC_AHB2RSTR_OTGFSRST			(1u << 7)

	/* 0x18 */
	uint32_t volatile RESERVED0[(0x20-0x18)/4];

	/* 0x20: RCC APB1 peripheral reset register for */
	uint32_t volatile APB1RSTR;
#define RCC_APB1RSTR_PWRRST			(1u << 28)
#define RCC_APB1RSTR_I2C3RST			(1u << 23)
#define RCC_APB1RSTR_I2C2RST			(1u << 22)
#define RCC_APB1RSTR_I2C1RST			(1u << 21)
#define RCC_APB1RSTR_USART2RST			(1u << 17)
#define RCC_APB1RSTR_SPI3RST			(1u << 15)
#define RCC_APB1RSTR_SPI2RST			(1u << 14)
#define RCC_APB1RSTR_WWDGRST			(1u << 11)
#define RCC_APB1RSTR_TIM5RST			(1u << 3)
#define RCC_APB1RSTR_TIM4RST			(1u << 2)
#define RCC_APB1RSTR_TIM3RST			(1u << 1)
#define RCC_APB1RSTR_TIM2RST			(1u << 0)

	/* 0x24: RCC APB2 peripheral reset register */
	uint32_t volatile APB2RSTR;
#define RCC_APB2RSTR_SPI5RST			(1u << 20)
#define RCC_APB2RSTR_TIM11RST			(1u << 18)
#define RCC_APB2RSTR_TIM10RST			(1u << 17)
#define RCC_APB2RSTR_TIM9RST			(1u << 16)
#define RCC_APB2RSTR_SYSCFGRST			(1u << 14)
#define RCC_APB2RSTR_SPI4RST			(1u << 13)
#define RCC_APB2RSTR_SPI1RST			(1u << 12)
#define RCC_APB2RSTR_SDIORST			(1u << 11)
#define RCC_APB2RSTR_ADC1RST			(1u << 8)
#define RCC_APB2RSTR_USART6RST			(1u << 5)
#define RCC_APB2RSTR_USART1RST			(1u << 4)
#define RCC_APB2RSTR_TIM1RST			(1u << 0)

	/* 0x28 */
	uint32_t volatile RESERVED1[(0x30-0x28)/4];

	/* 0x30: RCC AHB1 peripheral clock enable register */
	uint32_t volatile AHB1ENR;
#define RCC_AHB1ENR_DMA2EN			(1u << 22)
#define RCC_AHB1ENR_DMA1EN			(1u << 21)
#define RCC_AHB1ENR_CRCEN			(1u << 12)
#define RCC_AHB1ENR_GPIOHEN			(1u << 7)
#define RCC_AHB1ENR_GPIOEEN			(1u << 4)
#define RCC_AHB1ENR_GPIODEN			(1u << 3)
#define RCC_AHB1ENR_GPIOCEN			(1u << 2)
#define RCC_AHB1ENR_GPIOBEN			(1u << 1)
#define RCC_AHB1ENR_GPIOAEN			(1u << 0)

	/* 0x34: RCC AHB2 peripheral clock enable register */
	uint32_t volatile AHB2ENR;
#define RCC_AHB2ENR_OTGFSEN			(1u << 7)

	/* 0x38 */
	uint32_t volatile RESERVED2[(0x40-0x38)/4];

	/* 0x40: RCC APB1 peripheral clock enable register */
	uint32_t volatile APB1ENR;
#define RCC_APB1ENR_PWREN			(1u << 28)
#define RCC_APB1ENR_I2C3EN			(1u << 23)
#define RCC_APB1ENR_I2C2EN			(1u << 22)
#define RCC_APB1ENR_I2C1EN			(1u << 21)
#define RCC_APB1ENR_USART2EN			(1u << 17)
#define RCC_APB1ENR_SPI3EN			(1u << 15)
#define RCC_APB1ENR_SPI2EN			(1u << 14)
#define RCC_APB1ENR_WWDGEN			(1u << 11)
#define RCC_APB1ENR_TIM5EN			(1u << 3)
#define RCC_APB1ENR_TIM4EN			(1u << 2)
#define RCC_APB1ENR_TIM3EN			(1u << 1)
#define RCC_APB1ENR_TIM2EN			(1u << 0)

	/* 0x44: RCC APB2 peripheral clock enable register */
	uint32_t volatile APB2ENR;
#define RCC_APB2ENR_SPI5EN			(1u << 20)
#define RCC_APB2ENR_TIM11EN			(1u << 18)
#define RCC_APB2ENR_TIM10EN			(1u << 17)
#define RCC_APB2ENR_TIM9EN			(1u << 16)
#define RCC_APB2ENR_SYSCFGEN			(1u << 14)
#define RCC_APB2ENR_SPI4EN			(1u << 13)
#define RCC_APB2ENR_SPI1EN			(1u << 12)
#define RCC_APB2ENR_SDIOEN			(1u << 11)
#define RCC_APB2ENR_ADC1EN			(1u << 8)
#define RCC_APB2ENR_USART6EN			(1u << 5)
#define RCC_APB2ENR_USART1EN			(1u << 4)
#define RCC_APB2ENR_TIM1EN			(1u << 0)

	/* 0x48 */
	uint32_t volatile RESERVED3[(0x50-0x48)/4];

	/* 0x50: RCC AHB1 peripheral clock enable in low power mode register */
	uint32_t volatile AHB1LPENR;
#define RCC_AHB1LPENR_DMA2LPEN			(1u << 22)
#define RCC_AHB1LPENR_DMA1LPEN			(1u << 21)
#define RCC_AHB1LPENR_SRAM1LPEN			(1u << 16)
#define RCC_AHB1LPENR_FLITFLPEN			(1u << 15)
#define RCC_AHB1LPENR_CRCLPEN			(1u << 12)
#define RCC_AHB1LPENR_GPIOHLPEN			(1u << 7)
#define RCC_AHB1LPENR_GPIOELPEN			(1u << 4)
#define RCC_AHB1LPENR_GPIODLPEN			(1u << 3)
#define RCC_AHB1LPENR_GPIOCLPEN			(1u << 2)
#define RCC_AHB1LPENR_GPIOBLPEN			(1u << 1)
#define RCC_AHB1LPENR_GPIOALPEN			(1u << 0)

	/* 0x54: RCC AHB2 peripheral clock enable in low power mode register */
	uint32_t volatile AHB2LPENR;
#define RCC_AHB2LPENR_OTGFSLPEN			(1u << 7)

	/* 0x58 */
	uint32_t volatile RESERVED4[(0x60-0x58)/4];

	/* 0x60: RCC APB1 peripheral clock enable in low power mode register */
	uint32_t volatile APB1LPENR;
#define RCC_APB1LPENR_PWRLPEN			(1u << 28)
#define RCC_APB1LPENR_I2C3LPEN			(1u << 23)
#define RCC_APB1LPENR_I2C2LPEN			(1u << 22)
#define RCC_APB1LPENR_I2C1LPEN			(1u << 21)
#define RCC_APB1LPENR_USART2LPEN		(1u << 17)
#define RCC_APB1LPENR_SPI3LPEN			(1u << 15)
#define RCC_APB1LPENR_SPI2LPEN			(1u << 14)
#define RCC_APB1LPENR_WWDGLPEN			(1u << 11)
#define RCC_APB1LPENR_TIM5LPEN			(1u << 3)
#define RCC_APB1LPENR_TIM4LPEN			(1u << 2)
#define RCC_APB1LPENR_TIM3LPEN			(1u << 1)
#define RCC_APB1LPENR_TIM2LPEN			(1u << 0)

	/* 0x64: RCC APB2 peripheral clock enabled in low power mode register */
	uint32_t volatile APB2LPENR;
#define RCC_APB2LPENR_SPI5LPEN			(1u << 20)
#define RCC_APB2LPENR_TIM11LPEN			(1u << 18)
#define RCC_APB2LPENR_TIM10LPEN			(1u << 17)
#define RCC_APB2LPENR_TIM9LPEN			(1u << 16)
#define RCC_APB2LPENR_SYSCFGLPEN		(1u << 14)
#define RCC_APB2LPENR_SPI4LPEN			(1u << 13)
#define RCC_APB2LPENR_SPI1LPEN			(1u << 12)
#define RCC_APB2LPENR_SDIOLPEN			(1u << 11)
#define RCC_APB2LPENR_ADC1LPEN			(1u << 8)
#define RCC_APB2LPENR_USART6LPEN		(1u << 5)
#define RCC_APB2LPENR_USART1LPEN		(1u << 4)
#define RCC_APB2LPENR_TIM1LPEN			(1u << 0)

	/* 0x68 */
	uint32_t volatile RESERVED5[(0x70-0x68)/4];

	/* 0x70: RCC Backup domain control register */
	uint32_t volatile BDCR;
#define RCC_BDCR_BDRST				(1u << 16)
#define RCC_BDCR_RTCEN				(1u << 15)
#define RCC_BDCR_RTCSEL(x)			(1u << 8)
#define RCC_BDCR_LSEMOD				(1u << 3)

	/* 0x74: RCC clock control & status register */
	uint32_t volatile CSR;
#define RCC_CSR_LSEBYP				(1u << 2)
#define RCC_CSR_LSERDY				(1u << 1)
#define RCC_CSR_LSEON				(1u << 0)
#define RCC_CSR_LPWRRSTF			(1u << 31)
#define RCC_CSR_WWDGRSTF			(1u << 30)
#define RCC_CSR_IWDGRSTF			(1u << 29)
#define RCC_CSR_SFTRSTF				(1u << 28)
#define RCC_CSR_PORRSTF				(1u << 27)
#define RCC_CSR_PINRSTF				(1u << 26)
#define RCC_CSR_BORRSTF				(1u << 25)
#define RCC_CSR_RMVF				(1u << 24)
#define RCC_CSR_LSIRDY				(1u << 1)
#define RCC_CSR_LSION				(1u << 0)

	/* 0x78 */
	uint32_t volatile RESERVED6[(0x80-0x78)/4];

	/* 0x80: RCC spread spectrum clock generation register */
	uint32_t volatile SSCGR;
#define RCC_SSCGR_SSCGEN			(1u << 31)
#define RCC_SSCGR_SPREADSEL			(1u << 30)
#define RCC_SSCGR_INCSTEP(x)			(1u << 13)
#define RCC_SSCGR_MODPER(x)			(1u << 0)

	/* 0x84: RCC PLLI2S configuration register */
	uint32_t volatile PLLI2SCFGR;
#define RCC_PLLI2SCFGR_PLLI2SR(x)		(1u << 28)
#define RCC_PLLI2SCFGR_PLLI2SN(x)		(1u << 6)
#define RCC_PLLI2SCFGR_PLLI2SM(x)		(1u << 0)

	/* 0x88 */
	uint32_t volatile RESERVED7;

	/* 0x8C: RCC Dedicated Clocks Configuration Register */
	uint32_t volatile DCKCFGR;
#define RCC_DCKCFGR_TIMPRE			(1u << 24)

};
