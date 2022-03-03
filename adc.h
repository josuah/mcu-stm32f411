#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define ADC1 ((struct sdk_adc *)0x40012000)

struct sdk_adc {

	/* 0x00: ADC status register */
	uint32_t volatile SR;
#define ADC_SR_OVR				(1u << 5)
#define ADC_SR_STRT				(1u << 4)
#define ADC_SR_JSTRT				(1u << 3)
#define ADC_SR_JEOC				(1u << 2)
#define ADC_SR_EOC				(1u << 1)
#define ADC_SR_AWD				(1u << 0)

	/* 0x04: ADC control register 1 */
	uint32_t volatile CR1;
#define ADC_CR1_OVRIE				(1u << 26)
#define ADC_CR1_RES(x)				(1u << 24)
#define ADC_CR1_AWDEN				(1u << 23)
#define ADC_CR1_JAWDEN				(1u << 22)
#define ADC_CR1_DISCNUM(x)			(1u << 13)
#define ADC_CR1_JDISCEN				(1u << 12)
#define ADC_CR1_DISCEN				(1u << 11)
#define ADC_CR1_JAUTO				(1u << 10)
#define ADC_CR1_AWDSGL				(1u << 9)
#define ADC_CR1_SCAN				(1u << 8)
#define ADC_CR1_JEOCIE				(1u << 7)
#define ADC_CR1_AWDIE				(1u << 6)
#define ADC_CR1_EOCIE				(1u << 5)
#define ADC_CR1_AWDCH(x)			(1u << 0)

	/* 0x08: ADC control register 2 */
	uint32_t volatile CR2;
#define ADC_CR2_SWSTART				(1u << 30)
#define ADC_CR2_EXTEN(x)			(1u << 28)
#define ADC_CR2_EXTSEL(x)			(1u << 24)
#define ADC_CR2_JSWSTART			(1u << 22)
#define ADC_CR2_JEXTEN(x)			(1u << 20)
#define ADC_CR2_JEXTSEL(x)			(1u << 16)
#define ADC_CR2_ALIGN				(1u << 11)
#define ADC_CR2_EOCS				(1u << 10)
#define ADC_CR2_DDS				(1u << 9)
#define ADC_CR2_DMA				(1u << 8)
#define ADC_CR2_CONT				(1u << 1)
#define ADC_CR2_ADON				(1u << 0)

	/* 0x0C: ADC sample time register 1 */
	uint32_t volatile SMPR1;

	/* 0x10: ADC sample time register 2 */
	uint32_t volatile SMPR2;

	/* 0x14: ADC injected channel data offset register x */
	uint32_t volatile JOFRx;
#define ADC_JOFRx_JOFFSETx(x)			(1u << 0)

	/* 0x18 */
	uint8_t volatile RESERVED9[0x24-0x18];

	/* 0x24: ADC watchdog higher threshold register */
	uint32_t volatile HTR;
#define ADC_HTR_HT(x)				(1u << 0)

	/* 0x28: ADC watchdog lower threshold register */
	uint32_t volatile LTR;
#define ADC_LTR_LT(x)				(1u << 0)

	/* 0x2C: ADC regular sequence register */
	uint32_t volatile SQR[3];
#define ADC_SQR[3]_L(x)				(1u << 20)
#define ADC_SQR[3]_SQ16(x)			(1u << 15)
#define ADC_SQR[3]_SQ15(x)			(1u << 10)
#define ADC_SQR[3]_SQ14(x)			(1u << 5)
#define ADC_SQR[3]_SQ13(x)			(1u << 0)
#define ADC_SQR[3]_SQ12(x)			(1u << 26)
#define ADC_SQR[3]_SQ11(x)			(1u << 20)
#define ADC_SQR[3]_SQ10(x)			(1u << 15)
#define ADC_SQR[3]_SQ9(x)			(1u << 10)
#define ADC_SQR[3]_SQ8(x)			(1u << 5)
#define ADC_SQR[3]_SQ7(x)			(1u << 0)
#define ADC_SQR[3]_SQ6(x)			(1u << 25)
#define ADC_SQR[3]_SQ5(x)			(1u << 20)
#define ADC_SQR[3]_SQ4(x)			(1u << 15)
#define ADC_SQR[3]_SQ3(x)			(1u << 10)
#define ADC_SQR[3]_SQ2(x)			(1u << 5)
#define ADC_SQR[3]_SQ1(x)			(1u << 0)

	/* 0x38: ADC injected sequence register */
	uint32_t volatile JSQR;
#define ADC_JSQR_JL(x)				(1u << 20)
#define ADC_JSQR_JSQ4(x)			(1u << 15)
#define ADC_JSQR_JSQ3(x)			(1u << 10)
#define ADC_JSQR_JSQ2(x)			(1u << 5)
#define ADC_JSQR_JSQ1(x)			(1u << 0)

	/* 0x3C: ADC injected data register x */
	uint32_t volatile JDRx;

	/* 0x40 */
	uint8_t volatile RESERVED10[0x4C-0x40];

	/* 0x4C: ADC regular data register */
	uint32_t volatile DR;

	/* 0x04: ADC common control register */
	uint32_t volatile CCR;
#define ADC_CCR_TSVREFE				(1u << 23)
#define ADC_CCR_VBATE				(1u << 22)
#define ADC_CCR_ADCPRE(x)			(1u << 16)

};
