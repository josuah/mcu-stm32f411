#ifndef REGISTERS_H
#define REGISTERS_H


#define ADC_COMMON ((struct sdk_adc_common *)0x40012300)

struct sdk_adc_common {

	/* 0x00 */
	uint8_t RESERVED0[0x04u-0x00u];

	/* 0x04: ADC common control register */
	uint32_t volatile CCR;
	/* Temperature sensor and VREFINT */
#define ADC_COMMON_CCR_TSVREFE					(1u << 23)
#define ADC_COMMON_CCR_TSVREFE_DISABLED				(0x0u << 23)
#define ADC_COMMON_CCR_TSVREFE_ENABLED				(0x1u << 23)
	/* VBAT enable */
#define ADC_COMMON_CCR_VBATE					(1u << 22)
#define ADC_COMMON_CCR_VBATE_DISABLED				(0x0u << 22)
#define ADC_COMMON_CCR_VBATE_ENABLED				(0x1u << 22)
	/* ADC prescaler */
#define ADC_COMMON_CCR_ADCPRE_Msk				(0x3u << 16)
#define ADC_COMMON_CCR_ADCPRE_Pos				16
#define ADC_COMMON_CCR_ADCPRE_DIV2				(0x0u << 16)
#define ADC_COMMON_CCR_ADCPRE_DIV4				(0x1u << 16)
#define ADC_COMMON_CCR_ADCPRE_DIV6				(0x2u << 16)
#define ADC_COMMON_CCR_ADCPRE_DIV8				(0x3u << 16)

};


#define ADC1 ((struct sdk_adc1 *)0x40012000)

struct sdk_adc1 {

	/* 0x00: status register */
	uint32_t volatile SR;
	/* Overrun */
#define ADC1_SR_OVR						(1u << 5)
#define ADC1_SR_OVR_NOOVERRUN					(0x0u << 5)
#define ADC1_SR_OVR_OVERRUN					(0x1u << 5)
	/* Regular channel start flag */
#define ADC1_SR_STRT						(1u << 4)
#define ADC1_SR_STRT_NOTSTARTED					(0x0u << 4)
#define ADC1_SR_STRT_STARTED					(0x1u << 4)
	/* Injected channel start */
#define ADC1_SR_JSTRT						(1u << 3)
#define ADC1_SR_JSTRT_NOTSTARTED				(0x0u << 3)
#define ADC1_SR_JSTRT_STARTED					(0x1u << 3)
	/* Injected channel end of */
#define ADC1_SR_JEOC						(1u << 2)
#define ADC1_SR_JEOC_NOTCOMPLETE				(0x0u << 2)
#define ADC1_SR_JEOC_COMPLETE					(0x1u << 2)
	/* Regular channel end of */
#define ADC1_SR_EOC						(1u << 1)
#define ADC1_SR_EOC_NOTCOMPLETE					(0x0u << 1)
#define ADC1_SR_EOC_COMPLETE					(0x1u << 1)
	/* Analog watchdog flag */
#define ADC1_SR_AWD						(1u << 0)
#define ADC1_SR_AWD_NOEVENT					(0x0u << 0)
#define ADC1_SR_AWD_EVENT					(0x1u << 0)

	/* 0x04: control register 1 */
	uint32_t volatile CR1;
	/* Overrun interrupt enable */
#define ADC1_CR1_OVRIE						(1u << 26)
#define ADC1_CR1_OVRIE_DISABLED					(0x0u << 26)
#define ADC1_CR1_OVRIE_ENABLED					(0x1u << 26)
	/* Resolution */
#define ADC1_CR1_RES_Msk					(0x3u << 24)
#define ADC1_CR1_RES_Pos					24
#define ADC1_CR1_RES_TWELVEBIT					(0x0u << 24)
#define ADC1_CR1_RES_TENBIT					(0x1u << 24)
#define ADC1_CR1_RES_EIGHTBIT					(0x2u << 24)
#define ADC1_CR1_RES_SIXBIT					(0x3u << 24)
	/* Analog watchdog enable on regular */
#define ADC1_CR1_AWDEN						(1u << 23)
#define ADC1_CR1_AWDEN_DISABLED					(0x0u << 23)
#define ADC1_CR1_AWDEN_ENABLED					(0x1u << 23)
	/* Analog watchdog enable on injected */
#define ADC1_CR1_JAWDEN						(1u << 22)
#define ADC1_CR1_JAWDEN_DISABLED				(0x0u << 22)
#define ADC1_CR1_JAWDEN_ENABLED					(0x1u << 22)
	/* Discontinuous mode channel */
#define ADC1_CR1_DISCNUM_Msk					(0x7u << 13)
#define ADC1_CR1_DISCNUM_Pos					13
	/* Discontinuous mode on injected */
#define ADC1_CR1_JDISCEN					(1u << 12)
#define ADC1_CR1_JDISCEN_DISABLED				(0x0u << 12)
#define ADC1_CR1_JDISCEN_ENABLED				(0x1u << 12)
	/* Discontinuous mode on regular */
#define ADC1_CR1_DISCEN						(1u << 11)
#define ADC1_CR1_DISCEN_DISABLED				(0x0u << 11)
#define ADC1_CR1_DISCEN_ENABLED					(0x1u << 11)
	/* Automatic injected group */
#define ADC1_CR1_JAUTO						(1u << 10)
#define ADC1_CR1_JAUTO_DISABLED					(0x0u << 10)
#define ADC1_CR1_JAUTO_ENABLED					(0x1u << 10)
	/* Enable the watchdog on a single channel */
#define ADC1_CR1_AWDSGL						(1u << 9)
#define ADC1_CR1_AWDSGL_ALLCHANNELS				(0x0u << 9)
#define ADC1_CR1_AWDSGL_SINGLECHANNEL				(0x1u << 9)
	/* Scan mode */
#define ADC1_CR1_SCAN						(1u << 8)
#define ADC1_CR1_SCAN_DISABLED					(0x0u << 8)
#define ADC1_CR1_SCAN_ENABLED					(0x1u << 8)
	/* Interrupt enable for injected */
#define ADC1_CR1_JEOCIE						(1u << 7)
#define ADC1_CR1_JEOCIE_DISABLED				(0x0u << 7)
#define ADC1_CR1_JEOCIE_ENABLED					(0x1u << 7)
	/* Analog watchdog interrupt */
#define ADC1_CR1_AWDIE						(1u << 6)
#define ADC1_CR1_AWDIE_DISABLED					(0x0u << 6)
#define ADC1_CR1_AWDIE_ENABLED					(0x1u << 6)
	/* Interrupt enable for EOC */
#define ADC1_CR1_EOCIE						(1u << 5)
#define ADC1_CR1_EOCIE_DISABLED					(0x0u << 5)
#define ADC1_CR1_EOCIE_ENABLED					(0x1u << 5)
	/* Analog watchdog channel select */
#define ADC1_CR1_AWDCH_Msk					(0x1Fu << 0)
#define ADC1_CR1_AWDCH_Pos					0

	/* 0x08: control register 2 */
	uint32_t volatile CR2;
	/* Start conversion of regular */
#define ADC1_CR2_SWSTART					(1u << 30)
#define ADC1_CR2_SWSTART_START					(0x1u << 30)
	/* External trigger enable for regular */
#define ADC1_CR2_EXTEN_Msk					(0x3u << 28)
#define ADC1_CR2_EXTEN_Pos					28
#define ADC1_CR2_EXTEN_DISABLED					(0x0u << 28)
#define ADC1_CR2_EXTEN_RISINGEDGE				(0x1u << 28)
#define ADC1_CR2_EXTEN_FALLINGEDGE				(0x2u << 28)
#define ADC1_CR2_EXTEN_BOTHEDGES				(0x3u << 28)
	/* External event select for regular */
#define ADC1_CR2_EXTSEL_Msk					(0xFu << 24)
#define ADC1_CR2_EXTSEL_Pos					24
#define ADC1_CR2_EXTSEL_TIM1CC1					(0x0u << 24)
#define ADC1_CR2_EXTSEL_TIM1CC2					(0x1u << 24)
#define ADC1_CR2_EXTSEL_TIM1CC3					(0x2u << 24)
#define ADC1_CR2_EXTSEL_TIM2CC2					(0x3u << 24)
#define ADC1_CR2_EXTSEL_TIM2CC3					(0x4u << 24)
#define ADC1_CR2_EXTSEL_TIM2CC4					(0x5u << 24)
#define ADC1_CR2_EXTSEL_TIM2TRGO				(0x6u << 24)
	/* Start conversion of injected */
#define ADC1_CR2_JSWSTART					(1u << 22)
#define ADC1_CR2_JSWSTART_START					(0x1u << 22)
	/* External trigger enable for injected */
#define ADC1_CR2_JEXTEN_Msk					(0x3u << 20)
#define ADC1_CR2_JEXTEN_Pos					20
#define ADC1_CR2_JEXTEN_DISABLED				(0x0u << 20)
#define ADC1_CR2_JEXTEN_RISINGEDGE				(0x1u << 20)
#define ADC1_CR2_JEXTEN_FALLINGEDGE				(0x2u << 20)
#define ADC1_CR2_JEXTEN_BOTHEDGES				(0x3u << 20)
	/* External event select for injected */
#define ADC1_CR2_JEXTSEL_Msk					(0xFu << 16)
#define ADC1_CR2_JEXTSEL_Pos					16
#define ADC1_CR2_JEXTSEL_TIM1TRGO				(0x0u << 16)
#define ADC1_CR2_JEXTSEL_TIM1CC4				(0x1u << 16)
#define ADC1_CR2_JEXTSEL_TIM2TRGO				(0x2u << 16)
#define ADC1_CR2_JEXTSEL_TIM2CC1				(0x3u << 16)
#define ADC1_CR2_JEXTSEL_TIM3CC4				(0x4u << 16)
#define ADC1_CR2_JEXTSEL_TIM4TRGO				(0x5u << 16)
#define ADC1_CR2_JEXTSEL_TIM8CC4				(0x7u << 16)
#define ADC1_CR2_JEXTSEL_TIM1TRGO2				(0x8u << 16)
#define ADC1_CR2_JEXTSEL_TIM8TRGO				(0x9u << 16)
#define ADC1_CR2_JEXTSEL_TIM8TRGO2				(0xAu << 16)
#define ADC1_CR2_JEXTSEL_TIM3CC3				(0xBu << 16)
#define ADC1_CR2_JEXTSEL_TIM5TRGO				(0xCu << 16)
#define ADC1_CR2_JEXTSEL_TIM3CC1				(0xDu << 16)
#define ADC1_CR2_JEXTSEL_TIM6TRGO				(0xEu << 16)
	/* Data alignment */
#define ADC1_CR2_ALIGN						(1u << 11)
#define ADC1_CR2_ALIGN_RIGHT					(0x0u << 11)
#define ADC1_CR2_ALIGN_LEFT					(0x1u << 11)
	/* End of conversion */
#define ADC1_CR2_EOCS						(1u << 10)
#define ADC1_CR2_EOCS_EACHSEQUENCE				(0x0u << 10)
#define ADC1_CR2_EOCS_EACHCONVERSION				(0x1u << 10)
	/* DMA disable selection (for single ADC */
#define ADC1_CR2_DDS						(1u << 9)
#define ADC1_CR2_DDS_SINGLE					(0x0u << 9)
#define ADC1_CR2_DDS_CONTINUOUS					(0x1u << 9)
	/* Direct memory access mode (for single */
#define ADC1_CR2_DMA						(1u << 8)
#define ADC1_CR2_DMA_DISABLED					(0x0u << 8)
#define ADC1_CR2_DMA_ENABLED					(0x1u << 8)
	/* Continuous conversion */
#define ADC1_CR2_CONT						(1u << 1)
#define ADC1_CR2_CONT_SINGLE					(0x0u << 1)
#define ADC1_CR2_CONT_CONTINUOUS				(0x1u << 1)
	/* A/D Converter ON / OFF */
#define ADC1_CR2_ADON						(1u << 0)
#define ADC1_CR2_ADON_DISABLED					(0x0u << 0)
#define ADC1_CR2_ADON_ENABLED					(0x1u << 0)

	/* 0x0C: sample time register 1 */
	uint32_t volatile SMPR1;
	/* Channel 18 sampling time selection */
#define ADC1_SMPR1_SMP18_Msk					(0x7u << 24)
#define ADC1_SMPR1_SMP18_Pos					24
#define ADC1_SMPR1_SMP18_CYCLES3				(0x0u << 24)
#define ADC1_SMPR1_SMP18_CYCLES15				(0x1u << 24)
#define ADC1_SMPR1_SMP18_CYCLES28				(0x2u << 24)
#define ADC1_SMPR1_SMP18_CYCLES56				(0x3u << 24)
#define ADC1_SMPR1_SMP18_CYCLES84				(0x4u << 24)
#define ADC1_SMPR1_SMP18_CYCLES112				(0x5u << 24)
#define ADC1_SMPR1_SMP18_CYCLES144				(0x6u << 24)
#define ADC1_SMPR1_SMP18_CYCLES480				(0x7u << 24)
	/* Channel 17 sampling time selection */
#define ADC1_SMPR1_SMP17_Msk					(0x7u << 21)
#define ADC1_SMPR1_SMP17_Pos					21
	/* Channel 16 sampling time selection */
#define ADC1_SMPR1_SMP16_Msk					(0x7u << 18)
#define ADC1_SMPR1_SMP16_Pos					18
	/* Channel 15 sampling time selection */
#define ADC1_SMPR1_SMP15_Msk					(0x7u << 15)
#define ADC1_SMPR1_SMP15_Pos					15
	/* Channel 14 sampling time selection */
#define ADC1_SMPR1_SMP14_Msk					(0x7u << 12)
#define ADC1_SMPR1_SMP14_Pos					12
	/* Channel 13 sampling time selection */
#define ADC1_SMPR1_SMP13_Msk					(0x7u << 9)
#define ADC1_SMPR1_SMP13_Pos					9
	/* Channel 12 sampling time selection */
#define ADC1_SMPR1_SMP12_Msk					(0x7u << 6)
#define ADC1_SMPR1_SMP12_Pos					6
	/* Channel 11 sampling time selection */
#define ADC1_SMPR1_SMP11_Msk					(0x7u << 3)
#define ADC1_SMPR1_SMP11_Pos					3
	/* Channel 10 sampling time selection */
#define ADC1_SMPR1_SMP10_Msk					(0x7u << 0)
#define ADC1_SMPR1_SMP10_Pos					0

	/* 0x10: sample time register 2 */
	uint32_t volatile SMPR2;
	/* Channel 9 sampling time selection */
#define ADC1_SMPR2_SMP9_Msk					(0x7u << 27)
#define ADC1_SMPR2_SMP9_Pos					27
#define ADC1_SMPR2_SMP9_CYCLES3					(0x0u << 27)
#define ADC1_SMPR2_SMP9_CYCLES15				(0x1u << 27)
#define ADC1_SMPR2_SMP9_CYCLES28				(0x2u << 27)
#define ADC1_SMPR2_SMP9_CYCLES56				(0x3u << 27)
#define ADC1_SMPR2_SMP9_CYCLES84				(0x4u << 27)
#define ADC1_SMPR2_SMP9_CYCLES112				(0x5u << 27)
#define ADC1_SMPR2_SMP9_CYCLES144				(0x6u << 27)
#define ADC1_SMPR2_SMP9_CYCLES480				(0x7u << 27)
	/* Channel 8 sampling time selection */
#define ADC1_SMPR2_SMP8_Msk					(0x7u << 24)
#define ADC1_SMPR2_SMP8_Pos					24
	/* Channel 7 sampling time selection */
#define ADC1_SMPR2_SMP7_Msk					(0x7u << 21)
#define ADC1_SMPR2_SMP7_Pos					21
	/* Channel 6 sampling time selection */
#define ADC1_SMPR2_SMP6_Msk					(0x7u << 18)
#define ADC1_SMPR2_SMP6_Pos					18
	/* Channel 5 sampling time selection */
#define ADC1_SMPR2_SMP5_Msk					(0x7u << 15)
#define ADC1_SMPR2_SMP5_Pos					15
	/* Channel 4 sampling time selection */
#define ADC1_SMPR2_SMP4_Msk					(0x7u << 12)
#define ADC1_SMPR2_SMP4_Pos					12
	/* Channel 3 sampling time selection */
#define ADC1_SMPR2_SMP3_Msk					(0x7u << 9)
#define ADC1_SMPR2_SMP3_Pos					9
	/* Channel 2 sampling time selection */
#define ADC1_SMPR2_SMP2_Msk					(0x7u << 6)
#define ADC1_SMPR2_SMP2_Pos					6
	/* Channel 1 sampling time selection */
#define ADC1_SMPR2_SMP1_Msk					(0x7u << 3)
#define ADC1_SMPR2_SMP1_Pos					3
	/* Channel 0 sampling time selection */
#define ADC1_SMPR2_SMP0_Msk					(0x7u << 0)
#define ADC1_SMPR2_SMP0_Pos					0

	/* 0x14: injected channel data offset register */
	uint32_t volatile JOFR[4];
	/* Data offset for injected channel */
#define ADC1_JOFR_JOFFSET_Msk					(0xFFFu << 0)
#define ADC1_JOFR_JOFFSET_Pos					0

	/* 0x18 */
	uint8_t RESERVED0[0x24u-0x18u];

	/* 0x24: watchdog higher threshold */
	uint32_t volatile HTR;
	/* Analog watchdog higher */
#define ADC1_HTR_HT_Msk						(0xFFFu << 0)
#define ADC1_HTR_HT_Pos						0

	/* 0x28: watchdog lower threshold */
	uint32_t volatile LTR;
	/* Analog watchdog lower */
#define ADC1_LTR_LT_Msk						(0xFFFu << 0)
#define ADC1_LTR_LT_Pos						0

	/* 0x2C: regular sequence register 1 */
	uint32_t volatile SQR1;
	/* Regular channel sequence */
#define ADC1_SQR1_L_Msk						(0xFu << 20)
#define ADC1_SQR1_L_Pos						20
	/* 16th conversion in regular */
#define ADC1_SQR1_SQ16_Msk					(0x1Fu << 15)
#define ADC1_SQR1_SQ16_Pos					15
	/* 15th conversion in regular */
#define ADC1_SQR1_SQ15_Msk					(0x1Fu << 10)
#define ADC1_SQR1_SQ15_Pos					10
	/* 14th conversion in regular */
#define ADC1_SQR1_SQ14_Msk					(0x1Fu << 5)
#define ADC1_SQR1_SQ14_Pos					5
	/* 13th conversion in regular */
#define ADC1_SQR1_SQ13_Msk					(0x1Fu << 0)
#define ADC1_SQR1_SQ13_Pos					0

	/* 0x30: regular sequence register 2 */
	uint32_t volatile SQR2;
	/* 12th conversion in regular */
#define ADC1_SQR2_SQ12_Msk					(0x1Fu << 25)
#define ADC1_SQR2_SQ12_Pos					25
	/* 11th conversion in regular */
#define ADC1_SQR2_SQ11_Msk					(0x1Fu << 20)
#define ADC1_SQR2_SQ11_Pos					20
	/* 10th conversion in regular */
#define ADC1_SQR2_SQ10_Msk					(0x1Fu << 15)
#define ADC1_SQR2_SQ10_Pos					15
	/* 9th conversion in regular */
#define ADC1_SQR2_SQ9_Msk					(0x1Fu << 10)
#define ADC1_SQR2_SQ9_Pos					10
	/* 8th conversion in regular */
#define ADC1_SQR2_SQ8_Msk					(0x1Fu << 5)
#define ADC1_SQR2_SQ8_Pos					5
	/* 7th conversion in regular */
#define ADC1_SQR2_SQ7_Msk					(0x1Fu << 0)
#define ADC1_SQR2_SQ7_Pos					0

	/* 0x34: regular sequence register 3 */
	uint32_t volatile SQR3;
	/* 6th conversion in regular */
#define ADC1_SQR3_SQ6_Msk					(0x1Fu << 25)
#define ADC1_SQR3_SQ6_Pos					25
	/* 5th conversion in regular */
#define ADC1_SQR3_SQ5_Msk					(0x1Fu << 20)
#define ADC1_SQR3_SQ5_Pos					20
	/* 4th conversion in regular */
#define ADC1_SQR3_SQ4_Msk					(0x1Fu << 15)
#define ADC1_SQR3_SQ4_Pos					15
	/* 3rd conversion in regular */
#define ADC1_SQR3_SQ3_Msk					(0x1Fu << 10)
#define ADC1_SQR3_SQ3_Pos					10
	/* 2nd conversion in regular */
#define ADC1_SQR3_SQ2_Msk					(0x1Fu << 5)
#define ADC1_SQR3_SQ2_Pos					5
	/* 1st conversion in regular */
#define ADC1_SQR3_SQ1_Msk					(0x1Fu << 0)
#define ADC1_SQR3_SQ1_Pos					0

	/* 0x38: injected sequence register */
	uint32_t volatile JSQR;
	/* Injected sequence length */
#define ADC1_JSQR_JL_Msk					(0x3u << 20)
#define ADC1_JSQR_JL_Pos					20
	/* 4th conversion in injected */
#define ADC1_JSQR_JSQ4_Msk					(0x1Fu << 15)
#define ADC1_JSQR_JSQ4_Pos					15
	/* 3rd conversion in injected */
#define ADC1_JSQR_JSQ3_Msk					(0x1Fu << 10)
#define ADC1_JSQR_JSQ3_Pos					10
	/* 2nd conversion in injected */
#define ADC1_JSQR_JSQ2_Msk					(0x1Fu << 5)
#define ADC1_JSQR_JSQ2_Pos					5
	/* 1st conversion in injected */
#define ADC1_JSQR_JSQ1_Msk					(0x1Fu << 0)
#define ADC1_JSQR_JSQ1_Pos					0

	/* 0x3C: injected data register x */
	uint32_t volatile const JDR[4];
	/* Injected data */
#define ADC1_JDR_JDATA_Msk					(0xFFFFu << 0)
#define ADC1_JDR_JDATA_Pos					0

	/* 0x40 */
	uint8_t RESERVED1[0x4Cu-0x40u];

	/* 0x4C: regular data register */
	uint32_t volatile const DR;
	/* Regular data */
#define ADC1_DR_DATA_Msk					(0xFFFFu << 0)
#define ADC1_DR_DATA_Pos					0

};


#define CRC ((struct sdk_crc *)0x40023000)

struct sdk_crc {

	/* 0x00: Data register */
	uint32_t volatile DR;
	/* Data Register */
#define CRC_DR_DR_Msk						(0xFFFFFFFFu << 0)
#define CRC_DR_DR_Pos						0

	/* 0x04: Independent Data register */
	uint32_t volatile IDR;
	/* Independent Data register */
#define CRC_IDR_IDR_Msk						(0xFFu << 0)
#define CRC_IDR_IDR_Pos						0

	/* 0x08: Control register */
	uint32_t volatile CR;
	/* Control regidter */
#define CRC_CR_RESET						(1u << 0)
#define CRC_CR_RESET_RESET					(0x1u << 0)

};


#define DBGMCU ((struct sdk_dbgmcu *)0xE0042000)

struct sdk_dbgmcu {

	/* 0x00: IDCODE */
	uint32_t volatile const IDCODE;
	/* DEV_ID */
#define DBGMCU_IDCODE_DEV_ID_Msk				(0xFFFu << 0)
#define DBGMCU_IDCODE_DEV_ID_Pos				0
	/* REV_ID */
#define DBGMCU_IDCODE_REV_ID_Msk				(0xFFFFu << 16)
#define DBGMCU_IDCODE_REV_ID_Pos				16

	/* 0x04: Control Register */
	uint32_t volatile CR;
	/* DBG_SLEEP */
#define DBGMCU_CR_DBG_SLEEP					(1u << 0)
	/* DBG_STOP */
#define DBGMCU_CR_DBG_STOP					(1u << 1)
	/* DBG_STANDBY */
#define DBGMCU_CR_DBG_STANDBY					(1u << 2)
	/* TRACE_IOEN */
#define DBGMCU_CR_TRACE_IOEN					(1u << 5)
	/* TRACE_MODE */
#define DBGMCU_CR_TRACE_MODE_Msk				(0x3u << 6)
#define DBGMCU_CR_TRACE_MODE_Pos				6

	/* 0x08: Debug MCU APB1 Freeze registe */
	uint32_t volatile APB1_FZ;
	/* DBG_TIM2_STOP */
#define DBGMCU_APB1_FZ_DBG_TIM2_STOP				(1u << 0)
	/* DBG_TIM3 _STOP */
#define DBGMCU_APB1_FZ_DBG_TIM3_STOP				(1u << 1)
	/* DBG_TIM4_STOP */
#define DBGMCU_APB1_FZ_DBG_TIM4_STOP				(1u << 2)
	/* DBG_TIM5_STOP */
#define DBGMCU_APB1_FZ_DBG_TIM5_STOP				(1u << 3)
	/* RTC stopped when Core is */
#define DBGMCU_APB1_FZ_DBG_RTC_STOP				(1u << 10)
	/* DBG_WWDG_STOP */
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP				(1u << 11)
	/* DBG_IWDEG_STOP */
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP				(1u << 12)
	/* DBG_J2C1_SMBUS_TIMEOUT */
#define DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT			(1u << 21)
	/* DBG_J2C2_SMBUS_TIMEOUT */
#define DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT			(1u << 22)
	/* DBG_J2C3SMBUS_TIMEOUT */
#define DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT			(1u << 23)

	/* 0x0C: Debug MCU APB2 Freeze registe */
	uint32_t volatile APB2_FZ;
	/* TIM1 counter stopped when core is */
#define DBGMCU_APB2_FZ_DBG_TIM1_STOP				(1u << 0)
	/* TIM9 counter stopped when core is */
#define DBGMCU_APB2_FZ_DBG_TIM9_STOP				(1u << 16)
	/* TIM10 counter stopped when core is */
#define DBGMCU_APB2_FZ_DBG_TIM10_STOP				(1u << 17)
	/* TIM11 counter stopped when core is */
#define DBGMCU_APB2_FZ_DBG_TIM11_STOP				(1u << 18)

};


#define EXTI ((struct sdk_exti *)0x40013C00)

struct sdk_exti {

	/* 0x00: Interrupt mask register */
	uint32_t volatile IMR;
	/* Interrupt Mask on line 0 */
#define EXTI_IMR_MR0						(1u << 0)
#define EXTI_IMR_MR0_MASKED					(0x0u << 0)
#define EXTI_IMR_MR0_UNMASKED					(0x1u << 0)
	/* Interrupt Mask on line 1 */
#define EXTI_IMR_MR1						(1u << 1)
	/* Interrupt Mask on line 2 */
#define EXTI_IMR_MR2						(1u << 2)
	/* Interrupt Mask on line 3 */
#define EXTI_IMR_MR3						(1u << 3)
	/* Interrupt Mask on line 4 */
#define EXTI_IMR_MR4						(1u << 4)
	/* Interrupt Mask on line 5 */
#define EXTI_IMR_MR5						(1u << 5)
	/* Interrupt Mask on line 6 */
#define EXTI_IMR_MR6						(1u << 6)
	/* Interrupt Mask on line 7 */
#define EXTI_IMR_MR7						(1u << 7)
	/* Interrupt Mask on line 8 */
#define EXTI_IMR_MR8						(1u << 8)
	/* Interrupt Mask on line 9 */
#define EXTI_IMR_MR9						(1u << 9)
	/* Interrupt Mask on line 10 */
#define EXTI_IMR_MR10						(1u << 10)
	/* Interrupt Mask on line 11 */
#define EXTI_IMR_MR11						(1u << 11)
	/* Interrupt Mask on line 12 */
#define EXTI_IMR_MR12						(1u << 12)
	/* Interrupt Mask on line 13 */
#define EXTI_IMR_MR13						(1u << 13)
	/* Interrupt Mask on line 14 */
#define EXTI_IMR_MR14						(1u << 14)
	/* Interrupt Mask on line 15 */
#define EXTI_IMR_MR15						(1u << 15)
	/* Interrupt Mask on line 16 */
#define EXTI_IMR_MR16						(1u << 16)
	/* Interrupt Mask on line 17 */
#define EXTI_IMR_MR17						(1u << 17)
	/* Interrupt Mask on line 18 */
#define EXTI_IMR_MR18						(1u << 18)
	/* Interrupt Mask on line 19 */
#define EXTI_IMR_MR19						(1u << 19)
	/* Interrupt Mask on line 20 */
#define EXTI_IMR_MR20						(1u << 20)
	/* Interrupt Mask on line 21 */
#define EXTI_IMR_MR21						(1u << 21)
	/* Interrupt Mask on line 22 */
#define EXTI_IMR_MR22						(1u << 22)

	/* 0x04: Event mask register (EXTI_EMR) */
	uint32_t volatile EMR;
	/* Event Mask on line 0 */
#define EXTI_EMR_MR0						(1u << 0)
#define EXTI_EMR_MR0_MASKED					(0x0u << 0)
#define EXTI_EMR_MR0_UNMASKED					(0x1u << 0)
	/* Event Mask on line 1 */
#define EXTI_EMR_MR1						(1u << 1)
	/* Event Mask on line 2 */
#define EXTI_EMR_MR2						(1u << 2)
	/* Event Mask on line 3 */
#define EXTI_EMR_MR3						(1u << 3)
	/* Event Mask on line 4 */
#define EXTI_EMR_MR4						(1u << 4)
	/* Event Mask on line 5 */
#define EXTI_EMR_MR5						(1u << 5)
	/* Event Mask on line 6 */
#define EXTI_EMR_MR6						(1u << 6)
	/* Event Mask on line 7 */
#define EXTI_EMR_MR7						(1u << 7)
	/* Event Mask on line 8 */
#define EXTI_EMR_MR8						(1u << 8)
	/* Event Mask on line 9 */
#define EXTI_EMR_MR9						(1u << 9)
	/* Event Mask on line 10 */
#define EXTI_EMR_MR10						(1u << 10)
	/* Event Mask on line 11 */
#define EXTI_EMR_MR11						(1u << 11)
	/* Event Mask on line 12 */
#define EXTI_EMR_MR12						(1u << 12)
	/* Event Mask on line 13 */
#define EXTI_EMR_MR13						(1u << 13)
	/* Event Mask on line 14 */
#define EXTI_EMR_MR14						(1u << 14)
	/* Event Mask on line 15 */
#define EXTI_EMR_MR15						(1u << 15)
	/* Event Mask on line 16 */
#define EXTI_EMR_MR16						(1u << 16)
	/* Event Mask on line 17 */
#define EXTI_EMR_MR17						(1u << 17)
	/* Event Mask on line 18 */
#define EXTI_EMR_MR18						(1u << 18)
	/* Event Mask on line 19 */
#define EXTI_EMR_MR19						(1u << 19)
	/* Event Mask on line 20 */
#define EXTI_EMR_MR20						(1u << 20)
	/* Event Mask on line 21 */
#define EXTI_EMR_MR21						(1u << 21)
	/* Event Mask on line 22 */
#define EXTI_EMR_MR22						(1u << 22)

	/* 0x08: Rising Trigger selection register */
	uint32_t volatile RTSR;
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR0						(1u << 0)
#define EXTI_RTSR_TR0_DISABLED					(0x0u << 0)
#define EXTI_RTSR_TR0_ENABLED					(0x1u << 0)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR1						(1u << 1)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR2						(1u << 2)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR3						(1u << 3)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR4						(1u << 4)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR5						(1u << 5)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR6						(1u << 6)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR7						(1u << 7)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR8						(1u << 8)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR9						(1u << 9)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR10						(1u << 10)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR11						(1u << 11)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR12						(1u << 12)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR13						(1u << 13)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR14						(1u << 14)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR15						(1u << 15)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR16						(1u << 16)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR17						(1u << 17)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR18						(1u << 18)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR19						(1u << 19)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR20						(1u << 20)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR21						(1u << 21)
	/* Rising trigger event configuration of */
#define EXTI_RTSR_TR22						(1u << 22)

	/* 0x0C: Falling Trigger selection register */
	uint32_t volatile FTSR;
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR0						(1u << 0)
#define EXTI_FTSR_TR0_DISABLED					(0x0u << 0)
#define EXTI_FTSR_TR0_ENABLED					(0x1u << 0)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR1						(1u << 1)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR2						(1u << 2)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR3						(1u << 3)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR4						(1u << 4)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR5						(1u << 5)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR6						(1u << 6)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR7						(1u << 7)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR8						(1u << 8)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR9						(1u << 9)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR10						(1u << 10)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR11						(1u << 11)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR12						(1u << 12)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR13						(1u << 13)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR14						(1u << 14)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR15						(1u << 15)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR16						(1u << 16)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR17						(1u << 17)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR18						(1u << 18)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR19						(1u << 19)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR20						(1u << 20)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR21						(1u << 21)
	/* Falling trigger event configuration of */
#define EXTI_FTSR_TR22						(1u << 22)

	/* 0x10: Software interrupt event register */
	uint32_t volatile SWIER;
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER0					(1u << 0)
#define EXTI_SWIER_SWIER0_PEND					(0x1u << 0)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER1					(1u << 1)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER2					(1u << 2)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER3					(1u << 3)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER4					(1u << 4)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER5					(1u << 5)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER6					(1u << 6)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER7					(1u << 7)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER8					(1u << 8)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER9					(1u << 9)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER10					(1u << 10)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER11					(1u << 11)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER12					(1u << 12)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER13					(1u << 13)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER14					(1u << 14)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER15					(1u << 15)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER16					(1u << 16)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER17					(1u << 17)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER18					(1u << 18)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER19					(1u << 19)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER20					(1u << 20)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER21					(1u << 21)
	/* Software Interrupt on line */
#define EXTI_SWIER_SWIER22					(1u << 22)

	/* 0x14: Pending register (EXTI_PR) */
	uint32_t volatile PR;
	/* Pending bit 0 */
#define EXTI_PR_PR0						(1u << 0)
#define EXTI_PR_PR0_NOTPENDING					(0x0u << 0)
#define EXTI_PR_PR0_PENDING					(0x1u << 0)
#define EXTI_PR_PR0_CLEAR					(0x1u << 0)
	/* Pending bit 1 */
#define EXTI_PR_PR1						(1u << 1)
	/* Pending bit 2 */
#define EXTI_PR_PR2						(1u << 2)
	/* Pending bit 3 */
#define EXTI_PR_PR3						(1u << 3)
	/* Pending bit 4 */
#define EXTI_PR_PR4						(1u << 4)
	/* Pending bit 5 */
#define EXTI_PR_PR5						(1u << 5)
	/* Pending bit 6 */
#define EXTI_PR_PR6						(1u << 6)
	/* Pending bit 7 */
#define EXTI_PR_PR7						(1u << 7)
	/* Pending bit 8 */
#define EXTI_PR_PR8						(1u << 8)
	/* Pending bit 9 */
#define EXTI_PR_PR9						(1u << 9)
	/* Pending bit 10 */
#define EXTI_PR_PR10						(1u << 10)
	/* Pending bit 11 */
#define EXTI_PR_PR11						(1u << 11)
	/* Pending bit 12 */
#define EXTI_PR_PR12						(1u << 12)
	/* Pending bit 13 */
#define EXTI_PR_PR13						(1u << 13)
	/* Pending bit 14 */
#define EXTI_PR_PR14						(1u << 14)
	/* Pending bit 15 */
#define EXTI_PR_PR15						(1u << 15)
	/* Pending bit 16 */
#define EXTI_PR_PR16						(1u << 16)
	/* Pending bit 17 */
#define EXTI_PR_PR17						(1u << 17)
	/* Pending bit 18 */
#define EXTI_PR_PR18						(1u << 18)
	/* Pending bit 19 */
#define EXTI_PR_PR19						(1u << 19)
	/* Pending bit 20 */
#define EXTI_PR_PR20						(1u << 20)
	/* Pending bit 21 */
#define EXTI_PR_PR21						(1u << 21)
	/* Pending bit 22 */
#define EXTI_PR_PR22						(1u << 22)

};


#define FLASH ((struct sdk_flash *)0x40023C00)

struct sdk_flash {

	/* 0x00: Flash access control register */
	uint32_t volatile ACR;
	/* Latency */
#define FLASH_ACR_LATENCY_Msk					(0xFu << 0)
#define FLASH_ACR_LATENCY_Pos					0
#define FLASH_ACR_LATENCY_WS0					(0x0u << 0)
#define FLASH_ACR_LATENCY_WS1					(0x1u << 0)
#define FLASH_ACR_LATENCY_WS2					(0x2u << 0)
#define FLASH_ACR_LATENCY_WS3					(0x3u << 0)
#define FLASH_ACR_LATENCY_WS4					(0x4u << 0)
#define FLASH_ACR_LATENCY_WS5					(0x5u << 0)
#define FLASH_ACR_LATENCY_WS6					(0x6u << 0)
#define FLASH_ACR_LATENCY_WS7					(0x7u << 0)
#define FLASH_ACR_LATENCY_WS8					(0x8u << 0)
#define FLASH_ACR_LATENCY_WS9					(0x9u << 0)
#define FLASH_ACR_LATENCY_WS10					(0xAu << 0)
#define FLASH_ACR_LATENCY_WS11					(0xBu << 0)
#define FLASH_ACR_LATENCY_WS12					(0xCu << 0)
#define FLASH_ACR_LATENCY_WS13					(0xDu << 0)
#define FLASH_ACR_LATENCY_WS14					(0xEu << 0)
#define FLASH_ACR_LATENCY_WS15					(0xFu << 0)
	/* Prefetch enable */
#define FLASH_ACR_PRFTEN					(1u << 8)
#define FLASH_ACR_PRFTEN_DISABLED				(0x0u << 8)
#define FLASH_ACR_PRFTEN_ENABLED				(0x1u << 8)
	/* Instruction cache enable */
#define FLASH_ACR_ICEN						(1u << 9)
#define FLASH_ACR_ICEN_DISABLED					(0x0u << 9)
#define FLASH_ACR_ICEN_ENABLED					(0x1u << 9)
	/* Data cache enable */
#define FLASH_ACR_DCEN						(1u << 10)
#define FLASH_ACR_DCEN_DISABLED					(0x0u << 10)
#define FLASH_ACR_DCEN_ENABLED					(0x1u << 10)
	/* Instruction cache reset */
#define FLASH_ACR_ICRST						(1u << 11)
#define FLASH_ACR_ICRST_NOTRESET				(0x0u << 11)
#define FLASH_ACR_ICRST_RESET					(0x1u << 11)
	/* Data cache reset */
#define FLASH_ACR_DCRST						(1u << 12)
#define FLASH_ACR_DCRST_NOTRESET				(0x0u << 12)
#define FLASH_ACR_DCRST_RESET					(0x1u << 12)

	/* 0x04: Flash key register */
	uint32_t volatile KEYR;
	/* FPEC key */
#define FLASH_KEYR_KEY_Msk					(0xFFFFFFFFu << 0)
#define FLASH_KEYR_KEY_Pos					0

	/* 0x08: Flash option key register */
	uint32_t volatile OPTKEYR;
	/* Option byte key */
#define FLASH_OPTKEYR_OPTKEY_Msk				(0xFFFFFFFFu << 0)
#define FLASH_OPTKEYR_OPTKEY_Pos				0

	/* 0x0C: Status register */
	uint32_t volatile SR;
	/* End of operation */
#define FLASH_SR_EOP						(1u << 0)
	/* Operation error */
#define FLASH_SR_OPERR						(1u << 1)
	/* Write protection error */
#define FLASH_SR_WRPERR						(1u << 4)
	/* Programming alignment */
#define FLASH_SR_PGAERR						(1u << 5)
	/* Programming parallelism */
#define FLASH_SR_PGPERR						(1u << 6)
	/* Programming sequence error */
#define FLASH_SR_PGSERR						(1u << 7)
	/* Busy */
#define FLASH_SR_BSY						(1u << 16)

	/* 0x10: Control register */
	uint32_t volatile CR;
	/* Programming */
#define FLASH_CR_PG						(1u << 0)
#define FLASH_CR_PG_PROGRAM					(0x1u << 0)
	/* Sector Erase */
#define FLASH_CR_SER						(1u << 1)
#define FLASH_CR_SER_SECTORERASE				(0x1u << 1)
	/* Mass Erase */
#define FLASH_CR_MER						(1u << 2)
#define FLASH_CR_MER_MASSERASE					(0x1u << 2)
	/* Sector number */
#define FLASH_CR_SNB_Msk					(0xFu << 3)
#define FLASH_CR_SNB_Pos					3
	/* Program size */
#define FLASH_CR_PSIZE_Msk					(0x3u << 8)
#define FLASH_CR_PSIZE_Pos					8
#define FLASH_CR_PSIZE_PSIZE8					(0x0u << 8)
#define FLASH_CR_PSIZE_PSIZE16					(0x1u << 8)
#define FLASH_CR_PSIZE_PSIZE32					(0x2u << 8)
#define FLASH_CR_PSIZE_PSIZE64					(0x3u << 8)
	/* Start */
#define FLASH_CR_STRT						(1u << 16)
#define FLASH_CR_STRT_START					(0x1u << 16)
	/* End of operation interrupt */
#define FLASH_CR_EOPIE						(1u << 24)
#define FLASH_CR_EOPIE_DISABLED					(0x0u << 24)
#define FLASH_CR_EOPIE_ENABLED					(0x1u << 24)
	/* Error interrupt enable */
#define FLASH_CR_ERRIE						(1u << 25)
#define FLASH_CR_ERRIE_DISABLED					(0x0u << 25)
#define FLASH_CR_ERRIE_ENABLED					(0x1u << 25)
	/* Lock */
#define FLASH_CR_LOCK						(1u << 31)
#define FLASH_CR_LOCK_UNLOCKED					(0x0u << 31)
#define FLASH_CR_LOCK_LOCKED					(0x1u << 31)

	/* 0x14: Flash option control register */
	uint32_t volatile OPTCR;
	/* Option lock */
#define FLASH_OPTCR_OPTLOCK					(1u << 0)
	/* Option start */
#define FLASH_OPTCR_OPTSTRT					(1u << 1)
	/* BOR reset Level */
#define FLASH_OPTCR_BOR_LEV_Msk					(0x3u << 2)
#define FLASH_OPTCR_BOR_LEV_Pos					2
	/* WDG_SW User option bytes */
#define FLASH_OPTCR_WDG_SW					(1u << 5)
	/* nRST_STOP User option */
#define FLASH_OPTCR_NRST_STOP					(1u << 6)
	/* nRST_STDBY User option */
#define FLASH_OPTCR_NRST_STDBY					(1u << 7)
	/* Read protect */
#define FLASH_OPTCR_RDP_Msk					(0xFFu << 8)
#define FLASH_OPTCR_RDP_Pos					8
	/* Not write protect */
#define FLASH_OPTCR_NWRP_Msk					(0xFFFu << 16)
#define FLASH_OPTCR_NWRP_Pos					16

};


#define IWDG ((struct sdk_iwdg *)0x40003000)

struct sdk_iwdg {

	/* 0x00: Key register */
	uint32_t volatile KR;
	/* Key value */
#define IWDG_KR_KEY_Msk						(0xFFFFu << 0)
#define IWDG_KR_KEY_Pos						0
#define IWDG_KR_KEY_ENABLE					(0x5555u << 0)
#define IWDG_KR_KEY_RESET					(0xAAAAu << 0)
#define IWDG_KR_KEY_START					(0xCCCCu << 0)

	/* 0x04: Prescaler register */
	uint32_t volatile PR;
	/* Prescaler divider */
#define IWDG_PR_PR_Msk						(0x7u << 0)
#define IWDG_PR_PR_Pos						0
#define IWDG_PR_PR_DIVIDEBY4					(0x0u << 0)
#define IWDG_PR_PR_DIVIDEBY8					(0x1u << 0)
#define IWDG_PR_PR_DIVIDEBY16					(0x2u << 0)
#define IWDG_PR_PR_DIVIDEBY32					(0x3u << 0)
#define IWDG_PR_PR_DIVIDEBY64					(0x4u << 0)
#define IWDG_PR_PR_DIVIDEBY128					(0x5u << 0)
#define IWDG_PR_PR_DIVIDEBY256					(0x6u << 0)
#define IWDG_PR_PR_DIVIDEBY256BIS				(0x7u << 0)

	/* 0x08: Reload register */
	uint32_t volatile RLR;
	/* Watchdog counter reload */
#define IWDG_RLR_RL_Msk						(0xFFFu << 0)
#define IWDG_RLR_RL_Pos						0

	/* 0x0C: Status register */
	uint32_t volatile const SR;
	/* Watchdog counter reload value */
#define IWDG_SR_RVU						(1u << 1)
	/* Watchdog prescaler value */
#define IWDG_SR_PVU						(1u << 0)

};


#define OTG_FS_DEVICE ((struct sdk_otg_fs_device *)0x50000800)

struct sdk_otg_fs_device {

	/* 0x00: OTG_FS device configuration register */
	uint32_t volatile DCFG;
	/* Device speed */
#define OTG_FS_DEVICE_DCFG_DSPD_Msk				(0x3u << 0)
#define OTG_FS_DEVICE_DCFG_DSPD_Pos				0
	/* Non-zero-length status OUT */
#define OTG_FS_DEVICE_DCFG_NZLSOHSK				(1u << 2)
	/* Device address */
#define OTG_FS_DEVICE_DCFG_DAD_Msk				(0x7Fu << 4)
#define OTG_FS_DEVICE_DCFG_DAD_Pos				4
	/* Periodic frame interval */
#define OTG_FS_DEVICE_DCFG_PFIVL_Msk				(0x3u << 11)
#define OTG_FS_DEVICE_DCFG_PFIVL_Pos				11

	/* 0x04: OTG_FS device control register */
	uint32_t volatile DCTL;
	/* Remote wakeup signaling */
#define OTG_FS_DEVICE_DCTL_RWUSIG				(1u << 0)
	/* Soft disconnect */
#define OTG_FS_DEVICE_DCTL_SDIS					(1u << 1)
	/* Global IN NAK status */
#define OTG_FS_DEVICE_DCTL_GINSTS				(1u << 2)
	/* Global OUT NAK status */
#define OTG_FS_DEVICE_DCTL_GONSTS				(1u << 3)
	/* Test control */
#define OTG_FS_DEVICE_DCTL_TCTL_Msk				(0x7u << 4)
#define OTG_FS_DEVICE_DCTL_TCTL_Pos				4
	/* Set global IN NAK */
#define OTG_FS_DEVICE_DCTL_SGINAK				(1u << 7)
	/* Clear global IN NAK */
#define OTG_FS_DEVICE_DCTL_CGINAK				(1u << 8)
	/* Set global OUT NAK */
#define OTG_FS_DEVICE_DCTL_SGONAK				(1u << 9)
	/* Clear global OUT NAK */
#define OTG_FS_DEVICE_DCTL_CGONAK				(1u << 10)
	/* Power-on programming done */
#define OTG_FS_DEVICE_DCTL_POPRGDNE				(1u << 11)

	/* 0x08: OTG_FS device status register */
	uint32_t volatile const DSTS;
	/* Suspend status */
#define OTG_FS_DEVICE_DSTS_SUSPSTS				(1u << 0)
	/* Enumerated speed */
#define OTG_FS_DEVICE_DSTS_ENUMSPD_Msk				(0x3u << 1)
#define OTG_FS_DEVICE_DSTS_ENUMSPD_Pos				1
	/* Erratic error */
#define OTG_FS_DEVICE_DSTS_EERR					(1u << 3)
	/* Frame number of the received */
#define OTG_FS_DEVICE_DSTS_FNSOF_Msk				(0x3FFFu << 8)
#define OTG_FS_DEVICE_DSTS_FNSOF_Pos				8

	/* 0x0C */
	uint8_t RESERVED0[0x10u-0x0Cu];

	/* 0x10: OTG_FS device IN endpoint common interrupt */
	uint32_t volatile DIEPMSK;
	/* Transfer completed interrupt */
#define OTG_FS_DEVICE_DIEPMSK_XFRCM				(1u << 0)
	/* Endpoint disabled interrupt */
#define OTG_FS_DEVICE_DIEPMSK_EPDM				(1u << 1)
	/* Timeout condition mask (Non-isochronous */
#define OTG_FS_DEVICE_DIEPMSK_TOM				(1u << 3)
	/* IN token received when TxFIFO empty */
#define OTG_FS_DEVICE_DIEPMSK_ITTXFEMSK				(1u << 4)
	/* IN token received with EP mismatch */
#define OTG_FS_DEVICE_DIEPMSK_INEPNMM				(1u << 5)
	/* IN endpoint NAK effective */
#define OTG_FS_DEVICE_DIEPMSK_INEPNEM				(1u << 6)

	/* 0x14: OTG_FS device OUT endpoint common interrupt */
	uint32_t volatile DOEPMSK;
	/* Transfer completed interrupt */
#define OTG_FS_DEVICE_DOEPMSK_XFRCM				(1u << 0)
	/* Endpoint disabled interrupt */
#define OTG_FS_DEVICE_DOEPMSK_EPDM				(1u << 1)
	/* SETUP phase done mask */
#define OTG_FS_DEVICE_DOEPMSK_STUPM				(1u << 3)
	/* OUT token received when endpoint */
#define OTG_FS_DEVICE_DOEPMSK_OTEPDM				(1u << 4)

	/* 0x18: OTG_FS device all endpoints interrupt */
	uint32_t volatile const DAINT;
	/* IN endpoint interrupt bits */
#define OTG_FS_DEVICE_DAINT_IEPINT_Msk				(0xFFFFu << 0)
#define OTG_FS_DEVICE_DAINT_IEPINT_Pos				0
	/* OUT endpoint interrupt */
#define OTG_FS_DEVICE_DAINT_OEPINT_Msk				(0xFFFFu << 16)
#define OTG_FS_DEVICE_DAINT_OEPINT_Pos				16

	/* 0x1C: OTG_FS all endpoints interrupt mask register */
	uint32_t volatile DAINTMSK;
	/* IN EP interrupt mask bits */
#define OTG_FS_DEVICE_DAINTMSK_IEPM_Msk				(0xFFFFu << 0)
#define OTG_FS_DEVICE_DAINTMSK_IEPM_Pos				0
	/* OUT EP interrupt mask bits */
#define OTG_FS_DEVICE_DAINTMSK_OEPM_Msk				(0xFFFFu << 16)
#define OTG_FS_DEVICE_DAINTMSK_OEPM_Pos				16

	/* 0x20 */
	uint8_t RESERVED1[0x28u-0x20u];

	/* 0x28: OTG_FS device VBUS discharge time */
	uint32_t volatile DVBUSDIS;
	/* Device VBUS discharge time */
#define OTG_FS_DEVICE_DVBUSDIS_VBUSDT_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DVBUSDIS_VBUSDT_Pos			0

	/* 0x2C: OTG_FS device VBUS pulsing time */
	uint32_t volatile DVBUSPULSE;
	/* Device VBUS pulsing time */
#define OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_Msk			(0xFFFu << 0)
#define OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_Pos			0

	/* 0x30 */
	uint8_t RESERVED2[0x34u-0x30u];

	/* 0x34: OTG_FS device IN endpoint FIFO empty */
	uint32_t volatile DIEPEMPMSK;
	/* IN EP Tx FIFO empty interrupt mask */
#define OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_Pos			0

	/* 0x38 */
	uint8_t RESERVED3[0x100u-0x38u];

	/* 0x100: OTG_FS device control IN endpoint 0 control */
	uint32_t volatile DIEPCTL0;
	/* Maximum packet size */
#define OTG_FS_DEVICE_DIEPCTL0_MPSIZ_Msk			(0x3u << 0)
#define OTG_FS_DEVICE_DIEPCTL0_MPSIZ_Pos			0
	/* USB active endpoint */
#define OTG_FS_DEVICE_DIEPCTL0_USBAEP				(1u << 15)
	/* NAK status */
#define OTG_FS_DEVICE_DIEPCTL0_NAKSTS				(1u << 17)
	/* Endpoint type */
#define OTG_FS_DEVICE_DIEPCTL0_EPTYP_Msk			(0x3u << 18)
#define OTG_FS_DEVICE_DIEPCTL0_EPTYP_Pos			18
	/* STALL handshake */
#define OTG_FS_DEVICE_DIEPCTL0_STALL				(1u << 21)
	/* TxFIFO number */
#define OTG_FS_DEVICE_DIEPCTL0_TXFNUM_Msk			(0xFu << 22)
#define OTG_FS_DEVICE_DIEPCTL0_TXFNUM_Pos			22
	/* Clear NAK */
#define OTG_FS_DEVICE_DIEPCTL0_CNAK				(1u << 26)
	/* Set NAK */
#define OTG_FS_DEVICE_DIEPCTL0_SNAK				(1u << 27)
	/* Endpoint disable */
#define OTG_FS_DEVICE_DIEPCTL0_EPDIS				(1u << 30)
	/* Endpoint enable */
#define OTG_FS_DEVICE_DIEPCTL0_EPENA				(1u << 31)

	/* 0x104 */
	uint8_t RESERVED4[0x120u-0x104u];

	/* 0x120: OTG device endpoint-1 control */
	uint32_t volatile DIEPCTL1;
	/* EPENA */
#define OTG_FS_DEVICE_DIEPCTL1_EPENA				(1u << 31)
	/* EPDIS */
#define OTG_FS_DEVICE_DIEPCTL1_EPDIS				(1u << 30)
	/* SODDFRM/SD1PID */
#define OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID			(1u << 29)
	/* SD0PID/SEVNFRM */
#define OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM			(1u << 28)
	/* SNAK */
#define OTG_FS_DEVICE_DIEPCTL1_SNAK				(1u << 27)
	/* CNAK */
#define OTG_FS_DEVICE_DIEPCTL1_CNAK				(1u << 26)
	/* TXFNUM */
#define OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Msk			(0xFu << 22)
#define OTG_FS_DEVICE_DIEPCTL1_TXFNUM_Pos			22
	/* STALL */
#define OTG_FS_DEVICE_DIEPCTL1_STALL				(1u << 21)
	/* EPTYP */
#define OTG_FS_DEVICE_DIEPCTL1_EPTYP_Msk			(0x3u << 18)
#define OTG_FS_DEVICE_DIEPCTL1_EPTYP_Pos			18
	/* NAKSTS */
#define OTG_FS_DEVICE_DIEPCTL1_NAKSTS				(1u << 17)
	/* EONUM/DPID */
#define OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID			(1u << 16)
	/* USBAEP */
#define OTG_FS_DEVICE_DIEPCTL1_USBAEP				(1u << 15)
	/* MPSIZ */
#define OTG_FS_DEVICE_DIEPCTL1_MPSIZ_Msk			(0x7FFu << 0)
#define OTG_FS_DEVICE_DIEPCTL1_MPSIZ_Pos			0

	/* 0x124 */
	uint8_t RESERVED5[0x300u-0x124u];

	/* 0x300: device endpoint-0 control */
	uint32_t volatile DOEPCTL0;
	/* EPENA */
#define OTG_FS_DEVICE_DOEPCTL0_EPENA				(1u << 31)
	/* EPDIS */
#define OTG_FS_DEVICE_DOEPCTL0_EPDIS				(1u << 30)
	/* SNAK */
#define OTG_FS_DEVICE_DOEPCTL0_SNAK				(1u << 27)
	/* CNAK */
#define OTG_FS_DEVICE_DOEPCTL0_CNAK				(1u << 26)
	/* STALL */
#define OTG_FS_DEVICE_DOEPCTL0_STALL				(1u << 21)
	/* SNPM */
#define OTG_FS_DEVICE_DOEPCTL0_SNPM				(1u << 20)
	/* EPTYP */
#define OTG_FS_DEVICE_DOEPCTL0_EPTYP_Msk			(0x3u << 18)
#define OTG_FS_DEVICE_DOEPCTL0_EPTYP_Pos			18
	/* NAKSTS */
#define OTG_FS_DEVICE_DOEPCTL0_NAKSTS				(1u << 17)
	/* USBAEP */
#define OTG_FS_DEVICE_DOEPCTL0_USBAEP				(1u << 15)
	/* MPSIZ */
#define OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Msk			(0x3u << 0)
#define OTG_FS_DEVICE_DOEPCTL0_MPSIZ_Pos			0

	/* 0x304 */
	uint8_t RESERVED6[0x320u-0x304u];

	/* 0x320: device endpoint-1 control */
	uint32_t volatile DOEPCTL1;
	/* EPENA */
#define OTG_FS_DEVICE_DOEPCTL1_EPENA				(1u << 31)
	/* EPDIS */
#define OTG_FS_DEVICE_DOEPCTL1_EPDIS				(1u << 30)
	/* SODDFRM */
#define OTG_FS_DEVICE_DOEPCTL1_SODDFRM				(1u << 29)
	/* SD0PID/SEVNFRM */
#define OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM			(1u << 28)
	/* SNAK */
#define OTG_FS_DEVICE_DOEPCTL1_SNAK				(1u << 27)
	/* CNAK */
#define OTG_FS_DEVICE_DOEPCTL1_CNAK				(1u << 26)
	/* STALL */
#define OTG_FS_DEVICE_DOEPCTL1_STALL				(1u << 21)
	/* SNPM */
#define OTG_FS_DEVICE_DOEPCTL1_SNPM				(1u << 20)
	/* EPTYP */
#define OTG_FS_DEVICE_DOEPCTL1_EPTYP_Msk			(0x3u << 18)
#define OTG_FS_DEVICE_DOEPCTL1_EPTYP_Pos			18
	/* NAKSTS */
#define OTG_FS_DEVICE_DOEPCTL1_NAKSTS				(1u << 17)
	/* EONUM/DPID */
#define OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID			(1u << 16)
	/* USBAEP */
#define OTG_FS_DEVICE_DOEPCTL1_USBAEP				(1u << 15)
	/* MPSIZ */
#define OTG_FS_DEVICE_DOEPCTL1_MPSIZ_Msk			(0x7FFu << 0)
#define OTG_FS_DEVICE_DOEPCTL1_MPSIZ_Pos			0

	/* 0x108: device endpoint-x interrupt */
	uint32_t volatile DIEPINT0;
	/* TXFE */
#define OTG_FS_DEVICE_DIEPINT0_TXFE				(1u << 7)
	/* INEPNE */
#define OTG_FS_DEVICE_DIEPINT0_INEPNE				(1u << 6)
	/* ITTXFE */
#define OTG_FS_DEVICE_DIEPINT0_ITTXFE				(1u << 4)
	/* TOC */
#define OTG_FS_DEVICE_DIEPINT0_TOC				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DIEPINT0_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DIEPINT0_XFRC				(1u << 0)

	/* 0x10C */
	uint8_t RESERVED7[0x128u-0x10Cu];

	/* 0x128: device endpoint-1 interrupt */
	uint32_t volatile DIEPINT1;
	/* TXFE */
#define OTG_FS_DEVICE_DIEPINT1_TXFE				(1u << 7)
	/* INEPNE */
#define OTG_FS_DEVICE_DIEPINT1_INEPNE				(1u << 6)
	/* ITTXFE */
#define OTG_FS_DEVICE_DIEPINT1_ITTXFE				(1u << 4)
	/* TOC */
#define OTG_FS_DEVICE_DIEPINT1_TOC				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DIEPINT1_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DIEPINT1_XFRC				(1u << 0)

	/* 0x12C */
	uint8_t RESERVED8[0x148u-0x12Cu];

	/* 0x148: device endpoint-2 interrupt */
	uint32_t volatile DIEPINT2;
	/* TXFE */
#define OTG_FS_DEVICE_DIEPINT2_TXFE				(1u << 7)
	/* INEPNE */
#define OTG_FS_DEVICE_DIEPINT2_INEPNE				(1u << 6)
	/* ITTXFE */
#define OTG_FS_DEVICE_DIEPINT2_ITTXFE				(1u << 4)
	/* TOC */
#define OTG_FS_DEVICE_DIEPINT2_TOC				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DIEPINT2_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DIEPINT2_XFRC				(1u << 0)

	/* 0x14C */
	uint8_t RESERVED9[0x168u-0x14Cu];

	/* 0x168: device endpoint-3 interrupt */
	uint32_t volatile DIEPINT3;
	/* TXFE */
#define OTG_FS_DEVICE_DIEPINT3_TXFE				(1u << 7)
	/* INEPNE */
#define OTG_FS_DEVICE_DIEPINT3_INEPNE				(1u << 6)
	/* ITTXFE */
#define OTG_FS_DEVICE_DIEPINT3_ITTXFE				(1u << 4)
	/* TOC */
#define OTG_FS_DEVICE_DIEPINT3_TOC				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DIEPINT3_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DIEPINT3_XFRC				(1u << 0)

	/* 0x16C */
	uint8_t RESERVED10[0x308u-0x16Cu];

	/* 0x308: device endpoint-0 interrupt */
	uint32_t volatile DOEPINT0;
	/* B2BSTUP */
#define OTG_FS_DEVICE_DOEPINT0_B2BSTUP				(1u << 6)
	/* OTEPDIS */
#define OTG_FS_DEVICE_DOEPINT0_OTEPDIS				(1u << 4)
	/* STUP */
#define OTG_FS_DEVICE_DOEPINT0_STUP				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DOEPINT0_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DOEPINT0_XFRC				(1u << 0)

	/* 0x30C */
	uint8_t RESERVED11[0x328u-0x30Cu];

	/* 0x328: device endpoint-1 interrupt */
	uint32_t volatile DOEPINT1;
	/* B2BSTUP */
#define OTG_FS_DEVICE_DOEPINT1_B2BSTUP				(1u << 6)
	/* OTEPDIS */
#define OTG_FS_DEVICE_DOEPINT1_OTEPDIS				(1u << 4)
	/* STUP */
#define OTG_FS_DEVICE_DOEPINT1_STUP				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DOEPINT1_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DOEPINT1_XFRC				(1u << 0)

	/* 0x32C */
	uint8_t RESERVED12[0x348u-0x32Cu];

	/* 0x348: device endpoint-2 interrupt */
	uint32_t volatile DOEPINT2;
	/* B2BSTUP */
#define OTG_FS_DEVICE_DOEPINT2_B2BSTUP				(1u << 6)
	/* OTEPDIS */
#define OTG_FS_DEVICE_DOEPINT2_OTEPDIS				(1u << 4)
	/* STUP */
#define OTG_FS_DEVICE_DOEPINT2_STUP				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DOEPINT2_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DOEPINT2_XFRC				(1u << 0)

	/* 0x34C */
	uint8_t RESERVED13[0x368u-0x34Cu];

	/* 0x368: device endpoint-3 interrupt */
	uint32_t volatile DOEPINT3;
	/* B2BSTUP */
#define OTG_FS_DEVICE_DOEPINT3_B2BSTUP				(1u << 6)
	/* OTEPDIS */
#define OTG_FS_DEVICE_DOEPINT3_OTEPDIS				(1u << 4)
	/* STUP */
#define OTG_FS_DEVICE_DOEPINT3_STUP				(1u << 3)
	/* EPDISD */
#define OTG_FS_DEVICE_DOEPINT3_EPDISD				(1u << 1)
	/* XFRC */
#define OTG_FS_DEVICE_DOEPINT3_XFRC				(1u << 0)

	/* 0x110: device endpoint-0 transfer size */
	uint32_t volatile DIEPTSIZ0;
	/* Packet count */
#define OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Msk			(0x3u << 19)
#define OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DIEPTSIZ0_XFRSIZ_Msk			(0x7Fu << 0)
#define OTG_FS_DEVICE_DIEPTSIZ0_XFRSIZ_Pos			0

	/* 0x114 */
	uint8_t RESERVED14[0x310u-0x114u];

	/* 0x310: device OUT endpoint-0 transfer size */
	uint32_t volatile DOEPTSIZ0;
	/* SETUP packet count */
#define OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Msk			(0x3u << 29)
#define OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_Pos			29
	/* Packet count */
#define OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT				(1u << 19)
	/* Transfer size */
#define OTG_FS_DEVICE_DOEPTSIZ0_XFRSIZ_Msk			(0x7Fu << 0)
#define OTG_FS_DEVICE_DOEPTSIZ0_XFRSIZ_Pos			0

	/* 0x130: device endpoint-1 transfer size */
	uint32_t volatile DIEPTSIZ1;
	/* Multi count */
#define OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Msk			(0x3u << 29)
#define OTG_FS_DEVICE_DIEPTSIZ1_MCNT_Pos			29
	/* Packet count */
#define OTG_FS_DEVICE_DIEPTSIZ1_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DIEPTSIZ1_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DIEPTSIZ1_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DIEPTSIZ1_XFRSIZ_Pos			0

	/* 0x134 */
	uint8_t RESERVED15[0x150u-0x134u];

	/* 0x150: device endpoint-2 transfer size */
	uint32_t volatile DIEPTSIZ2;
	/* Multi count */
#define OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Msk			(0x3u << 29)
#define OTG_FS_DEVICE_DIEPTSIZ2_MCNT_Pos			29
	/* Packet count */
#define OTG_FS_DEVICE_DIEPTSIZ2_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DIEPTSIZ2_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DIEPTSIZ2_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DIEPTSIZ2_XFRSIZ_Pos			0

	/* 0x154 */
	uint8_t RESERVED16[0x170u-0x154u];

	/* 0x170: device endpoint-3 transfer size */
	uint32_t volatile DIEPTSIZ3;
	/* Multi count */
#define OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Msk			(0x3u << 29)
#define OTG_FS_DEVICE_DIEPTSIZ3_MCNT_Pos			29
	/* Packet count */
#define OTG_FS_DEVICE_DIEPTSIZ3_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DIEPTSIZ3_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DIEPTSIZ3_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DIEPTSIZ3_XFRSIZ_Pos			0

	/* 0x118: OTG_FS device IN endpoint transmit FIFO */
	uint32_t volatile const DTXFSTS0;
	/* IN endpoint TxFIFO space */
#define OTG_FS_DEVICE_DTXFSTS0_INEPTFSAV_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DTXFSTS0_INEPTFSAV_Pos			0

	/* 0x11C */
	uint8_t RESERVED17[0x138u-0x11Cu];

	/* 0x138: OTG_FS device IN endpoint transmit FIFO */
	uint32_t volatile const DTXFSTS1;
	/* IN endpoint TxFIFO space */
#define OTG_FS_DEVICE_DTXFSTS1_INEPTFSAV_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DTXFSTS1_INEPTFSAV_Pos			0

	/* 0x13C */
	uint8_t RESERVED18[0x158u-0x13Cu];

	/* 0x158: OTG_FS device IN endpoint transmit FIFO */
	uint32_t volatile const DTXFSTS2;
	/* IN endpoint TxFIFO space */
#define OTG_FS_DEVICE_DTXFSTS2_INEPTFSAV_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DTXFSTS2_INEPTFSAV_Pos			0

	/* 0x15C */
	uint8_t RESERVED19[0x178u-0x15Cu];

	/* 0x178: OTG_FS device IN endpoint transmit FIFO */
	uint32_t volatile const DTXFSTS3;
	/* IN endpoint TxFIFO space */
#define OTG_FS_DEVICE_DTXFSTS3_INEPTFSAV_Msk			(0xFFFFu << 0)
#define OTG_FS_DEVICE_DTXFSTS3_INEPTFSAV_Pos			0

	/* 0x17C */
	uint8_t RESERVED20[0x330u-0x17Cu];

	/* 0x330: device OUT endpoint-1 transfer size */
	uint32_t volatile DOEPTSIZ1;
	/* Received data PID/SETUP packet */
#define OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Msk		(0x3u << 29)
#define OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_Pos		29
	/* Packet count */
#define OTG_FS_DEVICE_DOEPTSIZ1_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DOEPTSIZ1_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DOEPTSIZ1_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DOEPTSIZ1_XFRSIZ_Pos			0

	/* 0x334 */
	uint8_t RESERVED21[0x350u-0x334u];

	/* 0x350: device OUT endpoint-2 transfer size */
	uint32_t volatile DOEPTSIZ2;
	/* Received data PID/SETUP packet */
#define OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Msk		(0x3u << 29)
#define OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_Pos		29
	/* Packet count */
#define OTG_FS_DEVICE_DOEPTSIZ2_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DOEPTSIZ2_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DOEPTSIZ2_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DOEPTSIZ2_XFRSIZ_Pos			0

	/* 0x354 */
	uint8_t RESERVED22[0x370u-0x354u];

	/* 0x370: device OUT endpoint-3 transfer size */
	uint32_t volatile DOEPTSIZ3;
	/* Received data PID/SETUP packet */
#define OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Msk		(0x3u << 29)
#define OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_Pos		29
	/* Packet count */
#define OTG_FS_DEVICE_DOEPTSIZ3_PKTCNT_Msk			(0x3FFu << 19)
#define OTG_FS_DEVICE_DOEPTSIZ3_PKTCNT_Pos			19
	/* Transfer size */
#define OTG_FS_DEVICE_DOEPTSIZ3_XFRSIZ_Msk			(0x7FFFFu << 0)
#define OTG_FS_DEVICE_DOEPTSIZ3_XFRSIZ_Pos			0

};


#define OTG_FS_GLOBAL ((struct sdk_otg_fs_global *)0x50000000)

struct sdk_otg_fs_global {

	/* 0x00: OTG_FS control and status register */
	uint32_t volatile GOTGCTL;
	/* Session request success */
#define OTG_FS_GLOBAL_GOTGCTL_SRQSCS				(1u << 0)
	/* Session request */
#define OTG_FS_GLOBAL_GOTGCTL_SRQ				(1u << 1)
	/* Host negotiation success */
#define OTG_FS_GLOBAL_GOTGCTL_HNGSCS				(1u << 8)
	/* HNP request */
#define OTG_FS_GLOBAL_GOTGCTL_HNPRQ				(1u << 9)
	/* Host set HNP enable */
#define OTG_FS_GLOBAL_GOTGCTL_HSHNPEN				(1u << 10)
	/* Device HNP enabled */
#define OTG_FS_GLOBAL_GOTGCTL_DHNPEN				(1u << 11)
	/* Connector ID status */
#define OTG_FS_GLOBAL_GOTGCTL_CIDSTS				(1u << 16)
	/* Long/short debounce time */
#define OTG_FS_GLOBAL_GOTGCTL_DBCT				(1u << 17)
	/* A-session valid */
#define OTG_FS_GLOBAL_GOTGCTL_ASVLD				(1u << 18)
	/* B-session valid */
#define OTG_FS_GLOBAL_GOTGCTL_BSVLD				(1u << 19)

	/* 0x04: OTG_FS interrupt register */
	uint32_t volatile GOTGINT;
	/* Session end detected */
#define OTG_FS_GLOBAL_GOTGINT_SEDET				(1u << 2)
	/* Session request success status */
#define OTG_FS_GLOBAL_GOTGINT_SRSSCHG				(1u << 8)
	/* Host negotiation success status */
#define OTG_FS_GLOBAL_GOTGINT_HNSSCHG				(1u << 9)
	/* Host negotiation detected */
#define OTG_FS_GLOBAL_GOTGINT_HNGDET				(1u << 17)
	/* A-device timeout change */
#define OTG_FS_GLOBAL_GOTGINT_ADTOCHG				(1u << 18)
	/* Debounce done */
#define OTG_FS_GLOBAL_GOTGINT_DBCDNE				(1u << 19)

	/* 0x08: OTG_FS AHB configuration register */
	uint32_t volatile GAHBCFG;
	/* Global interrupt mask */
#define OTG_FS_GLOBAL_GAHBCFG_GINT				(1u << 0)
	/* TxFIFO empty level */
#define OTG_FS_GLOBAL_GAHBCFG_TXFELVL				(1u << 7)
	/* Periodic TxFIFO empty */
#define OTG_FS_GLOBAL_GAHBCFG_PTXFELVL				(1u << 8)

	/* 0x0C: OTG_FS USB configuration register */
	uint32_t volatile GUSBCFG;
	/* FS timeout calibration */
#define OTG_FS_GLOBAL_GUSBCFG_TOCAL_Msk				(0x7u << 0)
#define OTG_FS_GLOBAL_GUSBCFG_TOCAL_Pos				0
	/* Full Speed serial transceiver */
#define OTG_FS_GLOBAL_GUSBCFG_PHYSEL				(1u << 6)
	/* SRP-capable */
#define OTG_FS_GLOBAL_GUSBCFG_SRPCAP				(1u << 8)
	/* HNP-capable */
#define OTG_FS_GLOBAL_GUSBCFG_HNPCAP				(1u << 9)
	/* USB turnaround time */
#define OTG_FS_GLOBAL_GUSBCFG_TRDT_Msk				(0xFu << 10)
#define OTG_FS_GLOBAL_GUSBCFG_TRDT_Pos				10
	/* Force host mode */
#define OTG_FS_GLOBAL_GUSBCFG_FHMOD				(1u << 29)
	/* Force device mode */
#define OTG_FS_GLOBAL_GUSBCFG_FDMOD				(1u << 30)
	/* Corrupt Tx packet */
#define OTG_FS_GLOBAL_GUSBCFG_CTXPKT				(1u << 31)

	/* 0x10: OTG_FS reset register */
	uint32_t volatile GRSTCTL;
	/* Core soft reset */
#define OTG_FS_GLOBAL_GRSTCTL_CSRST				(1u << 0)
	/* HCLK soft reset */
#define OTG_FS_GLOBAL_GRSTCTL_HSRST				(1u << 1)
	/* Host frame counter reset */
#define OTG_FS_GLOBAL_GRSTCTL_FCRST				(1u << 2)
	/* RxFIFO flush */
#define OTG_FS_GLOBAL_GRSTCTL_RXFFLSH				(1u << 4)
	/* TxFIFO flush */
#define OTG_FS_GLOBAL_GRSTCTL_TXFFLSH				(1u << 5)
	/* TxFIFO number */
#define OTG_FS_GLOBAL_GRSTCTL_TXFNUM_Msk			(0x1Fu << 6)
#define OTG_FS_GLOBAL_GRSTCTL_TXFNUM_Pos			6
	/* AHB master idle */
#define OTG_FS_GLOBAL_GRSTCTL_AHBIDL				(1u << 31)

	/* 0x14: OTG_FS core interrupt register */
	uint32_t volatile GINTSTS;
	/* Current mode of operation */
#define OTG_FS_GLOBAL_GINTSTS_CMOD				(1u << 0)
	/* Mode mismatch interrupt */
#define OTG_FS_GLOBAL_GINTSTS_MMIS				(1u << 1)
	/* OTG interrupt */
#define OTG_FS_GLOBAL_GINTSTS_OTGINT				(1u << 2)
	/* Start of frame */
#define OTG_FS_GLOBAL_GINTSTS_SOF				(1u << 3)
	/* RxFIFO non-empty */
#define OTG_FS_GLOBAL_GINTSTS_RXFLVL				(1u << 4)
	/* Non-periodic TxFIFO empty */
#define OTG_FS_GLOBAL_GINTSTS_NPTXFE				(1u << 5)
	/* Global IN non-periodic NAK */
#define OTG_FS_GLOBAL_GINTSTS_GINAKEFF				(1u << 6)
	/* Global OUT NAK effective */
#define OTG_FS_GLOBAL_GINTSTS_GOUTNAKEFF			(1u << 7)
	/* Early suspend */
#define OTG_FS_GLOBAL_GINTSTS_ESUSP				(1u << 10)
	/* USB suspend */
#define OTG_FS_GLOBAL_GINTSTS_USBSUSP				(1u << 11)
	/* USB reset */
#define OTG_FS_GLOBAL_GINTSTS_USBRST				(1u << 12)
	/* Enumeration done */
#define OTG_FS_GLOBAL_GINTSTS_ENUMDNE				(1u << 13)
	/* Isochronous OUT packet dropped */
#define OTG_FS_GLOBAL_GINTSTS_ISOODRP				(1u << 14)
	/* End of periodic frame */
#define OTG_FS_GLOBAL_GINTSTS_EOPF				(1u << 15)
	/* IN endpoint interrupt */
#define OTG_FS_GLOBAL_GINTSTS_IEPINT				(1u << 18)
	/* OUT endpoint interrupt */
#define OTG_FS_GLOBAL_GINTSTS_OEPINT				(1u << 19)
	/* Incomplete isochronous IN */
#define OTG_FS_GLOBAL_GINTSTS_IISOIXFR				(1u << 20)
	/* Incomplete periodic transfer(Host */
#define OTG_FS_GLOBAL_GINTSTS_IPXFR_INCOMPISOOUT		(1u << 21)
	/* Host port interrupt */
#define OTG_FS_GLOBAL_GINTSTS_HPRTINT				(1u << 24)
	/* Host channels interrupt */
#define OTG_FS_GLOBAL_GINTSTS_HCINT				(1u << 25)
	/* Periodic TxFIFO empty */
#define OTG_FS_GLOBAL_GINTSTS_PTXFE				(1u << 26)
	/* Connector ID status change */
#define OTG_FS_GLOBAL_GINTSTS_CIDSCHG				(1u << 28)
	/* Disconnect detected */
#define OTG_FS_GLOBAL_GINTSTS_DISCINT				(1u << 29)
	/* Session request/new session detected */
#define OTG_FS_GLOBAL_GINTSTS_SRQINT				(1u << 30)
	/* Resume/remote wakeup detected */
#define OTG_FS_GLOBAL_GINTSTS_WKUPINT				(1u << 31)

	/* 0x18: OTG_FS interrupt mask register */
	uint32_t volatile GINTMSK;
	/* Mode mismatch interrupt */
#define OTG_FS_GLOBAL_GINTMSK_MMISM				(1u << 1)
	/* OTG interrupt mask */
#define OTG_FS_GLOBAL_GINTMSK_OTGINT				(1u << 2)
	/* Start of frame mask */
#define OTG_FS_GLOBAL_GINTMSK_SOFM				(1u << 3)
	/* Receive FIFO non-empty */
#define OTG_FS_GLOBAL_GINTMSK_RXFLVLM				(1u << 4)
	/* Non-periodic TxFIFO empty */
#define OTG_FS_GLOBAL_GINTMSK_NPTXFEM				(1u << 5)
	/* Global non-periodic IN NAK effective */
#define OTG_FS_GLOBAL_GINTMSK_GINAKEFFM				(1u << 6)
	/* Global OUT NAK effective */
#define OTG_FS_GLOBAL_GINTMSK_GONAKEFFM				(1u << 7)
	/* Early suspend mask */
#define OTG_FS_GLOBAL_GINTMSK_ESUSPM				(1u << 10)
	/* USB suspend mask */
#define OTG_FS_GLOBAL_GINTMSK_USBSUSPM				(1u << 11)
	/* USB reset mask */
#define OTG_FS_GLOBAL_GINTMSK_USBRST				(1u << 12)
	/* Enumeration done mask */
#define OTG_FS_GLOBAL_GINTMSK_ENUMDNEM				(1u << 13)
	/* Isochronous OUT packet dropped interrupt */
#define OTG_FS_GLOBAL_GINTMSK_ISOODRPM				(1u << 14)
	/* End of periodic frame interrupt */
#define OTG_FS_GLOBAL_GINTMSK_EOPFM				(1u << 15)
	/* Endpoint mismatch interrupt */
#define OTG_FS_GLOBAL_GINTMSK_EPMISM				(1u << 17)
	/* IN endpoints interrupt */
#define OTG_FS_GLOBAL_GINTMSK_IEPINT				(1u << 18)
	/* OUT endpoints interrupt */
#define OTG_FS_GLOBAL_GINTMSK_OEPINT				(1u << 19)
	/* Incomplete isochronous IN transfer */
#define OTG_FS_GLOBAL_GINTMSK_IISOIXFRM				(1u << 20)
	/* Incomplete periodic transfer mask(Host */
#define OTG_FS_GLOBAL_GINTMSK_IPXFRM_IISOOXFRM			(1u << 21)
	/* Host port interrupt mask */
#define OTG_FS_GLOBAL_GINTMSK_PRTIM				(1u << 24)
	/* Host channels interrupt */
#define OTG_FS_GLOBAL_GINTMSK_HCIM				(1u << 25)
	/* Periodic TxFIFO empty mask */
#define OTG_FS_GLOBAL_GINTMSK_PTXFEM				(1u << 26)
	/* Connector ID status change */
#define OTG_FS_GLOBAL_GINTMSK_CIDSCHGM				(1u << 28)
	/* Disconnect detected interrupt */
#define OTG_FS_GLOBAL_GINTMSK_DISCINT				(1u << 29)
	/* Session request/new session detected */
#define OTG_FS_GLOBAL_GINTMSK_SRQIM				(1u << 30)
	/* Resume/remote wakeup detected interrupt */
#define OTG_FS_GLOBAL_GINTMSK_WUIM				(1u << 31)

	/* 0x1C: OTG_FS Receive status debug read(Device */
	uint32_t volatile const GRXSTSR_DEVICE;
	/* Endpoint number */
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_EPNUM_Msk			(0xFu << 0)
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_EPNUM_Pos			0
	/* Byte count */
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_BCNT_Msk			(0x7FFu << 4)
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_BCNT_Pos			4
	/* Data PID */
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_DPID_Msk			(0x3u << 15)
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_DPID_Pos			15
	/* Packet status */
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_PKTSTS_Msk			(0xFu << 17)
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_PKTSTS_Pos			17
	/* Frame number */
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_FRMNUM_Msk			(0xFu << 21)
#define OTG_FS_GLOBAL_GRXSTSR_DEVICE_FRMNUM_Pos			21

	/* 0x1C: OTG_FS Receive status debug read(Host */
	uint32_t volatile const GRXSTSR_HOST;
	/* Endpoint number */
#define OTG_FS_GLOBAL_GRXSTSR_HOST_EPNUM_Msk			(0xFu << 0)
#define OTG_FS_GLOBAL_GRXSTSR_HOST_EPNUM_Pos			0
	/* Byte count */
#define OTG_FS_GLOBAL_GRXSTSR_HOST_BCNT_Msk			(0x7FFu << 4)
#define OTG_FS_GLOBAL_GRXSTSR_HOST_BCNT_Pos			4
	/* Data PID */
#define OTG_FS_GLOBAL_GRXSTSR_HOST_DPID_Msk			(0x3u << 15)
#define OTG_FS_GLOBAL_GRXSTSR_HOST_DPID_Pos			15
	/* Packet status */
#define OTG_FS_GLOBAL_GRXSTSR_HOST_PKTSTS_Msk			(0xFu << 17)
#define OTG_FS_GLOBAL_GRXSTSR_HOST_PKTSTS_Pos			17
	/* Frame number */
#define OTG_FS_GLOBAL_GRXSTSR_HOST_FRMNUM_Msk			(0xFu << 21)
#define OTG_FS_GLOBAL_GRXSTSR_HOST_FRMNUM_Pos			21

	/* 0x20 */
	uint8_t RESERVED0[0x24u-0x20u];

	/* 0x24: OTG_FS Receive FIFO size register */
	uint32_t volatile GRXFSIZ;
	/* RxFIFO depth */
#define OTG_FS_GLOBAL_GRXFSIZ_RXFD_Msk				(0xFFFFu << 0)
#define OTG_FS_GLOBAL_GRXFSIZ_RXFD_Pos				0

	/* 0x28: OTG_FS non-periodic transmit FIFO size */
	uint32_t volatile DIEPTXF0;
	/* Endpoint 0 transmit RAM start */
#define OTG_FS_GLOBAL_DIEPTXF0_TX0FSA_Msk			(0xFFFFu << 0)
#define OTG_FS_GLOBAL_DIEPTXF0_TX0FSA_Pos			0
	/* Endpoint 0 TxFIFO depth */
#define OTG_FS_GLOBAL_DIEPTXF0_TX0FD_Msk			(0xFFFFu << 16)
#define OTG_FS_GLOBAL_DIEPTXF0_TX0FD_Pos			16

	/* 0x28: OTG_FS non-periodic transmit FIFO size */
	uint32_t volatile HNPTXFSIZ;
	/* Non-periodic transmit RAM start */
#define OTG_FS_GLOBAL_HNPTXFSIZ_NPTXFSA_Msk			(0xFFFFu << 0)
#define OTG_FS_GLOBAL_HNPTXFSIZ_NPTXFSA_Pos			0
	/* Non-periodic TxFIFO depth */
#define OTG_FS_GLOBAL_HNPTXFSIZ_NPTXFD_Msk			(0xFFFFu << 16)
#define OTG_FS_GLOBAL_HNPTXFSIZ_NPTXFD_Pos			16

	/* 0x2C: OTG_FS non-periodic transmit FIFO/queue */
	uint32_t volatile const GNPTXSTS;
	/* Non-periodic TxFIFO space */
#define OTG_FS_GLOBAL_GNPTXSTS_NPTXFSAV_Msk			(0xFFFFu << 0)
#define OTG_FS_GLOBAL_GNPTXSTS_NPTXFSAV_Pos			0
	/* Non-periodic transmit request queue */
#define OTG_FS_GLOBAL_GNPTXSTS_NPTQXSAV_Msk			(0xFFu << 16)
#define OTG_FS_GLOBAL_GNPTXSTS_NPTQXSAV_Pos			16
	/* Top of the non-periodic transmit request */
#define OTG_FS_GLOBAL_GNPTXSTS_NPTXQTOP_Msk			(0x7Fu << 24)
#define OTG_FS_GLOBAL_GNPTXSTS_NPTXQTOP_Pos			24

	/* 0x30 */
	uint8_t RESERVED1[0x38u-0x30u];

	/* 0x38: OTG_FS general core configuration register */
	uint32_t volatile GCCFG;
	/* Power down */
#define OTG_FS_GLOBAL_GCCFG_PWRDWN				(1u << 16)
	/* Enable the VBUS sensing */
#define OTG_FS_GLOBAL_GCCFG_VBUSASEN				(1u << 18)
	/* Enable the VBUS sensing */
#define OTG_FS_GLOBAL_GCCFG_VBUSBSEN				(1u << 19)
	/* SOF output enable */
#define OTG_FS_GLOBAL_GCCFG_SOFOUTEN				(1u << 20)

	/* 0x3C: core ID register */
	uint32_t volatile CID;
	/* Product ID field */
#define OTG_FS_GLOBAL_CID_PRODUCT_ID_Msk			(0xFFFFFFFFu << 0)
#define OTG_FS_GLOBAL_CID_PRODUCT_ID_Pos			0

	/* 0x40 */
	uint8_t RESERVED2[0x100u-0x40u];

	/* 0x100: OTG_FS Host periodic transmit FIFO size */
	uint32_t volatile HPTXFSIZ;
	/* Host periodic TxFIFO start */
#define OTG_FS_GLOBAL_HPTXFSIZ_PTXSA_Msk			(0xFFFFu << 0)
#define OTG_FS_GLOBAL_HPTXFSIZ_PTXSA_Pos			0
	/* Host periodic TxFIFO depth */
#define OTG_FS_GLOBAL_HPTXFSIZ_PTXFSIZ_Msk			(0xFFFFu << 16)
#define OTG_FS_GLOBAL_HPTXFSIZ_PTXFSIZ_Pos			16

	/* 0x104: OTG_FS device IN endpoint transmit FIFO size */
	uint32_t volatile DIEPTXF[3];
	/* IN endpoint FIFO2 transmit RAM start */
#define OTG_FS_GLOBAL_DIEPTXF_INEPTXSA_Msk			(0xFFFFu << 0)
#define OTG_FS_GLOBAL_DIEPTXF_INEPTXSA_Pos			0
	/* IN endpoint TxFIFO depth */
#define OTG_FS_GLOBAL_DIEPTXF_INEPTXFD_Msk			(0xFFFFu << 16)
#define OTG_FS_GLOBAL_DIEPTXF_INEPTXFD_Pos			16

	/* 0x20: OTG status read and pop (device mode) */
	uint32_t volatile const GRXSTSP_DEVICE;
	/* Status phase start */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_STSPHST			(1u << 27)
	/* Frame number */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_FRMNUM_Msk			(0xFu << 21)
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_FRMNUM_Pos			21
	/* Packet status */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_PKTSTS_Msk			(0xFu << 17)
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_PKTSTS_Pos			17
	/* Data PID */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_DPID_Msk			(0x3u << 15)
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_DPID_Pos			15
	/* Byte count */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_BCNT_Msk			(0x7FFu << 4)
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_BCNT_Pos			4
	/* Endpoint number */
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_EPNUM_Msk			(0xFu << 0)
#define OTG_FS_GLOBAL_GRXSTSP_DEVICE_EPNUM_Pos			0

	/* 0x20: OTG status read and pop (host mode) */
	uint32_t volatile const GRXSTSP_HOST;
	/* Packet status */
#define OTG_FS_GLOBAL_GRXSTSP_HOST_PKTSTS_Msk			(0xFu << 17)
#define OTG_FS_GLOBAL_GRXSTSP_HOST_PKTSTS_Pos			17
	/* Data PID */
#define OTG_FS_GLOBAL_GRXSTSP_HOST_DPID_Msk			(0x3u << 15)
#define OTG_FS_GLOBAL_GRXSTSP_HOST_DPID_Pos			15
	/* Byte count */
#define OTG_FS_GLOBAL_GRXSTSP_HOST_BCNT_Msk			(0x7FFu << 4)
#define OTG_FS_GLOBAL_GRXSTSP_HOST_BCNT_Pos			4
	/* Channel number */
#define OTG_FS_GLOBAL_GRXSTSP_HOST_CHNUM_Msk			(0xFu << 0)
#define OTG_FS_GLOBAL_GRXSTSP_HOST_CHNUM_Pos			0

};


#define OTG_FS_HOST ((struct sdk_otg_fs_host *)0x50000400)

struct sdk_otg_fs_host {

	/* 0x00: OTG_FS host configuration register */
	uint32_t volatile HCFG;
	/* FS/LS PHY clock select */
#define OTG_FS_HOST_HCFG_FSLSPCS_Msk				(0x3u << 0)
#define OTG_FS_HOST_HCFG_FSLSPCS_Pos				0
	/* FS- and LS-only support */
#define OTG_FS_HOST_HCFG_FSLSS					(1u << 2)

	/* 0x04: OTG_FS Host frame interval */
	uint32_t volatile HFIR;
	/* Frame interval */
#define OTG_FS_HOST_HFIR_FRIVL_Msk				(0xFFFFu << 0)
#define OTG_FS_HOST_HFIR_FRIVL_Pos				0

	/* 0x08: OTG_FS host frame number/frame time */
	uint32_t volatile const HFNUM;
	/* Frame number */
#define OTG_FS_HOST_HFNUM_FRNUM_Msk				(0xFFFFu << 0)
#define OTG_FS_HOST_HFNUM_FRNUM_Pos				0
	/* Frame time remaining */
#define OTG_FS_HOST_HFNUM_FTREM_Msk				(0xFFFFu << 16)
#define OTG_FS_HOST_HFNUM_FTREM_Pos				16

	/* 0x0C */
	uint8_t RESERVED0[0x10u-0x0Cu];

	/* 0x10: OTG_FS_Host periodic transmit FIFO/queue */
	uint32_t volatile HPTXSTS;
	/* Periodic transmit data FIFO space */
#define OTG_FS_HOST_HPTXSTS_PTXFSAVL_Msk			(0xFFFFu << 0)
#define OTG_FS_HOST_HPTXSTS_PTXFSAVL_Pos			0
	/* Periodic transmit request queue space */
#define OTG_FS_HOST_HPTXSTS_PTXQSAV_Msk				(0xFFu << 16)
#define OTG_FS_HOST_HPTXSTS_PTXQSAV_Pos				16
	/* Top of the periodic transmit request */
#define OTG_FS_HOST_HPTXSTS_PTXQTOP_Msk				(0xFFu << 24)
#define OTG_FS_HOST_HPTXSTS_PTXQTOP_Pos				24

	/* 0x14: OTG_FS Host all channels interrupt */
	uint32_t volatile const HAINT;
	/* Channel interrupts */
#define OTG_FS_HOST_HAINT_HAINT_Msk				(0xFFFFu << 0)
#define OTG_FS_HOST_HAINT_HAINT_Pos				0

	/* 0x18: OTG_FS host all channels interrupt mask */
	uint32_t volatile HAINTMSK;
	/* Channel interrupt mask */
#define OTG_FS_HOST_HAINTMSK_HAINTM_Msk				(0xFFFFu << 0)
#define OTG_FS_HOST_HAINTMSK_HAINTM_Pos				0

	/* 0x1C */
	uint8_t RESERVED1[0x40u-0x1Cu];

	/* 0x40: OTG_FS host port control and status register */
	uint32_t volatile HPRT;
	/* Port connect status */
#define OTG_FS_HOST_HPRT_PCSTS					(1u << 0)
	/* Port connect detected */
#define OTG_FS_HOST_HPRT_PCDET					(1u << 1)
	/* Port enable */
#define OTG_FS_HOST_HPRT_PENA					(1u << 2)
	/* Port enable/disable change */
#define OTG_FS_HOST_HPRT_PENCHNG				(1u << 3)
	/* Port overcurrent active */
#define OTG_FS_HOST_HPRT_POCA					(1u << 4)
	/* Port overcurrent change */
#define OTG_FS_HOST_HPRT_POCCHNG				(1u << 5)
	/* Port resume */
#define OTG_FS_HOST_HPRT_PRES					(1u << 6)
	/* Port suspend */
#define OTG_FS_HOST_HPRT_PSUSP					(1u << 7)
	/* Port reset */
#define OTG_FS_HOST_HPRT_PRST					(1u << 8)
	/* Port line status */
#define OTG_FS_HOST_HPRT_PLSTS_Msk				(0x3u << 10)
#define OTG_FS_HOST_HPRT_PLSTS_Pos				10
	/* Port power */
#define OTG_FS_HOST_HPRT_PPWR					(1u << 12)
	/* Port test control */
#define OTG_FS_HOST_HPRT_PTCTL_Msk				(0xFu << 13)
#define OTG_FS_HOST_HPRT_PTCTL_Pos				13
	/* Port speed */
#define OTG_FS_HOST_HPRT_PSPD_Msk				(0x3u << 17)
#define OTG_FS_HOST_HPRT_PSPD_Pos				17

	/* 0x44 */
	uint8_t RESERVED2[0x100u-0x44u];

	/* 0x100: OTG_FS host channel-0 characteristics */
	uint32_t volatile HCCHAR0;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR0_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR0_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR0_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR0_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR0_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR0_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR0_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR0_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR0_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR0_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR0_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR0_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR0_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR0_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR0_CHENA				(1u << 31)

	/* 0x104 */
	uint8_t RESERVED3[0x120u-0x104u];

	/* 0x120: OTG_FS host channel-1 characteristics */
	uint32_t volatile HCCHAR1;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR1_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR1_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR1_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR1_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR1_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR1_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR1_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR1_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR1_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR1_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR1_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR1_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR1_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR1_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR1_CHENA				(1u << 31)

	/* 0x124 */
	uint8_t RESERVED4[0x140u-0x124u];

	/* 0x140: OTG_FS host channel-2 characteristics */
	uint32_t volatile HCCHAR2;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR2_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR2_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR2_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR2_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR2_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR2_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR2_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR2_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR2_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR2_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR2_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR2_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR2_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR2_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR2_CHENA				(1u << 31)

	/* 0x144 */
	uint8_t RESERVED5[0x160u-0x144u];

	/* 0x160: OTG_FS host channel-3 characteristics */
	uint32_t volatile HCCHAR3;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR3_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR3_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR3_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR3_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR3_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR3_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR3_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR3_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR3_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR3_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR3_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR3_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR3_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR3_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR3_CHENA				(1u << 31)

	/* 0x164 */
	uint8_t RESERVED6[0x180u-0x164u];

	/* 0x180: OTG_FS host channel-4 characteristics */
	uint32_t volatile HCCHAR4;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR4_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR4_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR4_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR4_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR4_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR4_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR4_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR4_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR4_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR4_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR4_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR4_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR4_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR4_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR4_CHENA				(1u << 31)

	/* 0x184 */
	uint8_t RESERVED7[0x1A0u-0x184u];

	/* 0x1A0: OTG_FS host channel-5 characteristics */
	uint32_t volatile HCCHAR5;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR5_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR5_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR5_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR5_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR5_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR5_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR5_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR5_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR5_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR5_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR5_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR5_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR5_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR5_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR5_CHENA				(1u << 31)

	/* 0x1A4 */
	uint8_t RESERVED8[0x1C0u-0x1A4u];

	/* 0x1C0: OTG_FS host channel-6 characteristics */
	uint32_t volatile HCCHAR6;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR6_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR6_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR6_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR6_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR6_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR6_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR6_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR6_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR6_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR6_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR6_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR6_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR6_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR6_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR6_CHENA				(1u << 31)

	/* 0x1C4 */
	uint8_t RESERVED9[0x1E0u-0x1C4u];

	/* 0x1E0: OTG_FS host channel-7 characteristics */
	uint32_t volatile HCCHAR7;
	/* Maximum packet size */
#define OTG_FS_HOST_HCCHAR7_MPSIZ_Msk				(0x7FFu << 0)
#define OTG_FS_HOST_HCCHAR7_MPSIZ_Pos				0
	/* Endpoint number */
#define OTG_FS_HOST_HCCHAR7_EPNUM_Msk				(0xFu << 11)
#define OTG_FS_HOST_HCCHAR7_EPNUM_Pos				11
	/* Endpoint direction */
#define OTG_FS_HOST_HCCHAR7_EPDIR				(1u << 15)
	/* Low-speed device */
#define OTG_FS_HOST_HCCHAR7_LSDEV				(1u << 17)
	/* Endpoint type */
#define OTG_FS_HOST_HCCHAR7_EPTYP_Msk				(0x3u << 18)
#define OTG_FS_HOST_HCCHAR7_EPTYP_Pos				18
	/* Multicount */
#define OTG_FS_HOST_HCCHAR7_MCNT_Msk				(0x3u << 20)
#define OTG_FS_HOST_HCCHAR7_MCNT_Pos				20
	/* Device address */
#define OTG_FS_HOST_HCCHAR7_DAD_Msk				(0x7Fu << 22)
#define OTG_FS_HOST_HCCHAR7_DAD_Pos				22
	/* Odd frame */
#define OTG_FS_HOST_HCCHAR7_ODDFRM				(1u << 29)
	/* Channel disable */
#define OTG_FS_HOST_HCCHAR7_CHDIS				(1u << 30)
	/* Channel enable */
#define OTG_FS_HOST_HCCHAR7_CHENA				(1u << 31)

	/* 0x108: OTG_FS host channel-0 interrupt register */
	uint32_t volatile HCINT0;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT0_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT0_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT0_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT0_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT0_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT0_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT0_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT0_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT0_DTERR				(1u << 10)

	/* 0x10C */
	uint8_t RESERVED10[0x128u-0x10Cu];

	/* 0x128: OTG_FS host channel-1 interrupt register */
	uint32_t volatile HCINT1;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT1_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT1_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT1_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT1_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT1_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT1_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT1_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT1_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT1_DTERR				(1u << 10)

	/* 0x12C */
	uint8_t RESERVED11[0x148u-0x12Cu];

	/* 0x148: OTG_FS host channel-2 interrupt register */
	uint32_t volatile HCINT2;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT2_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT2_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT2_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT2_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT2_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT2_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT2_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT2_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT2_DTERR				(1u << 10)

	/* 0x14C */
	uint8_t RESERVED12[0x168u-0x14Cu];

	/* 0x168: OTG_FS host channel-3 interrupt register */
	uint32_t volatile HCINT3;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT3_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT3_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT3_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT3_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT3_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT3_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT3_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT3_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT3_DTERR				(1u << 10)

	/* 0x16C */
	uint8_t RESERVED13[0x188u-0x16Cu];

	/* 0x188: OTG_FS host channel-4 interrupt register */
	uint32_t volatile HCINT4;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT4_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT4_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT4_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT4_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT4_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT4_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT4_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT4_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT4_DTERR				(1u << 10)

	/* 0x18C */
	uint8_t RESERVED14[0x1A8u-0x18Cu];

	/* 0x1A8: OTG_FS host channel-5 interrupt register */
	uint32_t volatile HCINT5;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT5_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT5_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT5_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT5_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT5_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT5_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT5_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT5_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT5_DTERR				(1u << 10)

	/* 0x1AC */
	uint8_t RESERVED15[0x1C8u-0x1ACu];

	/* 0x1C8: OTG_FS host channel-6 interrupt register */
	uint32_t volatile HCINT6;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT6_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT6_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT6_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT6_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT6_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT6_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT6_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT6_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT6_DTERR				(1u << 10)

	/* 0x1CC */
	uint8_t RESERVED16[0x1E8u-0x1CCu];

	/* 0x1E8: OTG_FS host channel-7 interrupt register */
	uint32_t volatile HCINT7;
	/* Transfer completed */
#define OTG_FS_HOST_HCINT7_XFRC					(1u << 0)
	/* Channel halted */
#define OTG_FS_HOST_HCINT7_CHH					(1u << 1)
	/* STALL response received */
#define OTG_FS_HOST_HCINT7_STALL				(1u << 3)
	/* NAK response received */
#define OTG_FS_HOST_HCINT7_NAK					(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINT7_ACK					(1u << 5)
	/* Transaction error */
#define OTG_FS_HOST_HCINT7_TXERR				(1u << 7)
	/* Babble error */
#define OTG_FS_HOST_HCINT7_BBERR				(1u << 8)
	/* Frame overrun */
#define OTG_FS_HOST_HCINT7_FRMOR				(1u << 9)
	/* Data toggle error */
#define OTG_FS_HOST_HCINT7_DTERR				(1u << 10)

	/* 0x10C: OTG_FS host channel-0 mask register */
	uint32_t volatile HCINTMSK0;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK0_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK0_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK0_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK0_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK0_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK0_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK0_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK0_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK0_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK0_DTERRM				(1u << 10)

	/* 0x110 */
	uint8_t RESERVED17[0x12Cu-0x110u];

	/* 0x12C: OTG_FS host channel-1 mask register */
	uint32_t volatile HCINTMSK1;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK1_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK1_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK1_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK1_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK1_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK1_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK1_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK1_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK1_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK1_DTERRM				(1u << 10)

	/* 0x130 */
	uint8_t RESERVED18[0x14Cu-0x130u];

	/* 0x14C: OTG_FS host channel-2 mask register */
	uint32_t volatile HCINTMSK2;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK2_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK2_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK2_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK2_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK2_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK2_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK2_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK2_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK2_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK2_DTERRM				(1u << 10)

	/* 0x150 */
	uint8_t RESERVED19[0x16Cu-0x150u];

	/* 0x16C: OTG_FS host channel-3 mask register */
	uint32_t volatile HCINTMSK3;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK3_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK3_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK3_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK3_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK3_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK3_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK3_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK3_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK3_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK3_DTERRM				(1u << 10)

	/* 0x170 */
	uint8_t RESERVED20[0x18Cu-0x170u];

	/* 0x18C: OTG_FS host channel-4 mask register */
	uint32_t volatile HCINTMSK4;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK4_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK4_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK4_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK4_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK4_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK4_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK4_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK4_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK4_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK4_DTERRM				(1u << 10)

	/* 0x190 */
	uint8_t RESERVED21[0x1ACu-0x190u];

	/* 0x1AC: OTG_FS host channel-5 mask register */
	uint32_t volatile HCINTMSK5;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK5_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK5_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK5_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK5_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK5_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK5_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK5_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK5_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK5_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK5_DTERRM				(1u << 10)

	/* 0x1B0 */
	uint8_t RESERVED22[0x1CCu-0x1B0u];

	/* 0x1CC: OTG_FS host channel-6 mask register */
	uint32_t volatile HCINTMSK6;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK6_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK6_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK6_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK6_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK6_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK6_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK6_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK6_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK6_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK6_DTERRM				(1u << 10)

	/* 0x1D0 */
	uint8_t RESERVED23[0x1ECu-0x1D0u];

	/* 0x1EC: OTG_FS host channel-7 mask register */
	uint32_t volatile HCINTMSK7;
	/* Transfer completed mask */
#define OTG_FS_HOST_HCINTMSK7_XFRCM				(1u << 0)
	/* Channel halted mask */
#define OTG_FS_HOST_HCINTMSK7_CHHM				(1u << 1)
	/* STALL response received interrupt */
#define OTG_FS_HOST_HCINTMSK7_STALLM				(1u << 3)
	/* NAK response received interrupt */
#define OTG_FS_HOST_HCINTMSK7_NAKM				(1u << 4)
	/* ACK response received/transmitted */
#define OTG_FS_HOST_HCINTMSK7_ACKM				(1u << 5)
	/* response received interrupt */
#define OTG_FS_HOST_HCINTMSK7_NYET				(1u << 6)
	/* Transaction error mask */
#define OTG_FS_HOST_HCINTMSK7_TXERRM				(1u << 7)
	/* Babble error mask */
#define OTG_FS_HOST_HCINTMSK7_BBERRM				(1u << 8)
	/* Frame overrun mask */
#define OTG_FS_HOST_HCINTMSK7_FRMORM				(1u << 9)
	/* Data toggle error mask */
#define OTG_FS_HOST_HCINTMSK7_DTERRM				(1u << 10)

	/* 0x110: OTG_FS host channel-0 transfer size */
	uint32_t volatile HCTSIZ0;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ0_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ0_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ0_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ0_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ0_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ0_DPID_Pos				29

	/* 0x114 */
	uint8_t RESERVED24[0x130u-0x114u];

	/* 0x130: OTG_FS host channel-1 transfer size */
	uint32_t volatile HCTSIZ1;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ1_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ1_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ1_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ1_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ1_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ1_DPID_Pos				29

	/* 0x134 */
	uint8_t RESERVED25[0x150u-0x134u];

	/* 0x150: OTG_FS host channel-2 transfer size */
	uint32_t volatile HCTSIZ2;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ2_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ2_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ2_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ2_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ2_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ2_DPID_Pos				29

	/* 0x154 */
	uint8_t RESERVED26[0x170u-0x154u];

	/* 0x170: OTG_FS host channel-3 transfer size */
	uint32_t volatile HCTSIZ3;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ3_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ3_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ3_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ3_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ3_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ3_DPID_Pos				29

	/* 0x174 */
	uint8_t RESERVED27[0x190u-0x174u];

	/* 0x190: OTG_FS host channel-x transfer size */
	uint32_t volatile HCTSIZ4;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ4_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ4_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ4_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ4_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ4_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ4_DPID_Pos				29

	/* 0x194 */
	uint8_t RESERVED28[0x1B0u-0x194u];

	/* 0x1B0: OTG_FS host channel-5 transfer size */
	uint32_t volatile HCTSIZ5;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ5_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ5_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ5_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ5_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ5_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ5_DPID_Pos				29

	/* 0x1B4 */
	uint8_t RESERVED29[0x1D0u-0x1B4u];

	/* 0x1D0: OTG_FS host channel-6 transfer size */
	uint32_t volatile HCTSIZ6;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ6_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ6_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ6_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ6_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ6_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ6_DPID_Pos				29

	/* 0x1D4 */
	uint8_t RESERVED30[0x1F0u-0x1D4u];

	/* 0x1F0: OTG_FS host channel-7 transfer size */
	uint32_t volatile HCTSIZ7;
	/* Transfer size */
#define OTG_FS_HOST_HCTSIZ7_XFRSIZ_Msk				(0x7FFFFu << 0)
#define OTG_FS_HOST_HCTSIZ7_XFRSIZ_Pos				0
	/* Packet count */
#define OTG_FS_HOST_HCTSIZ7_PKTCNT_Msk				(0x3FFu << 19)
#define OTG_FS_HOST_HCTSIZ7_PKTCNT_Pos				19
	/* Data PID */
#define OTG_FS_HOST_HCTSIZ7_DPID_Msk				(0x3u << 29)
#define OTG_FS_HOST_HCTSIZ7_DPID_Pos				29

};


#define OTG_FS_PWRCLK ((struct sdk_otg_fs_pwrclk *)0x50000E00)

struct sdk_otg_fs_pwrclk {

	/* 0x00: OTG_FS power and clock gating control */
	uint32_t volatile PCGCCTL;
	/* Stop PHY clock */
#define OTG_FS_PWRCLK_PCGCCTL_STPPCLK				(1u << 0)
	/* Gate HCLK */
#define OTG_FS_PWRCLK_PCGCCTL_GATEHCLK				(1u << 1)
	/* PHY Suspended */
#define OTG_FS_PWRCLK_PCGCCTL_PHYSUSP				(1u << 4)

};


#define PWR ((struct sdk_pwr *)0x40007000)

struct sdk_pwr {

	/* 0x00: power control register */
	uint32_t volatile CR;
	/* Regulator voltage scaling output */
#define PWR_CR_VOS_Msk						(0x3u << 14)
#define PWR_CR_VOS_Pos						14
	/* ADCDC1 */
#define PWR_CR_ADCDC1						(1u << 13)
	/* Flash power down in Stop */
#define PWR_CR_FPDS						(1u << 9)
	/* Disable backup domain write */
#define PWR_CR_DBP						(1u << 8)
	/* PVD level selection */
#define PWR_CR_PLS_Msk						(0x7u << 5)
#define PWR_CR_PLS_Pos						5
	/* Power voltage detector */
#define PWR_CR_PVDE						(1u << 4)
	/* Clear standby flag */
#define PWR_CR_CSBF						(1u << 3)
	/* Clear wakeup flag */
#define PWR_CR_CWUF						(1u << 2)
	/* Power down deepsleep */
#define PWR_CR_PDDS						(1u << 1)
	/* Low-power deep sleep */
#define PWR_CR_LPDS						(1u << 0)

	/* 0x04: power control/status register */
	uint32_t volatile CSR;
	/* Wakeup flag */
#define PWR_CSR_WUF						(1u << 0)
	/* Standby flag */
#define PWR_CSR_SBF						(1u << 1)
	/* PVD output */
#define PWR_CSR_PVDO						(1u << 2)
	/* Backup regulator ready */
#define PWR_CSR_BRR						(1u << 3)
	/* Enable WKUP pin */
#define PWR_CSR_EWUP						(1u << 8)
	/* Backup regulator enable */
#define PWR_CSR_BRE						(1u << 9)
	/* Regulator voltage scaling output */
#define PWR_CSR_VOSRDY						(1u << 14)

};


#define RCC ((struct sdk_rcc *)0x40023800)

struct sdk_rcc {

	/* 0x00: clock control register */
	uint32_t volatile CR;
	/* PLLI2S clock ready flag */
#define RCC_CR_PLLI2SRDY					(1u << 27)
	/* PLLI2S enable */
#define RCC_CR_PLLI2SON						(1u << 26)
	/* Main PLL (PLL) clock ready */
#define RCC_CR_PLLRDY						(1u << 25)
	/* Main PLL (PLL) enable */
#define RCC_CR_PLLON						(1u << 24)
	/* Clock security system */
#define RCC_CR_CSSON						(1u << 19)
#define RCC_CR_CSSON_OFF					(0x0u << 19)
#define RCC_CR_CSSON_ON						(0x1u << 19)
	/* HSE clock bypass */
#define RCC_CR_HSEBYP						(1u << 18)
#define RCC_CR_HSEBYP_NOTBYPASSED				(0x0u << 18)
#define RCC_CR_HSEBYP_BYPASSED					(0x1u << 18)
	/* HSE clock ready flag */
#define RCC_CR_HSERDY						(1u << 17)
	/* HSE clock enable */
#define RCC_CR_HSEON						(1u << 16)
	/* Internal high-speed clock */
#define RCC_CR_HSICAL_Msk					(0xFFu << 8)
#define RCC_CR_HSICAL_Pos					8
	/* Internal high-speed clock */
#define RCC_CR_HSITRIM_Msk					(0x1Fu << 3)
#define RCC_CR_HSITRIM_Pos					3
	/* Internal high-speed clock ready */
#define RCC_CR_HSIRDY						(1u << 1)
#define RCC_CR_HSIRDY_NOTREADY					(0x0u << 1)
#define RCC_CR_HSIRDY_READY					(0x1u << 1)
	/* Internal high-speed clock */
#define RCC_CR_HSION						(1u << 0)
#define RCC_CR_HSION_OFF					(0x0u << 0)
#define RCC_CR_HSION_ON						(0x1u << 0)

	/* 0x04: PLL configuration register */
	uint32_t volatile PLLCFGR;
	/* Main PLL(PLL) and audio PLL (PLLI2S) */
#define RCC_PLLCFGR_PLLSRC					(1u << 22)
#define RCC_PLLCFGR_PLLSRC_HSI					(0x0u << 22)
#define RCC_PLLCFGR_PLLSRC_HSE					(0x1u << 22)
	/* Division factor for the main PLL (PLL) */
#define RCC_PLLCFGR_PLLM_Msk					(0x3Fu << 0)
#define RCC_PLLCFGR_PLLM_Pos					0
	/* Main PLL (PLL) multiplication factor for */
#define RCC_PLLCFGR_PLLN_Msk					(0x1FFu << 6)
#define RCC_PLLCFGR_PLLN_Pos					6
	/* Main PLL (PLL) division factor for main */
#define RCC_PLLCFGR_PLLP_Msk					(0x3u << 16)
#define RCC_PLLCFGR_PLLP_Pos					16
#define RCC_PLLCFGR_PLLP_DIV2					(0x0u << 16)
#define RCC_PLLCFGR_PLLP_DIV4					(0x1u << 16)
#define RCC_PLLCFGR_PLLP_DIV6					(0x2u << 16)
#define RCC_PLLCFGR_PLLP_DIV8					(0x3u << 16)
	/* Main PLL (PLL) division factor for USB */
#define RCC_PLLCFGR_PLLQ_Msk					(0xFu << 24)
#define RCC_PLLCFGR_PLLQ_Pos					24

	/* 0x08: clock configuration register */
	uint32_t volatile CFGR;
	/* Microcontroller clock output */
#define RCC_CFGR_MCO2_Msk					(0x3u << 30)
#define RCC_CFGR_MCO2_Pos					30
#define RCC_CFGR_MCO2_SYSCLK					(0x0u << 30)
#define RCC_CFGR_MCO2_PLLI2S					(0x1u << 30)
#define RCC_CFGR_MCO2_HSE					(0x2u << 30)
#define RCC_CFGR_MCO2_PLL					(0x3u << 30)
	/* MCO2 prescaler */
#define RCC_CFGR_MCO2PRE_Msk					(0x7u << 27)
#define RCC_CFGR_MCO2PRE_Pos					27
	/* MCO1 prescaler */
#define RCC_CFGR_MCO1PRE_Msk					(0x7u << 24)
#define RCC_CFGR_MCO1PRE_Pos					24
#define RCC_CFGR_MCO1PRE_DIV1					(0x0u << 24)
#define RCC_CFGR_MCO1PRE_DIV2					(0x4u << 24)
#define RCC_CFGR_MCO1PRE_DIV3					(0x5u << 24)
#define RCC_CFGR_MCO1PRE_DIV4					(0x6u << 24)
#define RCC_CFGR_MCO1PRE_DIV5					(0x7u << 24)
	/* I2S clock selection */
#define RCC_CFGR_I2SSRC						(1u << 23)
#define RCC_CFGR_I2SSRC_PLLI2S					(0x0u << 23)
#define RCC_CFGR_I2SSRC_CKIN					(0x1u << 23)
	/* Microcontroller clock output */
#define RCC_CFGR_MCO1_Msk					(0x3u << 21)
#define RCC_CFGR_MCO1_Pos					21
#define RCC_CFGR_MCO1_HSI					(0x0u << 21)
#define RCC_CFGR_MCO1_LSE					(0x1u << 21)
#define RCC_CFGR_MCO1_HSE					(0x2u << 21)
#define RCC_CFGR_MCO1_PLL					(0x3u << 21)
	/* HSE division factor for RTC */
#define RCC_CFGR_RTCPRE_Msk					(0x1Fu << 16)
#define RCC_CFGR_RTCPRE_Pos					16
	/* APB high-speed prescaler */
#define RCC_CFGR_PPRE2_Msk					(0x7u << 13)
#define RCC_CFGR_PPRE2_Pos					13
	/* APB Low speed prescaler */
#define RCC_CFGR_PPRE1_Msk					(0x7u << 10)
#define RCC_CFGR_PPRE1_Pos					10
#define RCC_CFGR_PPRE1_DIV1					(0x0u << 10)
#define RCC_CFGR_PPRE1_DIV2					(0x4u << 10)
#define RCC_CFGR_PPRE1_DIV4					(0x5u << 10)
#define RCC_CFGR_PPRE1_DIV8					(0x6u << 10)
#define RCC_CFGR_PPRE1_DIV16					(0x7u << 10)
	/* AHB prescaler */
#define RCC_CFGR_HPRE_Msk					(0xFu << 4)
#define RCC_CFGR_HPRE_Pos					4
#define RCC_CFGR_HPRE_DIV1					(0x0u << 4)
#define RCC_CFGR_HPRE_DIV2					(0x8u << 4)
#define RCC_CFGR_HPRE_DIV4					(0x9u << 4)
#define RCC_CFGR_HPRE_DIV8					(0xAu << 4)
#define RCC_CFGR_HPRE_DIV16					(0xBu << 4)
#define RCC_CFGR_HPRE_DIV64					(0xCu << 4)
#define RCC_CFGR_HPRE_DIV128					(0xDu << 4)
#define RCC_CFGR_HPRE_DIV256					(0xEu << 4)
#define RCC_CFGR_HPRE_DIV512					(0xFu << 4)
	/* System clock switch */
#define RCC_CFGR_SW_Msk						(0x3u << 0)
#define RCC_CFGR_SW_Pos						0
#define RCC_CFGR_SW_HSI						(0x0u << 0)
#define RCC_CFGR_SW_HSE						(0x1u << 0)
#define RCC_CFGR_SW_PLL						(0x2u << 0)
	/* System clock switch status */
#define RCC_CFGR_SWS_Msk					(0x3u << 2)
#define RCC_CFGR_SWS_Pos					2
#define RCC_CFGR_SWS_HSI					(0x0u << 2)
#define RCC_CFGR_SWS_HSE					(0x1u << 2)
#define RCC_CFGR_SWS_PLL					(0x2u << 2)

	/* 0x0C: clock interrupt register */
	uint32_t volatile CIR;
	/* Clock security system interrupt */
#define RCC_CIR_CSSC						(1u << 23)
#define RCC_CIR_CSSC_CLEAR					(0x1u << 23)
	/* PLLI2S ready interrupt */
#define RCC_CIR_PLLI2SRDYC					(1u << 21)
	/* Main PLL(PLL) ready interrupt */
#define RCC_CIR_PLLRDYC						(1u << 20)
	/* HSE ready interrupt clear */
#define RCC_CIR_HSERDYC						(1u << 19)
	/* HSI ready interrupt clear */
#define RCC_CIR_HSIRDYC						(1u << 18)
	/* LSE ready interrupt clear */
#define RCC_CIR_LSERDYC						(1u << 17)
	/* LSI ready interrupt clear */
#define RCC_CIR_LSIRDYC						(1u << 16)
#define RCC_CIR_LSIRDYC_CLEAR					(0x1u << 16)
	/* PLLI2S ready interrupt */
#define RCC_CIR_PLLI2SRDYIE					(1u << 13)
	/* Main PLL (PLL) ready interrupt */
#define RCC_CIR_PLLRDYIE					(1u << 12)
	/* HSE ready interrupt enable */
#define RCC_CIR_HSERDYIE					(1u << 11)
	/* HSI ready interrupt enable */
#define RCC_CIR_HSIRDYIE					(1u << 10)
	/* LSE ready interrupt enable */
#define RCC_CIR_LSERDYIE					(1u << 9)
	/* LSI ready interrupt enable */
#define RCC_CIR_LSIRDYIE					(1u << 8)
#define RCC_CIR_LSIRDYIE_DISABLED				(0x0u << 8)
#define RCC_CIR_LSIRDYIE_ENABLED				(0x1u << 8)
	/* Clock security system interrupt */
#define RCC_CIR_CSSF						(1u << 7)
#define RCC_CIR_CSSF_NOTINTERRUPTED				(0x0u << 7)
#define RCC_CIR_CSSF_INTERRUPTED				(0x1u << 7)
	/* PLLI2S ready interrupt */
#define RCC_CIR_PLLI2SRDYF					(1u << 5)
	/* Main PLL (PLL) ready interrupt */
#define RCC_CIR_PLLRDYF						(1u << 4)
	/* HSE ready interrupt flag */
#define RCC_CIR_HSERDYF						(1u << 3)
	/* HSI ready interrupt flag */
#define RCC_CIR_HSIRDYF						(1u << 2)
	/* LSE ready interrupt flag */
#define RCC_CIR_LSERDYF						(1u << 1)
	/* LSI ready interrupt flag */
#define RCC_CIR_LSIRDYF						(1u << 0)
#define RCC_CIR_LSIRDYF_NOTINTERRUPTED				(0x0u << 0)
#define RCC_CIR_LSIRDYF_INTERRUPTED				(0x1u << 0)

	/* 0x10: AHB1 peripheral reset register */
	uint32_t volatile AHB1RSTR;
	/* DMA2 reset */
#define RCC_AHB1RSTR_DMA2RST					(1u << 22)
	/* DMA2 reset */
#define RCC_AHB1RSTR_DMA1RST					(1u << 21)
	/* CRC reset */
#define RCC_AHB1RSTR_CRCRST					(1u << 12)
	/* IO port H reset */
#define RCC_AHB1RSTR_GPIOHRST					(1u << 7)
	/* IO port E reset */
#define RCC_AHB1RSTR_GPIOERST					(1u << 4)
	/* IO port D reset */
#define RCC_AHB1RSTR_GPIODRST					(1u << 3)
	/* IO port C reset */
#define RCC_AHB1RSTR_GPIOCRST					(1u << 2)
	/* IO port B reset */
#define RCC_AHB1RSTR_GPIOBRST					(1u << 1)
	/* IO port A reset */
#define RCC_AHB1RSTR_GPIOARST					(1u << 0)
#define RCC_AHB1RSTR_GPIOARST_RESET				(0x1u << 0)

	/* 0x14: AHB2 peripheral reset register */
	uint32_t volatile AHB2RSTR;
	/* USB OTG FS module reset */
#define RCC_AHB2RSTR_OTGFSRST					(1u << 7)
#define RCC_AHB2RSTR_OTGFSRST_RESET				(0x1u << 7)

	/* 0x18 */
	uint8_t RESERVED0[0x20u-0x18u];

	/* 0x20: APB1 peripheral reset register */
	uint32_t volatile APB1RSTR;
	/* Power interface reset */
#define RCC_APB1RSTR_PWRRST					(1u << 28)
	/* I2C3 reset */
#define RCC_APB1RSTR_I2C3RST					(1u << 23)
	/* I2C 2 reset */
#define RCC_APB1RSTR_I2C2RST					(1u << 22)
	/* I2C 1 reset */
#define RCC_APB1RSTR_I2C1RST					(1u << 21)
	/* USART 2 reset */
#define RCC_APB1RSTR_USART2RST					(1u << 17)
	/* SPI 3 reset */
#define RCC_APB1RSTR_SPI3RST					(1u << 15)
	/* SPI 2 reset */
#define RCC_APB1RSTR_SPI2RST					(1u << 14)
	/* Window watchdog reset */
#define RCC_APB1RSTR_WWDGRST					(1u << 11)
	/* TIM5 reset */
#define RCC_APB1RSTR_TIM5RST					(1u << 3)
	/* TIM4 reset */
#define RCC_APB1RSTR_TIM4RST					(1u << 2)
	/* TIM3 reset */
#define RCC_APB1RSTR_TIM3RST					(1u << 1)
	/* TIM2 reset */
#define RCC_APB1RSTR_TIM2RST					(1u << 0)
#define RCC_APB1RSTR_TIM2RST_RESET				(0x1u << 0)

	/* 0x24: APB2 peripheral reset register */
	uint32_t volatile APB2RSTR;
	/* TIM11 reset */
#define RCC_APB2RSTR_TIM11RST					(1u << 18)
	/* TIM10 reset */
#define RCC_APB2RSTR_TIM10RST					(1u << 17)
	/* TIM9 reset */
#define RCC_APB2RSTR_TIM9RST					(1u << 16)
	/* System configuration controller */
#define RCC_APB2RSTR_SYSCFGRST					(1u << 14)
	/* SPI 1 reset */
#define RCC_APB2RSTR_SPI1RST					(1u << 12)
	/* SDIO reset */
#define RCC_APB2RSTR_SDIORST					(1u << 11)
	/* ADC interface reset (common to all */
#define RCC_APB2RSTR_ADCRST					(1u << 8)
	/* USART6 reset */
#define RCC_APB2RSTR_USART6RST					(1u << 5)
	/* USART1 reset */
#define RCC_APB2RSTR_USART1RST					(1u << 4)
	/* TIM1 reset */
#define RCC_APB2RSTR_TIM1RST					(1u << 0)
#define RCC_APB2RSTR_TIM1RST_RESET				(0x1u << 0)
	/* SPI4 reset */
#define RCC_APB2RSTR_SPI4RST					(1u << 13)
	/* SPI5 reset */
#define RCC_APB2RSTR_SPI5RST					(1u << 20)

	/* 0x28 */
	uint8_t RESERVED1[0x30u-0x28u];

	/* 0x30: AHB1 peripheral clock register */
	uint32_t volatile AHB1ENR;
	/* DMA2 clock enable */
#define RCC_AHB1ENR_DMA2EN					(1u << 22)
	/* DMA1 clock enable */
#define RCC_AHB1ENR_DMA1EN					(1u << 21)
	/* CRC clock enable */
#define RCC_AHB1ENR_CRCEN					(1u << 12)
	/* IO port H clock enable */
#define RCC_AHB1ENR_GPIOHEN					(1u << 7)
	/* IO port E clock enable */
#define RCC_AHB1ENR_GPIOEEN					(1u << 4)
	/* IO port D clock enable */
#define RCC_AHB1ENR_GPIODEN					(1u << 3)
	/* IO port C clock enable */
#define RCC_AHB1ENR_GPIOCEN					(1u << 2)
	/* IO port B clock enable */
#define RCC_AHB1ENR_GPIOBEN					(1u << 1)
	/* IO port A clock enable */
#define RCC_AHB1ENR_GPIOAEN					(1u << 0)
#define RCC_AHB1ENR_GPIOAEN_DISABLED				(0x0u << 0)
#define RCC_AHB1ENR_GPIOAEN_ENABLED				(0x1u << 0)

	/* 0x34: AHB2 peripheral clock enable */
	uint32_t volatile AHB2ENR;
	/* USB OTG FS clock enable */
#define RCC_AHB2ENR_OTGFSEN					(1u << 7)
#define RCC_AHB2ENR_OTGFSEN_DISABLED				(0x0u << 7)
#define RCC_AHB2ENR_OTGFSEN_ENABLED				(0x1u << 7)

	/* 0x38 */
	uint8_t RESERVED2[0x40u-0x38u];

	/* 0x40: APB1 peripheral clock enable */
	uint32_t volatile APB1ENR;
	/* Power interface clock */
#define RCC_APB1ENR_PWREN					(1u << 28)
	/* I2C3 clock enable */
#define RCC_APB1ENR_I2C3EN					(1u << 23)
	/* I2C2 clock enable */
#define RCC_APB1ENR_I2C2EN					(1u << 22)
	/* I2C1 clock enable */
#define RCC_APB1ENR_I2C1EN					(1u << 21)
	/* USART 2 clock enable */
#define RCC_APB1ENR_USART2EN					(1u << 17)
	/* SPI3 clock enable */
#define RCC_APB1ENR_SPI3EN					(1u << 15)
	/* SPI2 clock enable */
#define RCC_APB1ENR_SPI2EN					(1u << 14)
	/* Window watchdog clock */
#define RCC_APB1ENR_WWDGEN					(1u << 11)
	/* TIM5 clock enable */
#define RCC_APB1ENR_TIM5EN					(1u << 3)
	/* TIM4 clock enable */
#define RCC_APB1ENR_TIM4EN					(1u << 2)
	/* TIM3 clock enable */
#define RCC_APB1ENR_TIM3EN					(1u << 1)
	/* TIM2 clock enable */
#define RCC_APB1ENR_TIM2EN					(1u << 0)
#define RCC_APB1ENR_TIM2EN_DISABLED				(0x0u << 0)
#define RCC_APB1ENR_TIM2EN_ENABLED				(0x1u << 0)

	/* 0x44: APB2 peripheral clock enable */
	uint32_t volatile APB2ENR;
	/* TIM1 clock enable */
#define RCC_APB2ENR_TIM1EN					(1u << 0)
#define RCC_APB2ENR_TIM1EN_DISABLED				(0x0u << 0)
#define RCC_APB2ENR_TIM1EN_ENABLED				(0x1u << 0)
	/* USART1 clock enable */
#define RCC_APB2ENR_USART1EN					(1u << 4)
	/* USART6 clock enable */
#define RCC_APB2ENR_USART6EN					(1u << 5)
	/* ADC1 clock enable */
#define RCC_APB2ENR_ADC1EN					(1u << 8)
	/* SDIO clock enable */
#define RCC_APB2ENR_SDIOEN					(1u << 11)
	/* SPI1 clock enable */
#define RCC_APB2ENR_SPI1EN					(1u << 12)
	/* SPI4 clock enable */
#define RCC_APB2ENR_SPI4EN					(1u << 13)
	/* System configuration controller clock */
#define RCC_APB2ENR_SYSCFGEN					(1u << 14)
	/* TIM9 clock enable */
#define RCC_APB2ENR_TIM9EN					(1u << 16)
	/* TIM10 clock enable */
#define RCC_APB2ENR_TIM10EN					(1u << 17)
	/* TIM11 clock enable */
#define RCC_APB2ENR_TIM11EN					(1u << 18)
	/* SPI5 clock enable */
#define RCC_APB2ENR_SPI5EN					(1u << 20)

	/* 0x48 */
	uint8_t RESERVED3[0x50u-0x48u];

	/* 0x50: AHB1 peripheral clock enable in low power */
	uint32_t volatile AHB1LPENR;
	/* DMA2 clock enable during Sleep */
#define RCC_AHB1LPENR_DMA2LPEN					(1u << 22)
	/* DMA1 clock enable during Sleep */
#define RCC_AHB1LPENR_DMA1LPEN					(1u << 21)
	/* SRAM 1interface clock enable during */
#define RCC_AHB1LPENR_SRAM1LPEN					(1u << 16)
	/* Flash interface clock enable during */
#define RCC_AHB1LPENR_FLITFLPEN					(1u << 15)
	/* CRC clock enable during Sleep */
#define RCC_AHB1LPENR_CRCLPEN					(1u << 12)
	/* IO port H clock enable during Sleep */
#define RCC_AHB1LPENR_GPIOHLPEN					(1u << 7)
	/* IO port E clock enable during Sleep */
#define RCC_AHB1LPENR_GPIOELPEN					(1u << 4)
	/* IO port D clock enable during Sleep */
#define RCC_AHB1LPENR_GPIODLPEN					(1u << 3)
	/* IO port C clock enable during Sleep */
#define RCC_AHB1LPENR_GPIOCLPEN					(1u << 2)
	/* IO port B clock enable during Sleep */
#define RCC_AHB1LPENR_GPIOBLPEN					(1u << 1)
	/* IO port A clock enable during sleep */
#define RCC_AHB1LPENR_GPIOALPEN					(1u << 0)
#define RCC_AHB1LPENR_GPIOALPEN_DISABLEDINSLEEP			(0x0u << 0)
#define RCC_AHB1LPENR_GPIOALPEN_ENABLEDINSLEEP			(0x1u << 0)

	/* 0x54: AHB2 peripheral clock enable in low power */
	uint32_t volatile AHB2LPENR;
	/* USB OTG FS clock enable during Sleep */
#define RCC_AHB2LPENR_OTGFSLPEN					(1u << 7)
#define RCC_AHB2LPENR_OTGFSLPEN_DISABLEDINSLEEP			(0x0u << 7)
#define RCC_AHB2LPENR_OTGFSLPEN_ENABLEDINSLEEP			(0x1u << 7)

	/* 0x58 */
	uint8_t RESERVED4[0x60u-0x58u];

	/* 0x60: APB1 peripheral clock enable in low power */
	uint32_t volatile APB1LPENR;
	/* Power interface clock enable during */
#define RCC_APB1LPENR_PWRLPEN					(1u << 28)
	/* I2C3 clock enable during Sleep */
#define RCC_APB1LPENR_I2C3LPEN					(1u << 23)
	/* I2C2 clock enable during Sleep */
#define RCC_APB1LPENR_I2C2LPEN					(1u << 22)
	/* I2C1 clock enable during Sleep */
#define RCC_APB1LPENR_I2C1LPEN					(1u << 21)
	/* USART2 clock enable during Sleep */
#define RCC_APB1LPENR_USART2LPEN				(1u << 17)
	/* SPI3 clock enable during Sleep */
#define RCC_APB1LPENR_SPI3LPEN					(1u << 15)
	/* SPI2 clock enable during Sleep */
#define RCC_APB1LPENR_SPI2LPEN					(1u << 14)
	/* Window watchdog clock enable during */
#define RCC_APB1LPENR_WWDGLPEN					(1u << 11)
	/* TIM5 clock enable during Sleep */
#define RCC_APB1LPENR_TIM5LPEN					(1u << 3)
	/* TIM4 clock enable during Sleep */
#define RCC_APB1LPENR_TIM4LPEN					(1u << 2)
	/* TIM3 clock enable during Sleep */
#define RCC_APB1LPENR_TIM3LPEN					(1u << 1)
	/* TIM2 clock enable during Sleep */
#define RCC_APB1LPENR_TIM2LPEN					(1u << 0)
#define RCC_APB1LPENR_TIM2LPEN_DISABLEDINSLEEP			(0x0u << 0)
#define RCC_APB1LPENR_TIM2LPEN_ENABLEDINSLEEP			(0x1u << 0)

	/* 0x64: APB2 peripheral clock enabled in low power */
	uint32_t volatile APB2LPENR;
	/* TIM1 clock enable during Sleep */
#define RCC_APB2LPENR_TIM1LPEN					(1u << 0)
#define RCC_APB2LPENR_TIM1LPEN_DISABLEDINSLEEP			(0x0u << 0)
#define RCC_APB2LPENR_TIM1LPEN_ENABLEDINSLEEP			(0x1u << 0)
	/* USART1 clock enable during Sleep */
#define RCC_APB2LPENR_USART1LPEN				(1u << 4)
	/* USART6 clock enable during Sleep */
#define RCC_APB2LPENR_USART6LPEN				(1u << 5)
	/* ADC1 clock enable during Sleep */
#define RCC_APB2LPENR_ADC1LPEN					(1u << 8)
	/* SDIO clock enable during Sleep */
#define RCC_APB2LPENR_SDIOLPEN					(1u << 11)
	/* SPI 1 clock enable during Sleep */
#define RCC_APB2LPENR_SPI1LPEN					(1u << 12)
	/* SPI4 clock enable during Sleep */
#define RCC_APB2LPENR_SPI4LPEN					(1u << 13)
	/* System configuration controller clock */
#define RCC_APB2LPENR_SYSCFGLPEN				(1u << 14)
	/* TIM9 clock enable during sleep */
#define RCC_APB2LPENR_TIM9LPEN					(1u << 16)
	/* TIM10 clock enable during Sleep */
#define RCC_APB2LPENR_TIM10LPEN					(1u << 17)
	/* TIM11 clock enable during Sleep */
#define RCC_APB2LPENR_TIM11LPEN					(1u << 18)
	/* SPI5 clock enable during Sleep mode */
#define RCC_APB2LPENR_SPI5LPEN					(1u << 20)

	/* 0x68 */
	uint8_t RESERVED5[0x70u-0x68u];

	/* 0x70: Backup domain control register */
	uint32_t volatile BDCR;
	/* Backup domain software */
#define RCC_BDCR_BDRST						(1u << 16)
#define RCC_BDCR_BDRST_DISABLED					(0x0u << 16)
#define RCC_BDCR_BDRST_ENABLED					(0x1u << 16)
	/* RTC clock enable */
#define RCC_BDCR_RTCEN						(1u << 15)
#define RCC_BDCR_RTCEN_DISABLED					(0x0u << 15)
#define RCC_BDCR_RTCEN_ENABLED					(0x1u << 15)
	/* External low-speed oscillator */
#define RCC_BDCR_LSEBYP						(1u << 2)
#define RCC_BDCR_LSEBYP_NOTBYPASSED				(0x0u << 2)
#define RCC_BDCR_LSEBYP_BYPASSED				(0x1u << 2)
	/* External low-speed oscillator */
#define RCC_BDCR_LSERDY						(1u << 1)
#define RCC_BDCR_LSERDY_NOTREADY				(0x0u << 1)
#define RCC_BDCR_LSERDY_READY					(0x1u << 1)
	/* External low-speed oscillator */
#define RCC_BDCR_LSEON						(1u << 0)
#define RCC_BDCR_LSEON_OFF					(0x0u << 0)
#define RCC_BDCR_LSEON_ON					(0x1u << 0)
	/* RTC clock source selection */
#define RCC_BDCR_RTCSEL_Msk					(0x3u << 8)
#define RCC_BDCR_RTCSEL_Pos					8
#define RCC_BDCR_RTCSEL_NOCLOCK					(0x0u << 8)
#define RCC_BDCR_RTCSEL_LSE					(0x1u << 8)
#define RCC_BDCR_RTCSEL_LSI					(0x2u << 8)
#define RCC_BDCR_RTCSEL_HSE					(0x3u << 8)

	/* 0x74: clock control & status */
	uint32_t volatile CSR;
	/* Low-power reset flag */
#define RCC_CSR_LPWRRSTF					(1u << 31)
	/* Window watchdog reset flag */
#define RCC_CSR_WWDGRSTF					(1u << 30)
	/* Independent watchdog reset */
#define RCC_CSR_WDGRSTF						(1u << 29)
	/* Software reset flag */
#define RCC_CSR_SFTRSTF						(1u << 28)
	/* POR/PDR reset flag */
#define RCC_CSR_PORRSTF						(1u << 27)
	/* PIN reset flag */
#define RCC_CSR_PADRSTF						(1u << 26)
	/* BOR reset flag */
#define RCC_CSR_BORRSTF						(1u << 25)
#define RCC_CSR_BORRSTF_NORESET					(0x0u << 25)
#define RCC_CSR_BORRSTF_RESET					(0x1u << 25)
	/* Remove reset flag */
#define RCC_CSR_RMVF						(1u << 24)
#define RCC_CSR_RMVF_CLEAR					(0x1u << 24)
	/* Internal low-speed oscillator */
#define RCC_CSR_LSIRDY						(1u << 1)
#define RCC_CSR_LSIRDY_NOTREADY					(0x0u << 1)
#define RCC_CSR_LSIRDY_READY					(0x1u << 1)
	/* Internal low-speed oscillator */
#define RCC_CSR_LSION						(1u << 0)
#define RCC_CSR_LSION_OFF					(0x0u << 0)
#define RCC_CSR_LSION_ON					(0x1u << 0)

	/* 0x78 */
	uint8_t RESERVED6[0x80u-0x78u];

	/* 0x80: spread spectrum clock generation */
	uint32_t volatile SSCGR;
	/* Spread spectrum modulation */
#define RCC_SSCGR_SSCGEN					(1u << 31)
#define RCC_SSCGR_SSCGEN_DISABLED				(0x0u << 31)
#define RCC_SSCGR_SSCGEN_ENABLED				(0x1u << 31)
	/* Spread Select */
#define RCC_SSCGR_SPREADSEL					(1u << 30)
#define RCC_SSCGR_SPREADSEL_CENTER				(0x0u << 30)
#define RCC_SSCGR_SPREADSEL_DOWN				(0x1u << 30)
	/* Incrementation step */
#define RCC_SSCGR_INCSTEP_Msk					(0x7FFFu << 13)
#define RCC_SSCGR_INCSTEP_Pos					13
	/* Modulation period */
#define RCC_SSCGR_MODPER_Msk					(0x1FFFu << 0)
#define RCC_SSCGR_MODPER_Pos					0

	/* 0x84: PLLI2S configuration register */
	uint32_t volatile PLLI2SCFGR;
	/* PLLI2S division factor for I2S */
#define RCC_PLLI2SCFGR_PLLI2SR_Msk				(0x7u << 28)
#define RCC_PLLI2SCFGR_PLLI2SR_Pos				28
	/* PLLI2S multiplication factor for */
#define RCC_PLLI2SCFGR_PLLI2SN_Msk				(0x1FFu << 6)
#define RCC_PLLI2SCFGR_PLLI2SN_Pos				6
	/* Division factor for the audio PLL (PLLI2S) input clock */
#define RCC_PLLI2SCFGR_PLLI2SM_Msk				(0x3Fu << 0)
#define RCC_PLLI2SCFGR_PLLI2SM_Pos				0

	/* 0x88 */
	uint8_t RESERVED7[0x8Cu-0x88u];

	/* 0x8C: RCC Dedicated Clock Configuration Register */
	uint32_t volatile DCKCFGR;
	/* Timers clocks prescalers selection */
#define RCC_DCKCFGR_TIMPRE					(1u << 24)
#define RCC_DCKCFGR_TIMPRE_MUL2					(0x0u << 24)
#define RCC_DCKCFGR_TIMPRE_MUL4					(0x1u << 24)

};


#define RTC ((struct sdk_rtc *)0x40002800)

struct sdk_rtc {

	/* 0x00: time register */
	uint32_t volatile TR;
	/* AM/PM notation */
#define RTC_TR_PM						(1u << 22)
#define RTC_TR_PM_AM						(0x0u << 22)
#define RTC_TR_PM_PM						(0x1u << 22)
	/* Hour tens in BCD format */
#define RTC_TR_HT_Msk						(0x3u << 20)
#define RTC_TR_HT_Pos						20
	/* Hour units in BCD format */
#define RTC_TR_HU_Msk						(0xFu << 16)
#define RTC_TR_HU_Pos						16
	/* Minute tens in BCD format */
#define RTC_TR_MNT_Msk						(0x7u << 12)
#define RTC_TR_MNT_Pos						12
	/* Minute units in BCD format */
#define RTC_TR_MNU_Msk						(0xFu << 8)
#define RTC_TR_MNU_Pos						8
	/* Second tens in BCD format */
#define RTC_TR_ST_Msk						(0x7u << 4)
#define RTC_TR_ST_Pos						4
	/* Second units in BCD format */
#define RTC_TR_SU_Msk						(0xFu << 0)
#define RTC_TR_SU_Pos						0

	/* 0x04: date register */
	uint32_t volatile DR;
	/* Year tens in BCD format */
#define RTC_DR_YT_Msk						(0xFu << 20)
#define RTC_DR_YT_Pos						20
	/* Year units in BCD format */
#define RTC_DR_YU_Msk						(0xFu << 16)
#define RTC_DR_YU_Pos						16
	/* Week day units */
#define RTC_DR_WDU_Msk						(0x7u << 13)
#define RTC_DR_WDU_Pos						13
	/* Month tens in BCD format */
#define RTC_DR_MT						(1u << 12)
	/* Month units in BCD format */
#define RTC_DR_MU_Msk						(0xFu << 8)
#define RTC_DR_MU_Pos						8
	/* Date tens in BCD format */
#define RTC_DR_DT_Msk						(0x3u << 4)
#define RTC_DR_DT_Pos						4
	/* Date units in BCD format */
#define RTC_DR_DU_Msk						(0xFu << 0)
#define RTC_DR_DU_Pos						0

	/* 0x08: control register */
	uint32_t volatile CR;
	/* Calibration output enable */
#define RTC_CR_COE						(1u << 23)
#define RTC_CR_COE_DISABLED					(0x0u << 23)
#define RTC_CR_COE_ENABLED					(0x1u << 23)
	/* Output selection */
#define RTC_CR_OSEL_Msk						(0x3u << 21)
#define RTC_CR_OSEL_Pos						21
#define RTC_CR_OSEL_DISABLED					(0x0u << 21)
#define RTC_CR_OSEL_ALARMA					(0x1u << 21)
#define RTC_CR_OSEL_ALARMB					(0x2u << 21)
#define RTC_CR_OSEL_WAKEUP					(0x3u << 21)
	/* Output polarity */
#define RTC_CR_POL						(1u << 20)
#define RTC_CR_POL_HIGH						(0x0u << 20)
#define RTC_CR_POL_LOW						(0x1u << 20)
	/* Calibration Output */
#define RTC_CR_COSEL						(1u << 19)
#define RTC_CR_COSEL_CALFREQ_512HZ				(0x0u << 19)
#define RTC_CR_COSEL_CALFREQ_1HZ				(0x1u << 19)
	/* Backup */
#define RTC_CR_BKP						(1u << 18)
#define RTC_CR_BKP_DST_NOT_CHANGED				(0x0u << 18)
#define RTC_CR_BKP_DST_CHANGED					(0x1u << 18)
	/* Subtract 1 hour (winter time */
#define RTC_CR_SUB1H						(1u << 17)
#define RTC_CR_SUB1H_SUB1					(0x1u << 17)
	/* Add 1 hour (summer time */
#define RTC_CR_ADD1H						(1u << 16)
#define RTC_CR_ADD1H_ADD1					(0x1u << 16)
	/* Time-stamp interrupt */
#define RTC_CR_TSIE						(1u << 15)
#define RTC_CR_TSIE_DISABLED					(0x0u << 15)
#define RTC_CR_TSIE_ENABLED					(0x1u << 15)
	/* Wakeup timer interrupt */
#define RTC_CR_WUTIE						(1u << 14)
#define RTC_CR_WUTIE_DISABLED					(0x0u << 14)
#define RTC_CR_WUTIE_ENABLED					(0x1u << 14)
	/* Alarm B interrupt enable */
#define RTC_CR_ALRBIE						(1u << 13)
#define RTC_CR_ALRBIE_DISABLED					(0x0u << 13)
#define RTC_CR_ALRBIE_ENABLED					(0x1u << 13)
	/* Alarm A interrupt enable */
#define RTC_CR_ALRAIE						(1u << 12)
#define RTC_CR_ALRAIE_DISABLED					(0x0u << 12)
#define RTC_CR_ALRAIE_ENABLED					(0x1u << 12)
	/* Time stamp enable */
#define RTC_CR_TSE						(1u << 11)
#define RTC_CR_TSE_DISABLED					(0x0u << 11)
#define RTC_CR_TSE_ENABLED					(0x1u << 11)
	/* Wakeup timer enable */
#define RTC_CR_WUTE						(1u << 10)
#define RTC_CR_WUTE_DISABLED					(0x0u << 10)
#define RTC_CR_WUTE_ENABLED					(0x1u << 10)
	/* Alarm B enable */
#define RTC_CR_ALRBE						(1u << 9)
#define RTC_CR_ALRBE_DISABLED					(0x0u << 9)
#define RTC_CR_ALRBE_ENABLED					(0x1u << 9)
	/* Alarm A enable */
#define RTC_CR_ALRAE						(1u << 8)
#define RTC_CR_ALRAE_DISABLED					(0x0u << 8)
#define RTC_CR_ALRAE_ENABLED					(0x1u << 8)
	/* Coarse digital calibration */
#define RTC_CR_DCE						(1u << 7)
	/* Hour format */
#define RTC_CR_FMT						(1u << 6)
#define RTC_CR_FMT_TWENTY_FOUR_HOUR				(0x0u << 6)
#define RTC_CR_FMT_AM_PM					(0x1u << 6)
	/* Bypass the shadow */
#define RTC_CR_BYPSHAD						(1u << 5)
#define RTC_CR_BYPSHAD_SHADOWREG				(0x0u << 5)
#define RTC_CR_BYPSHAD_BYPASSSHADOWREG				(0x1u << 5)
	/* Reference clock detection enable (50 or */
#define RTC_CR_REFCKON						(1u << 4)
#define RTC_CR_REFCKON_DISABLED					(0x0u << 4)
#define RTC_CR_REFCKON_ENABLED					(0x1u << 4)
	/* Time-stamp event active */
#define RTC_CR_TSEDGE						(1u << 3)
#define RTC_CR_TSEDGE_RISINGEDGE				(0x0u << 3)
#define RTC_CR_TSEDGE_FALLINGEDGE				(0x1u << 3)
	/* Wakeup clock selection */
#define RTC_CR_WUCKSEL_Msk					(0x7u << 0)
#define RTC_CR_WUCKSEL_Pos					0
#define RTC_CR_WUCKSEL_DIV16					(0x0u << 0)
#define RTC_CR_WUCKSEL_DIV8					(0x1u << 0)
#define RTC_CR_WUCKSEL_DIV4					(0x2u << 0)
#define RTC_CR_WUCKSEL_DIV2					(0x3u << 0)
#define RTC_CR_WUCKSEL_CLOCKSPARE				(0x4u << 0)
#define RTC_CR_WUCKSEL_CLOCKSPAREWITHOFFSET			(0x6u << 0)

	/* 0x0C: initialization and status */
	uint32_t volatile ISR;
	/* Alarm A write flag */
#define RTC_ISR_ALRAWF						(1u << 0)
#define RTC_ISR_ALRAWF_UPDATENOTALLOWED				(0x0u << 0)
#define RTC_ISR_ALRAWF_UPDATEALLOWED				(0x1u << 0)
	/* Alarm B write flag */
#define RTC_ISR_ALRBWF						(1u << 1)
	/* Wakeup timer write flag */
#define RTC_ISR_WUTWF						(1u << 2)
#define RTC_ISR_WUTWF_UPDATENOTALLOWED				(0x0u << 2)
#define RTC_ISR_WUTWF_UPDATEALLOWED				(0x1u << 2)
	/* Shift operation pending */
#define RTC_ISR_SHPF						(1u << 3)
#define RTC_ISR_SHPF_NOSHIFTPENDING				(0x0u << 3)
#define RTC_ISR_SHPF_SHIFTPENDING				(0x1u << 3)
	/* Initialization status flag */
#define RTC_ISR_INITS						(1u << 4)
#define RTC_ISR_INITS_NOTINITALIZED				(0x0u << 4)
#define RTC_ISR_INITS_INITALIZED				(0x1u << 4)
	/* Registers synchronization */
#define RTC_ISR_RSF						(1u << 5)
#define RTC_ISR_RSF_NOTSYNCED					(0x0u << 5)
#define RTC_ISR_RSF_SYNCED					(0x1u << 5)
#define RTC_ISR_RSF_CLEAR					(0x0u << 5)
	/* Initialization flag */
#define RTC_ISR_INITF						(1u << 6)
#define RTC_ISR_INITF_NOTALLOWED				(0x0u << 6)
#define RTC_ISR_INITF_ALLOWED					(0x1u << 6)
	/* Initialization mode */
#define RTC_ISR_INIT						(1u << 7)
#define RTC_ISR_INIT_FREERUNNINGMODE				(0x0u << 7)
#define RTC_ISR_INIT_INITMODE					(0x1u << 7)
	/* Alarm A flag */
#define RTC_ISR_ALRAF						(1u << 8)
#define RTC_ISR_ALRAF_MATCH					(0x1u << 8)
#define RTC_ISR_ALRAF_CLEAR					(0x0u << 8)
	/* Alarm B flag */
#define RTC_ISR_ALRBF						(1u << 9)
#define RTC_ISR_ALRBF_MATCH					(0x1u << 9)
#define RTC_ISR_ALRBF_CLEAR					(0x0u << 9)
	/* Wakeup timer flag */
#define RTC_ISR_WUTF						(1u << 10)
#define RTC_ISR_WUTF_ZERO					(0x1u << 10)
#define RTC_ISR_WUTF_CLEAR					(0x0u << 10)
	/* Time-stamp flag */
#define RTC_ISR_TSF						(1u << 11)
#define RTC_ISR_TSF_TIMESTAMPEVENT				(0x1u << 11)
#define RTC_ISR_TSF_CLEAR					(0x0u << 11)
	/* Time-stamp overflow flag */
#define RTC_ISR_TSOVF						(1u << 12)
#define RTC_ISR_TSOVF_OVERFLOW					(0x1u << 12)
#define RTC_ISR_TSOVF_CLEAR					(0x0u << 12)
	/* Tamper detection flag */
#define RTC_ISR_TAMP1F						(1u << 13)
#define RTC_ISR_TAMP1F_TAMPERED					(0x1u << 13)
#define RTC_ISR_TAMP1F_CLEAR					(0x0u << 13)
	/* TAMPER2 detection flag */
#define RTC_ISR_TAMP2F						(1u << 14)
	/* Recalibration pending Flag */
#define RTC_ISR_RECALPF						(1u << 16)
#define RTC_ISR_RECALPF_PENDING					(0x1u << 16)

	/* 0x10: prescaler register */
	uint32_t volatile PRER;
	/* Asynchronous prescaler */
#define RTC_PRER_PREDIV_A_Msk					(0x7Fu << 16)
#define RTC_PRER_PREDIV_A_Pos					16
	/* Synchronous prescaler */
#define RTC_PRER_PREDIV_S_Msk					(0x7FFFu << 0)
#define RTC_PRER_PREDIV_S_Pos					0

	/* 0x14: wakeup timer register */
	uint32_t volatile WUTR;
	/* Wakeup auto-reload value */
#define RTC_WUTR_WUT_Msk					(0xFFFFu << 0)
#define RTC_WUTR_WUT_Pos					0

	/* 0x18: calibration register */
	uint32_t volatile CALIBR;
	/* Digital calibration sign */
#define RTC_CALIBR_DCS						(1u << 7)
	/* Digital calibration */
#define RTC_CALIBR_DC_Msk					(0x1Fu << 0)
#define RTC_CALIBR_DC_Pos					0

	/* 0x1C: alarm A register */
	uint32_t volatile ALRMAR;
	/* Alarm A date mask */
#define RTC_ALRMAR_MSK4						(1u << 31)
	/* Week day selection */
#define RTC_ALRMAR_WDSEL					(1u << 30)
#define RTC_ALRMAR_WDSEL_DATEUNITS				(0x0u << 30)
#define RTC_ALRMAR_WDSEL_WEEKDAY				(0x1u << 30)
	/* Date tens in BCD format */
#define RTC_ALRMAR_DT_Msk					(0x3u << 28)
#define RTC_ALRMAR_DT_Pos					28
	/* Date units or day in BCD */
#define RTC_ALRMAR_DU_Msk					(0xFu << 24)
#define RTC_ALRMAR_DU_Pos					24
	/* Alarm A hours mask */
#define RTC_ALRMAR_MSK3						(1u << 23)
	/* AM/PM notation */
#define RTC_ALRMAR_PM						(1u << 22)
#define RTC_ALRMAR_PM_AM					(0x0u << 22)
#define RTC_ALRMAR_PM_PM					(0x1u << 22)
	/* Hour tens in BCD format */
#define RTC_ALRMAR_HT_Msk					(0x3u << 20)
#define RTC_ALRMAR_HT_Pos					20
	/* Hour units in BCD format */
#define RTC_ALRMAR_HU_Msk					(0xFu << 16)
#define RTC_ALRMAR_HU_Pos					16
	/* Alarm A minutes mask */
#define RTC_ALRMAR_MSK2						(1u << 15)
	/* Minute tens in BCD format */
#define RTC_ALRMAR_MNT_Msk					(0x7u << 12)
#define RTC_ALRMAR_MNT_Pos					12
	/* Minute units in BCD format */
#define RTC_ALRMAR_MNU_Msk					(0xFu << 8)
#define RTC_ALRMAR_MNU_Pos					8
	/* Alarm A seconds mask */
#define RTC_ALRMAR_MSK1						(1u << 7)
#define RTC_ALRMAR_MSK1_MASK					(0x0u << 7)
#define RTC_ALRMAR_MSK1_NOTMASK					(0x1u << 7)
	/* Second tens in BCD format */
#define RTC_ALRMAR_ST_Msk					(0x7u << 4)
#define RTC_ALRMAR_ST_Pos					4
	/* Second units in BCD format */
#define RTC_ALRMAR_SU_Msk					(0xFu << 0)
#define RTC_ALRMAR_SU_Pos					0

	/* 0x20: alarm B register */
	uint32_t volatile ALRMBR;
	/* Alarm B date mask */
#define RTC_ALRMBR_MSK4						(1u << 31)
	/* Week day selection */
#define RTC_ALRMBR_WDSEL					(1u << 30)
#define RTC_ALRMBR_WDSEL_DATEUNITS				(0x0u << 30)
#define RTC_ALRMBR_WDSEL_WEEKDAY				(0x1u << 30)
	/* Date tens in BCD format */
#define RTC_ALRMBR_DT_Msk					(0x3u << 28)
#define RTC_ALRMBR_DT_Pos					28
	/* Date units or day in BCD */
#define RTC_ALRMBR_DU_Msk					(0xFu << 24)
#define RTC_ALRMBR_DU_Pos					24
	/* Alarm B hours mask */
#define RTC_ALRMBR_MSK3						(1u << 23)
	/* AM/PM notation */
#define RTC_ALRMBR_PM						(1u << 22)
#define RTC_ALRMBR_PM_AM					(0x0u << 22)
#define RTC_ALRMBR_PM_PM					(0x1u << 22)
	/* Hour tens in BCD format */
#define RTC_ALRMBR_HT_Msk					(0x3u << 20)
#define RTC_ALRMBR_HT_Pos					20
	/* Hour units in BCD format */
#define RTC_ALRMBR_HU_Msk					(0xFu << 16)
#define RTC_ALRMBR_HU_Pos					16
	/* Alarm B minutes mask */
#define RTC_ALRMBR_MSK2						(1u << 15)
	/* Minute tens in BCD format */
#define RTC_ALRMBR_MNT_Msk					(0x7u << 12)
#define RTC_ALRMBR_MNT_Pos					12
	/* Minute units in BCD format */
#define RTC_ALRMBR_MNU_Msk					(0xFu << 8)
#define RTC_ALRMBR_MNU_Pos					8
	/* Alarm B seconds mask */
#define RTC_ALRMBR_MSK1						(1u << 7)
#define RTC_ALRMBR_MSK1_MASK					(0x0u << 7)
#define RTC_ALRMBR_MSK1_NOTMASK					(0x1u << 7)
	/* Second tens in BCD format */
#define RTC_ALRMBR_ST_Msk					(0x7u << 4)
#define RTC_ALRMBR_ST_Pos					4
	/* Second units in BCD format */
#define RTC_ALRMBR_SU_Msk					(0xFu << 0)
#define RTC_ALRMBR_SU_Pos					0

	/* 0x24: write protection register */
	uint32_t volatile WPR;
	/* Write protection key */
#define RTC_WPR_KEY_Msk						(0xFFu << 0)
#define RTC_WPR_KEY_Pos						0

	/* 0x28: sub second register */
	uint32_t volatile const SSR;
	/* Sub second value */
#define RTC_SSR_SS_Msk						(0xFFFFu << 0)
#define RTC_SSR_SS_Pos						0

	/* 0x2C: shift control register */
	uint32_t volatile SHIFTR;
	/* Add one second */
#define RTC_SHIFTR_ADD1S					(1u << 31)
#define RTC_SHIFTR_ADD1S_ADD1					(0x1u << 31)
	/* Subtract a fraction of a */
#define RTC_SHIFTR_SUBFS_Msk					(0x7FFFu << 0)
#define RTC_SHIFTR_SUBFS_Pos					0

	/* 0x30: time stamp time register */
	uint32_t volatile const TSTR;
	/* AM/PM notation */
#define RTC_TSTR_PM						(1u << 22)
	/* Hour tens in BCD format */
#define RTC_TSTR_HT_Msk						(0x3u << 20)
#define RTC_TSTR_HT_Pos						20
	/* Hour units in BCD format */
#define RTC_TSTR_HU_Msk						(0xFu << 16)
#define RTC_TSTR_HU_Pos						16
	/* Minute tens in BCD format */
#define RTC_TSTR_MNT_Msk					(0x7u << 12)
#define RTC_TSTR_MNT_Pos					12
	/* Minute units in BCD format */
#define RTC_TSTR_MNU_Msk					(0xFu << 8)
#define RTC_TSTR_MNU_Pos					8
	/* Second tens in BCD format */
#define RTC_TSTR_ST_Msk						(0x7u << 4)
#define RTC_TSTR_ST_Pos						4
	/* Second units in BCD format */
#define RTC_TSTR_SU_Msk						(0xFu << 0)
#define RTC_TSTR_SU_Pos						0

	/* 0x34: time stamp date register */
	uint32_t volatile const TSDR;
	/* Week day units */
#define RTC_TSDR_WDU_Msk					(0x7u << 13)
#define RTC_TSDR_WDU_Pos					13
	/* Month tens in BCD format */
#define RTC_TSDR_MT						(1u << 12)
	/* Month units in BCD format */
#define RTC_TSDR_MU_Msk						(0xFu << 8)
#define RTC_TSDR_MU_Pos						8
	/* Date tens in BCD format */
#define RTC_TSDR_DT_Msk						(0x3u << 4)
#define RTC_TSDR_DT_Pos						4
	/* Date units in BCD format */
#define RTC_TSDR_DU_Msk						(0xFu << 0)
#define RTC_TSDR_DU_Pos						0

	/* 0x38: timestamp sub second register */
	uint32_t volatile const TSSSR;
	/* Sub second value */
#define RTC_TSSSR_SS_Msk					(0xFFFFu << 0)
#define RTC_TSSSR_SS_Pos					0

	/* 0x3C: calibration register */
	uint32_t volatile CALR;
	/* Increase frequency of RTC by 488.5 */
#define RTC_CALR_CALP						(1u << 15)
#define RTC_CALR_CALP_NOCHANGE					(0x0u << 15)
#define RTC_CALR_CALP_INCREASEFREQ				(0x1u << 15)
	/* Use an 8-second calibration cycle */
#define RTC_CALR_CALW8						(1u << 14)
#define RTC_CALR_CALW8_EIGHT_SECOND				(0x1u << 14)
	/* Use a 16-second calibration cycle */
#define RTC_CALR_CALW16						(1u << 13)
#define RTC_CALR_CALW16_SIXTEEN_SECOND				(0x1u << 13)
	/* Calibration minus */
#define RTC_CALR_CALM_Msk					(0x1FFu << 0)
#define RTC_CALR_CALM_Pos					0

	/* 0x40: tamper and alternate function configuration */
	uint32_t volatile TAFCR;
	/* AFO_ALARM output type */
#define RTC_TAFCR_ALARMOUTTYPE					(1u << 18)
	/* TIMESTAMP mapping */
#define RTC_TAFCR_TSINSEL					(1u << 17)
	/* TAMPER1 mapping */
#define RTC_TAFCR_TAMP1INSEL					(1u << 16)
	/* TAMPER pull-up disable */
#define RTC_TAFCR_TAMPPUDIS					(1u << 15)
	/* Tamper precharge duration */
#define RTC_TAFCR_TAMPPRCH_Msk					(0x3u << 13)
#define RTC_TAFCR_TAMPPRCH_Pos					13
	/* Tamper filter count */
#define RTC_TAFCR_TAMPFLT_Msk					(0x3u << 11)
#define RTC_TAFCR_TAMPFLT_Pos					11
	/* Tamper sampling frequency */
#define RTC_TAFCR_TAMPFREQ_Msk					(0x7u << 8)
#define RTC_TAFCR_TAMPFREQ_Pos					8
	/* Activate timestamp on tamper detection */
#define RTC_TAFCR_TAMPTS					(1u << 7)
	/* Active level for tamper 2 */
#define RTC_TAFCR_TAMP2TRG					(1u << 4)
	/* Tamper 2 detection enable */
#define RTC_TAFCR_TAMP2E					(1u << 3)
	/* Tamper interrupt enable */
#define RTC_TAFCR_TAMPIE					(1u << 2)
	/* Active level for tamper 1 */
#define RTC_TAFCR_TAMP1TRG					(1u << 1)
	/* Tamper 1 detection enable */
#define RTC_TAFCR_TAMP1E					(1u << 0)

	/* 0x44: alarm A sub second register */
	uint32_t volatile ALRMASSR;
	/* Mask the most-significant bits starting */
#define RTC_ALRMASSR_MASKSS_Msk					(0xFu << 24)
#define RTC_ALRMASSR_MASKSS_Pos					24
	/* Sub seconds value */
#define RTC_ALRMASSR_SS_Msk					(0x7FFFu << 0)
#define RTC_ALRMASSR_SS_Pos					0

	/* 0x48: alarm B sub second register */
	uint32_t volatile ALRMBSSR;
	/* Mask the most-significant bits starting */
#define RTC_ALRMBSSR_MASKSS_Msk					(0xFu << 24)
#define RTC_ALRMBSSR_MASKSS_Pos					24
	/* Sub seconds value */
#define RTC_ALRMBSSR_SS_Msk					(0x7FFFu << 0)
#define RTC_ALRMBSSR_SS_Pos					0

	/* 0x4C */
	uint8_t RESERVED0[0x50u-0x4Cu];

	/* 0x50: backup register */
	uint32_t volatile BKPR[20];
	/* BKP */
#define RTC_BKPR_BKP_Msk					(0xFFFFFFFFu << 0)
#define RTC_BKPR_BKP_Pos					0

};


#define SDIO ((struct sdk_sdio *)0x40012C00)

struct sdk_sdio {

	/* 0x00: power control register */
	uint32_t volatile POWER;
	/* PWRCTRL */
#define SDIO_POWER_PWRCTRL_Msk					(0x3u << 0)
#define SDIO_POWER_PWRCTRL_Pos					0
#define SDIO_POWER_PWRCTRL_POWEROFF				(0x0u << 0)
#define SDIO_POWER_PWRCTRL_POWERON				(0x3u << 0)

	/* 0x04: SDI clock control register */
	uint32_t volatile CLKCR;
	/* HW Flow Control enable */
#define SDIO_CLKCR_HWFC_EN					(1u << 14)
#define SDIO_CLKCR_HWFC_EN_DISABLED				(0x0u << 14)
#define SDIO_CLKCR_HWFC_EN_ENABLED				(0x1u << 14)
	/* SDIO_CK dephasing selection */
#define SDIO_CLKCR_NEGEDGE					(1u << 13)
#define SDIO_CLKCR_NEGEDGE_RISING				(0x0u << 13)
#define SDIO_CLKCR_NEGEDGE_FALLING				(0x1u << 13)
	/* Wide bus mode enable bit */
#define SDIO_CLKCR_WIDBUS_Msk					(0x3u << 11)
#define SDIO_CLKCR_WIDBUS_Pos					11
#define SDIO_CLKCR_WIDBUS_BUSWIDTH1				(0x0u << 11)
#define SDIO_CLKCR_WIDBUS_BUSWIDTH4				(0x1u << 11)
#define SDIO_CLKCR_WIDBUS_BUSWIDTH8				(0x2u << 11)
	/* Clock divider bypass enable */
#define SDIO_CLKCR_BYPASS					(1u << 10)
#define SDIO_CLKCR_BYPASS_DISABLED				(0x0u << 10)
#define SDIO_CLKCR_BYPASS_ENABLED				(0x1u << 10)
	/* Power saving configuration */
#define SDIO_CLKCR_PWRSAV					(1u << 9)
#define SDIO_CLKCR_PWRSAV_DISABLED				(0x1u << 9)
#define SDIO_CLKCR_PWRSAV_ENABLED				(0x0u << 9)
	/* Clock enable bit */
#define SDIO_CLKCR_CLKEN					(1u << 8)
#define SDIO_CLKCR_CLKEN_DISABLED				(0x0u << 8)
#define SDIO_CLKCR_CLKEN_ENABLED				(0x1u << 8)
	/* Clock divide factor */
#define SDIO_CLKCR_CLKDIV_Msk					(0xFFu << 0)
#define SDIO_CLKCR_CLKDIV_Pos					0

	/* 0x08: argument register */
	uint32_t volatile ARG;
	/* Command argument */
#define SDIO_ARG_CMDARG_Msk					(0xFFFFFFFFu << 0)
#define SDIO_ARG_CMDARG_Pos					0

	/* 0x0C: command register */
	uint32_t volatile CMD;
	/* CE-ATA command */
#define SDIO_CMD_CE_ATACMD					(1u << 14)
#define SDIO_CMD_CE_ATACMD_DISABLED				(0x0u << 14)
#define SDIO_CMD_CE_ATACMD_ENABLED				(0x1u << 14)
	/* not Interrupt Enable */
#define SDIO_CMD_NIEN						(1u << 13)
#define SDIO_CMD_NIEN_DISABLED					(0x0u << 13)
#define SDIO_CMD_NIEN_ENABLED					(0x1u << 13)
	/* Enable CMD completion */
#define SDIO_CMD_ENCMDCOMPL					(1u << 12)
#define SDIO_CMD_ENCMDCOMPL_DISABLED				(0x0u << 12)
#define SDIO_CMD_ENCMDCOMPL_ENABLED				(0x1u << 12)
	/* SD I/O suspend command */
#define SDIO_CMD_SDIOSUSPEND					(1u << 11)
#define SDIO_CMD_SDIOSUSPEND_DISABLED				(0x0u << 11)
#define SDIO_CMD_SDIOSUSPEND_ENABLED				(0x1u << 11)
	/* Command path state machine (CPSM) Enable */
#define SDIO_CMD_CPSMEN						(1u << 10)
#define SDIO_CMD_CPSMEN_DISABLED				(0x0u << 10)
#define SDIO_CMD_CPSMEN_ENABLED					(0x1u << 10)
	/* CPSM Waits for ends of data transfer */
#define SDIO_CMD_WAITPEND					(1u << 9)
#define SDIO_CMD_WAITPEND_DISABLED				(0x0u << 9)
#define SDIO_CMD_WAITPEND_ENABLED				(0x1u << 9)
	/* CPSM waits for interrupt */
#define SDIO_CMD_WAITINT					(1u << 8)
#define SDIO_CMD_WAITINT_DISABLED				(0x0u << 8)
#define SDIO_CMD_WAITINT_ENABLED				(0x1u << 8)
	/* Wait for response bits */
#define SDIO_CMD_WAITRESP_Msk					(0x3u << 6)
#define SDIO_CMD_WAITRESP_Pos					6
#define SDIO_CMD_WAITRESP_NORESPONSE				(0x0u << 6)
#define SDIO_CMD_WAITRESP_SHORTRESPONSE				(0x1u << 6)
#define SDIO_CMD_WAITRESP_NORESPONSE2				(0x2u << 6)
#define SDIO_CMD_WAITRESP_LONGRESPONSE				(0x3u << 6)
	/* Command index */
#define SDIO_CMD_CMDINDEX_Msk					(0x3Fu << 0)
#define SDIO_CMD_CMDINDEX_Pos					0

	/* 0x10: command response register */
	uint32_t volatile const RESPCMD;
	/* Response command index */
#define SDIO_RESPCMD_RESPCMD_Msk				(0x3Fu << 0)
#define SDIO_RESPCMD_RESPCMD_Pos				0

	/* 0x14: response 1..4 register */
	uint32_t volatile const RESP1;
	/* Card Status */
#define SDIO_RESP1_CARDSTATUS1_Msk				(0xFFFFFFFFu << 0)
#define SDIO_RESP1_CARDSTATUS1_Pos				0

	/* 0x18: response 1..4 register */
	uint32_t volatile const RESP2;
	/* Card Status */
#define SDIO_RESP2_CARDSTATUS2_Msk				(0xFFFFFFFFu << 0)
#define SDIO_RESP2_CARDSTATUS2_Pos				0

	/* 0x1C: response 1..4 register */
	uint32_t volatile const RESP3;
	/* Card Status */
#define SDIO_RESP3_CARDSTATUS3_Msk				(0xFFFFFFFFu << 0)
#define SDIO_RESP3_CARDSTATUS3_Pos				0

	/* 0x20: response 1..4 register */
	uint32_t volatile const RESP4;
	/* Card Status */
#define SDIO_RESP4_CARDSTATUS4_Msk				(0xFFFFFFFFu << 0)
#define SDIO_RESP4_CARDSTATUS4_Pos				0

	/* 0x24: data timer register */
	uint32_t volatile DTIMER;
	/* Data timeout period */
#define SDIO_DTIMER_DATATIME_Msk				(0xFFFFFFFFu << 0)
#define SDIO_DTIMER_DATATIME_Pos				0

	/* 0x28: data length register */
	uint32_t volatile DLEN;
	/* Data length value */
#define SDIO_DLEN_DATALENGTH_Msk				(0x1FFFFFFu << 0)
#define SDIO_DLEN_DATALENGTH_Pos				0

	/* 0x2C: data control register */
	uint32_t volatile DCTRL;
	/* SD I/O enable functions */
#define SDIO_DCTRL_SDIOEN					(1u << 11)
#define SDIO_DCTRL_SDIOEN_DISABLED				(0x0u << 11)
#define SDIO_DCTRL_SDIOEN_ENABLED				(0x1u << 11)
	/* Read wait mode */
#define SDIO_DCTRL_RWMOD					(1u << 10)
#define SDIO_DCTRL_RWMOD_D2					(0x0u << 10)
#define SDIO_DCTRL_RWMOD_CK					(0x1u << 10)
	/* Read wait stop */
#define SDIO_DCTRL_RWSTOP					(1u << 9)
#define SDIO_DCTRL_RWSTOP_DISABLED				(0x0u << 9)
#define SDIO_DCTRL_RWSTOP_ENABLED				(0x1u << 9)
	/* Read wait start */
#define SDIO_DCTRL_RWSTART					(1u << 8)
#define SDIO_DCTRL_RWSTART_DISABLED				(0x0u << 8)
#define SDIO_DCTRL_RWSTART_ENABLED				(0x1u << 8)
	/* Data block size */
#define SDIO_DCTRL_DBLOCKSIZE_Msk				(0xFu << 4)
#define SDIO_DCTRL_DBLOCKSIZE_Pos				4
	/* DMA enable bit */
#define SDIO_DCTRL_DMAEN					(1u << 3)
#define SDIO_DCTRL_DMAEN_DISABLED				(0x0u << 3)
#define SDIO_DCTRL_DMAEN_ENABLED				(0x1u << 3)
	/* Data transfer mode selection 1: Stream */
#define SDIO_DCTRL_DTMODE					(1u << 2)
#define SDIO_DCTRL_DTMODE_BLOCKMODE				(0x0u << 2)
#define SDIO_DCTRL_DTMODE_STREAMMODE				(0x1u << 2)
	/* Data transfer direction */
#define SDIO_DCTRL_DTDIR					(1u << 1)
#define SDIO_DCTRL_DTDIR_CONTROLLERTOCARD			(0x0u << 1)
#define SDIO_DCTRL_DTDIR_CARDTOCONTROLLER			(0x1u << 1)
	/* DTEN */
#define SDIO_DCTRL_DTEN						(1u << 0)
#define SDIO_DCTRL_DTEN_DISABLED				(0x0u << 0)
#define SDIO_DCTRL_DTEN_ENABLED					(0x1u << 0)

	/* 0x30: data counter register */
	uint32_t volatile const DCOUNT;
	/* Data count value */
#define SDIO_DCOUNT_DATACOUNT_Msk				(0x1FFFFFFu << 0)
#define SDIO_DCOUNT_DATACOUNT_Pos				0

	/* 0x34: status register */
	uint32_t volatile const STA;
	/* CE-ATA command completion signal */
#define SDIO_STA_CEATAEND					(1u << 23)
#define SDIO_STA_CEATAEND_NOTRECEIVED				(0x0u << 23)
#define SDIO_STA_CEATAEND_RECEIVED				(0x1u << 23)
	/* SDIO interrupt received */
#define SDIO_STA_SDIOIT						(1u << 22)
#define SDIO_STA_SDIOIT_NOTRECEIVED				(0x0u << 22)
#define SDIO_STA_SDIOIT_RECEIVED				(0x1u << 22)
	/* Data available in receive */
#define SDIO_STA_RXDAVL						(1u << 21)
#define SDIO_STA_RXDAVL_NOTAVAILABLE				(0x0u << 21)
#define SDIO_STA_RXDAVL_AVAILABLE				(0x1u << 21)
	/* Data available in transmit */
#define SDIO_STA_TXDAVL						(1u << 20)
#define SDIO_STA_TXDAVL_NOTAVAILABLE				(0x0u << 20)
#define SDIO_STA_TXDAVL_AVAILABLE				(0x1u << 20)
	/* Receive FIFO empty */
#define SDIO_STA_RXFIFOE					(1u << 19)
#define SDIO_STA_RXFIFOE_NOTEMPTY				(0x0u << 19)
#define SDIO_STA_RXFIFOE_EMPTY					(0x1u << 19)
	/* Transmit FIFO empty */
#define SDIO_STA_TXFIFOE					(1u << 18)
#define SDIO_STA_TXFIFOE_NOTEMPTY				(0x0u << 18)
#define SDIO_STA_TXFIFOE_EMPTY					(0x1u << 18)
	/* Receive FIFO full */
#define SDIO_STA_RXFIFOF					(1u << 17)
#define SDIO_STA_RXFIFOF_NOTFULL				(0x0u << 17)
#define SDIO_STA_RXFIFOF_FULL					(0x1u << 17)
	/* Transmit FIFO full */
#define SDIO_STA_TXFIFOF					(1u << 16)
#define SDIO_STA_TXFIFOF_NOTFULL				(0x0u << 16)
#define SDIO_STA_TXFIFOF_FULL					(0x1u << 16)
	/* Receive FIFO half full: there are at */
#define SDIO_STA_RXFIFOHF					(1u << 15)
#define SDIO_STA_RXFIFOHF_NOTHALFFULL				(0x0u << 15)
#define SDIO_STA_RXFIFOHF_HALFFULL				(0x1u << 15)
	/* Transmit FIFO half empty: at least 8 */
#define SDIO_STA_TXFIFOHE					(1u << 14)
#define SDIO_STA_TXFIFOHE_NOTHALFEMPTY				(0x0u << 14)
#define SDIO_STA_TXFIFOHE_HALFEMPTY				(0x1u << 14)
	/* Data receive in progress */
#define SDIO_STA_RXACT						(1u << 13)
#define SDIO_STA_RXACT_NOTINPROGRESS				(0x0u << 13)
#define SDIO_STA_RXACT_INPROGRESS				(0x1u << 13)
	/* Data transmit in progress */
#define SDIO_STA_TXACT						(1u << 12)
#define SDIO_STA_TXACT_NOTINPROGRESS				(0x0u << 12)
#define SDIO_STA_TXACT_INPROGRESS				(0x1u << 12)
	/* Command transfer in */
#define SDIO_STA_CMDACT						(1u << 11)
#define SDIO_STA_CMDACT_NOTINPROGRESS				(0x0u << 11)
#define SDIO_STA_CMDACT_INPROGRESS				(0x1u << 11)
	/* Data block sent/received (CRC check */
#define SDIO_STA_DBCKEND					(1u << 10)
#define SDIO_STA_DBCKEND_NOTTRANSFERRED				(0x0u << 10)
#define SDIO_STA_DBCKEND_TRANSFERRED				(0x1u << 10)
	/* Start bit not detected on all data */
#define SDIO_STA_STBITERR					(1u << 9)
#define SDIO_STA_STBITERR_DETECTED				(0x0u << 9)
#define SDIO_STA_STBITERR_NOTDETECTED				(0x1u << 9)
	/* Data end (data counter, SDIDCOUNT, is */
#define SDIO_STA_DATAEND					(1u << 8)
#define SDIO_STA_DATAEND_DONE					(0x1u << 8)
#define SDIO_STA_DATAEND_NOTDONE				(0x0u << 8)
	/* Command sent (no response */
#define SDIO_STA_CMDSENT					(1u << 7)
#define SDIO_STA_CMDSENT_NOTSENT				(0x0u << 7)
#define SDIO_STA_CMDSENT_SENT					(0x1u << 7)
	/* Command response received (CRC check */
#define SDIO_STA_CMDREND					(1u << 6)
#define SDIO_STA_CMDREND_NOTDONE				(0x0u << 6)
#define SDIO_STA_CMDREND_DONE					(0x1u << 6)
	/* Received FIFO overrun */
#define SDIO_STA_RXOVERR					(1u << 5)
#define SDIO_STA_RXOVERR_NOOVERRUN				(0x0u << 5)
#define SDIO_STA_RXOVERR_OVERRUN				(0x1u << 5)
	/* Transmit FIFO underrun */
#define SDIO_STA_TXUNDERR					(1u << 4)
#define SDIO_STA_TXUNDERR_NOUNDERRUN				(0x0u << 4)
#define SDIO_STA_TXUNDERR_UNDERRUN				(0x1u << 4)
	/* Data timeout */
#define SDIO_STA_DTIMEOUT					(1u << 3)
#define SDIO_STA_DTIMEOUT_NOTIMEOUT				(0x0u << 3)
#define SDIO_STA_DTIMEOUT_TIMEOUT				(0x1u << 3)
	/* Command response timeout */
#define SDIO_STA_CTIMEOUT					(1u << 2)
#define SDIO_STA_CTIMEOUT_NOTIMEOUT				(0x0u << 2)
#define SDIO_STA_CTIMEOUT_TIMEOUT				(0x1u << 2)
	/* Data block sent/received (CRC check */
#define SDIO_STA_DCRCFAIL					(1u << 1)
#define SDIO_STA_DCRCFAIL_NOTFAILED				(0x0u << 1)
#define SDIO_STA_DCRCFAIL_FAILED				(0x1u << 1)
	/* Command response received (CRC check */
#define SDIO_STA_CCRCFAIL					(1u << 0)
#define SDIO_STA_CCRCFAIL_NOTFAILED				(0x0u << 0)
#define SDIO_STA_CCRCFAIL_FAILED				(0x1u << 0)

	/* 0x38: interrupt clear register */
	uint32_t volatile ICR;
	/* CEATAEND flag clear bit */
#define SDIO_ICR_CEATAENDC					(1u << 23)
	/* SDIOIT flag clear bit */
#define SDIO_ICR_SDIOITC					(1u << 22)
	/* DBCKEND flag clear bit */
#define SDIO_ICR_DBCKENDC					(1u << 10)
	/* STBITERR flag clear bit */
#define SDIO_ICR_STBITERRC					(1u << 9)
	/* DATAEND flag clear bit */
#define SDIO_ICR_DATAENDC					(1u << 8)
	/* CMDSENT flag clear bit */
#define SDIO_ICR_CMDSENTC					(1u << 7)
	/* CMDREND flag clear bit */
#define SDIO_ICR_CMDRENDC					(1u << 6)
	/* RXOVERR flag clear bit */
#define SDIO_ICR_RXOVERRC					(1u << 5)
	/* TXUNDERR flag clear bit */
#define SDIO_ICR_TXUNDERRC					(1u << 4)
	/* DTIMEOUT flag clear bit */
#define SDIO_ICR_DTIMEOUTC					(1u << 3)
	/* CTIMEOUT flag clear bit */
#define SDIO_ICR_CTIMEOUTC					(1u << 2)
	/* DCRCFAIL flag clear bit */
#define SDIO_ICR_DCRCFAILC					(1u << 1)
	/* CCRCFAIL flag clear bit */
#define SDIO_ICR_CCRCFAILC					(1u << 0)
#define SDIO_ICR_CCRCFAILC_CLEAR				(0x1u << 0)

	/* 0x3C: mask register */
	uint32_t volatile MASK;
	/* CE-ATA command completion signal */
#define SDIO_MASK_CEATAENDIE					(1u << 23)
	/* SDIO mode interrupt received interrupt */
#define SDIO_MASK_SDIOITIE					(1u << 22)
	/* Data available in Rx FIFO interrupt */
#define SDIO_MASK_RXDAVLIE					(1u << 21)
	/* Data available in Tx FIFO interrupt */
#define SDIO_MASK_TXDAVLIE					(1u << 20)
	/* Rx FIFO empty interrupt */
#define SDIO_MASK_RXFIFOEIE					(1u << 19)
	/* Tx FIFO empty interrupt */
#define SDIO_MASK_TXFIFOEIE					(1u << 18)
	/* Rx FIFO full interrupt */
#define SDIO_MASK_RXFIFOFIE					(1u << 17)
	/* Tx FIFO full interrupt */
#define SDIO_MASK_TXFIFOFIE					(1u << 16)
	/* Rx FIFO half full interrupt */
#define SDIO_MASK_RXFIFOHFIE					(1u << 15)
	/* Tx FIFO half empty interrupt */
#define SDIO_MASK_TXFIFOHEIE					(1u << 14)
	/* Data receive acting interrupt */
#define SDIO_MASK_RXACTIE					(1u << 13)
	/* Data transmit acting interrupt */
#define SDIO_MASK_TXACTIE					(1u << 12)
	/* Command acting interrupt */
#define SDIO_MASK_CMDACTIE					(1u << 11)
	/* Data block end interrupt */
#define SDIO_MASK_DBCKENDIE					(1u << 10)
	/* Start bit error interrupt */
#define SDIO_MASK_STBITERRIE					(1u << 9)
	/* Data end interrupt enable */
#define SDIO_MASK_DATAENDIE					(1u << 8)
	/* Command sent interrupt */
#define SDIO_MASK_CMDSENTIE					(1u << 7)
	/* Command response received interrupt */
#define SDIO_MASK_CMDRENDIE					(1u << 6)
	/* Rx FIFO overrun error interrupt */
#define SDIO_MASK_RXOVERRIE					(1u << 5)
	/* Tx FIFO underrun error interrupt */
#define SDIO_MASK_TXUNDERRIE					(1u << 4)
	/* Data timeout interrupt */
#define SDIO_MASK_DTIMEOUTIE					(1u << 3)
	/* Command timeout interrupt */
#define SDIO_MASK_CTIMEOUTIE					(1u << 2)
	/* Data CRC fail interrupt */
#define SDIO_MASK_DCRCFAILIE					(1u << 1)
	/* Command CRC fail interrupt */
#define SDIO_MASK_CCRCFAILIE					(1u << 0)
#define SDIO_MASK_CCRCFAILIE_DISABLED				(0x0u << 0)
#define SDIO_MASK_CCRCFAILIE_ENABLED				(0x1u << 0)

	/* 0x40 */
	uint8_t RESERVED0[0x48u-0x40u];

	/* 0x48: FIFO counter register */
	uint32_t volatile const FIFOCNT;
	/* Remaining number of words to be written */
#define SDIO_FIFOCNT_FIFOCOUNT_Msk				(0xFFFFFFu << 0)
#define SDIO_FIFOCNT_FIFOCOUNT_Pos				0

	/* 0x4C */
	uint8_t RESERVED1[0x80u-0x4Cu];

	/* 0x80: data FIFO register */
	uint32_t volatile FIFO;
	/* Receive and transmit FIFO */
#define SDIO_FIFO_FIFODATA_Msk					(0xFFFFFFFFu << 0)
#define SDIO_FIFO_FIFODATA_Pos					0

};


#define SYSCFG ((struct sdk_syscfg *)0x40013800)

struct sdk_syscfg {

	/* 0x00: memory remap register */
	uint32_t volatile MEMRM;
	/* MEM_MODE */
#define SYSCFG_MEMRM_MEM_MODE_Msk				(0x3u << 0)
#define SYSCFG_MEMRM_MEM_MODE_Pos				0

	/* 0x04: peripheral mode configuration */
	uint32_t volatile PMC;
	/* ADC1DC2 */
#define SYSCFG_PMC_ADC1DC2					(1u << 16)

	/* 0x08: external interrupt configuration register */
	uint32_t volatile EXTICR1;
	/* EXTI x configuration (x = 0 to */
#define SYSCFG_EXTICR1_EXTI3_Msk				(0xFu << 12)
#define SYSCFG_EXTICR1_EXTI3_Pos				12
	/* EXTI x configuration (x = 0 to */
#define SYSCFG_EXTICR1_EXTI2_Msk				(0xFu << 8)
#define SYSCFG_EXTICR1_EXTI2_Pos				8
	/* EXTI x configuration (x = 0 to */
#define SYSCFG_EXTICR1_EXTI1_Msk				(0xFu << 4)
#define SYSCFG_EXTICR1_EXTI1_Pos				4
	/* EXTI x configuration (x = 0 to */
#define SYSCFG_EXTICR1_EXTI0_Msk				(0xFu << 0)
#define SYSCFG_EXTICR1_EXTI0_Pos				0

	/* 0x0C: external interrupt configuration register */
	uint32_t volatile EXTICR2;
	/* EXTI x configuration (x = 4 to */
#define SYSCFG_EXTICR2_EXTI7_Msk				(0xFu << 12)
#define SYSCFG_EXTICR2_EXTI7_Pos				12
	/* EXTI x configuration (x = 4 to */
#define SYSCFG_EXTICR2_EXTI6_Msk				(0xFu << 8)
#define SYSCFG_EXTICR2_EXTI6_Pos				8
	/* EXTI x configuration (x = 4 to */
#define SYSCFG_EXTICR2_EXTI5_Msk				(0xFu << 4)
#define SYSCFG_EXTICR2_EXTI5_Pos				4
	/* EXTI x configuration (x = 4 to */
#define SYSCFG_EXTICR2_EXTI4_Msk				(0xFu << 0)
#define SYSCFG_EXTICR2_EXTI4_Pos				0

	/* 0x10: external interrupt configuration register */
	uint32_t volatile EXTICR3;
	/* EXTI x configuration (x = 8 to */
#define SYSCFG_EXTICR3_EXTI11_Msk				(0xFu << 12)
#define SYSCFG_EXTICR3_EXTI11_Pos				12
	/* EXTI10 */
#define SYSCFG_EXTICR3_EXTI10_Msk				(0xFu << 8)
#define SYSCFG_EXTICR3_EXTI10_Pos				8
	/* EXTI x configuration (x = 8 to */
#define SYSCFG_EXTICR3_EXTI9_Msk				(0xFu << 4)
#define SYSCFG_EXTICR3_EXTI9_Pos				4
	/* EXTI x configuration (x = 8 to */
#define SYSCFG_EXTICR3_EXTI8_Msk				(0xFu << 0)
#define SYSCFG_EXTICR3_EXTI8_Pos				0

	/* 0x14: external interrupt configuration register */
	uint32_t volatile EXTICR4;
	/* EXTI x configuration (x = 12 to */
#define SYSCFG_EXTICR4_EXTI15_Msk				(0xFu << 12)
#define SYSCFG_EXTICR4_EXTI15_Pos				12
	/* EXTI x configuration (x = 12 to */
#define SYSCFG_EXTICR4_EXTI14_Msk				(0xFu << 8)
#define SYSCFG_EXTICR4_EXTI14_Pos				8
	/* EXTI x configuration (x = 12 to */
#define SYSCFG_EXTICR4_EXTI13_Msk				(0xFu << 4)
#define SYSCFG_EXTICR4_EXTI13_Pos				4
	/* EXTI x configuration (x = 12 to */
#define SYSCFG_EXTICR4_EXTI12_Msk				(0xFu << 0)
#define SYSCFG_EXTICR4_EXTI12_Pos				0

	/* 0x18 */
	uint8_t RESERVED0[0x20u-0x18u];

	/* 0x20: Compensation cell control */
	uint32_t volatile const CMPCR;
	/* READY */
#define SYSCFG_CMPCR_READY					(1u << 8)
	/* Compensation cell */
#define SYSCFG_CMPCR_CMP_PD					(1u << 0)

};


#define TIM1 ((struct sdk_tim1or8 *)0x40010000)
#define TIM8 ((struct sdk_tim1or8 *)0x40010400)

struct sdk_tim1or8 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM1_CR1_CKD_Msk					(0x3u << 8)
#define TIM1_CR1_CKD_Pos					8
#define TIM1_CR1_CKD_DIV1					(0x0u << 8)
#define TIM1_CR1_CKD_DIV2					(0x1u << 8)
#define TIM1_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM1_CR1_ARPE						(1u << 7)
#define TIM1_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM1_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Center-aligned mode */
#define TIM1_CR1_CMS_Msk					(0x3u << 5)
#define TIM1_CR1_CMS_Pos					5
#define TIM1_CR1_CMS_EDGEALIGNED				(0x0u << 5)
#define TIM1_CR1_CMS_CENTERALIGNED1				(0x1u << 5)
#define TIM1_CR1_CMS_CENTERALIGNED2				(0x2u << 5)
#define TIM1_CR1_CMS_CENTERALIGNED3				(0x3u << 5)
	/* Direction */
#define TIM1_CR1_DIR						(1u << 4)
#define TIM1_CR1_DIR_UP						(0x0u << 4)
#define TIM1_CR1_DIR_DOWN					(0x1u << 4)
	/* One-pulse mode */
#define TIM1_CR1_OPM						(1u << 3)
#define TIM1_CR1_OPM_DISABLED					(0x0u << 3)
#define TIM1_CR1_OPM_ENABLED					(0x1u << 3)
	/* Update request source */
#define TIM1_CR1_URS						(1u << 2)
#define TIM1_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM1_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM1_CR1_UDIS						(1u << 1)
#define TIM1_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM1_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM1_CR1_CEN						(1u << 0)
#define TIM1_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM1_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* Output Idle state 4 */
#define TIM1_CR2_OIS4						(1u << 14)
	/* Output Idle state 3 */
#define TIM1_CR2_OIS3N						(1u << 13)
	/* Output Idle state 3 */
#define TIM1_CR2_OIS3						(1u << 12)
	/* Output Idle state 2 */
#define TIM1_CR2_OIS2N						(1u << 11)
	/* Output Idle state 2 */
#define TIM1_CR2_OIS2						(1u << 10)
	/* Output Idle state 1 */
#define TIM1_CR2_OIS1N						(1u << 9)
	/* Output Idle state 1 */
#define TIM1_CR2_OIS1						(1u << 8)
	/* TI1 selection */
#define TIM1_CR2_TI1S						(1u << 7)
#define TIM1_CR2_TI1S_NORMAL					(0x0u << 7)
#define TIM1_CR2_TI1S_XOR					(0x1u << 7)
	/* Master mode selection */
#define TIM1_CR2_MMS_Msk					(0x7u << 4)
#define TIM1_CR2_MMS_Pos					4
#define TIM1_CR2_MMS_RESET					(0x0u << 4)
#define TIM1_CR2_MMS_ENABLE					(0x1u << 4)
#define TIM1_CR2_MMS_UPDATE					(0x2u << 4)
#define TIM1_CR2_MMS_COMPAREPULSE				(0x3u << 4)
#define TIM1_CR2_MMS_COMPAREOC1					(0x4u << 4)
#define TIM1_CR2_MMS_COMPAREOC2					(0x5u << 4)
#define TIM1_CR2_MMS_COMPAREOC3					(0x6u << 4)
#define TIM1_CR2_MMS_COMPAREOC4					(0x7u << 4)
	/* Capture/compare DMA */
#define TIM1_CR2_CCDS						(1u << 3)
#define TIM1_CR2_CCDS_ONCOMPARE					(0x0u << 3)
#define TIM1_CR2_CCDS_ONUPDATE					(0x1u << 3)
	/* Capture/compare control update */
#define TIM1_CR2_CCUS						(1u << 2)
	/* Capture/compare preloaded */
#define TIM1_CR2_CCPC						(1u << 0)

	/* 0x08: slave mode control register */
	uint32_t volatile SMCR;
	/* External trigger polarity */
#define TIM1_SMCR_ETP						(1u << 15)
#define TIM1_SMCR_ETP_NOTINVERTED				(0x0u << 15)
#define TIM1_SMCR_ETP_INVERTED					(0x1u << 15)
	/* External clock enable */
#define TIM1_SMCR_ECE						(1u << 14)
#define TIM1_SMCR_ECE_DISABLED					(0x0u << 14)
#define TIM1_SMCR_ECE_ENABLED					(0x1u << 14)
	/* External trigger prescaler */
#define TIM1_SMCR_ETPS_Msk					(0x3u << 12)
#define TIM1_SMCR_ETPS_Pos					12
#define TIM1_SMCR_ETPS_DIV1					(0x0u << 12)
#define TIM1_SMCR_ETPS_DIV2					(0x1u << 12)
#define TIM1_SMCR_ETPS_DIV4					(0x2u << 12)
#define TIM1_SMCR_ETPS_DIV8					(0x3u << 12)
	/* External trigger filter */
#define TIM1_SMCR_ETF_Msk					(0xFu << 8)
#define TIM1_SMCR_ETF_Pos					8
#define TIM1_SMCR_ETF_NOFILTER					(0x0u << 8)
#define TIM1_SMCR_ETF_FCK_INT_N2				(0x1u << 8)
#define TIM1_SMCR_ETF_FCK_INT_N4				(0x2u << 8)
#define TIM1_SMCR_ETF_FCK_INT_N8				(0x3u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV2_N6				(0x4u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV2_N8				(0x5u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV4_N6				(0x6u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV4_N8				(0x7u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV8_N6				(0x8u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV8_N8				(0x9u << 8)
#define TIM1_SMCR_ETF_FDTS_DIV16_N5				(0xAu << 8)
#define TIM1_SMCR_ETF_FDTS_DIV16_N6				(0xBu << 8)
#define TIM1_SMCR_ETF_FDTS_DIV16_N8				(0xCu << 8)
#define TIM1_SMCR_ETF_FDTS_DIV32_N5				(0xDu << 8)
#define TIM1_SMCR_ETF_FDTS_DIV32_N6				(0xEu << 8)
#define TIM1_SMCR_ETF_FDTS_DIV32_N8				(0xFu << 8)
	/* Master/Slave mode */
#define TIM1_SMCR_MSM						(1u << 7)
#define TIM1_SMCR_MSM_NOSYNC					(0x0u << 7)
#define TIM1_SMCR_MSM_SYNC					(0x1u << 7)
	/* Trigger selection */
#define TIM1_SMCR_TS_Msk					(0x7u << 4)
#define TIM1_SMCR_TS_Pos					4
#define TIM1_SMCR_TS_ITR0					(0x0u << 4)
#define TIM1_SMCR_TS_ITR1					(0x1u << 4)
#define TIM1_SMCR_TS_ITR2					(0x2u << 4)
#define TIM1_SMCR_TS_TI1F_ED					(0x4u << 4)
#define TIM1_SMCR_TS_TI1FP1					(0x5u << 4)
#define TIM1_SMCR_TS_TI2FP2					(0x6u << 4)
#define TIM1_SMCR_TS_ETRF					(0x7u << 4)
	/* Slave mode selection */
#define TIM1_SMCR_SMS_Msk					(0x7u << 0)
#define TIM1_SMCR_SMS_Pos					0
#define TIM1_SMCR_SMS_DISABLED					(0x0u << 0)
#define TIM1_SMCR_SMS_ENCODER_MODE_1				(0x1u << 0)
#define TIM1_SMCR_SMS_ENCODER_MODE_2				(0x2u << 0)
#define TIM1_SMCR_SMS_ENCODER_MODE_3				(0x3u << 0)
#define TIM1_SMCR_SMS_RESET_MODE				(0x4u << 0)
#define TIM1_SMCR_SMS_GATED_MODE				(0x5u << 0)
#define TIM1_SMCR_SMS_TRIGGER_MODE				(0x6u << 0)
#define TIM1_SMCR_SMS_EXT_CLOCK_MODE				(0x7u << 0)

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Trigger DMA request enable */
#define TIM1_DIER_TDE						(1u << 14)
#define TIM1_DIER_TDE_DISABLED					(0x0u << 14)
#define TIM1_DIER_TDE_ENABLED					(0x1u << 14)
	/* COM DMA request enable */
#define TIM1_DIER_COMDE						(1u << 13)
	/* Capture/Compare 4 DMA request */
#define TIM1_DIER_CC4DE						(1u << 12)
	/* Capture/Compare 3 DMA request */
#define TIM1_DIER_CC3DE						(1u << 11)
	/* Capture/Compare 2 DMA request */
#define TIM1_DIER_CC2DE						(1u << 10)
	/* Capture/Compare 1 DMA request */
#define TIM1_DIER_CC1DE						(1u << 9)
#define TIM1_DIER_CC1DE_DISABLED				(0x0u << 9)
#define TIM1_DIER_CC1DE_ENABLED					(0x1u << 9)
	/* Update DMA request enable */
#define TIM1_DIER_UDE						(1u << 8)
#define TIM1_DIER_UDE_DISABLED					(0x0u << 8)
#define TIM1_DIER_UDE_ENABLED					(0x1u << 8)
	/* Break interrupt enable */
#define TIM1_DIER_BIE						(1u << 7)
	/* Trigger interrupt enable */
#define TIM1_DIER_TIE						(1u << 6)
#define TIM1_DIER_TIE_DISABLED					(0x0u << 6)
#define TIM1_DIER_TIE_ENABLED					(0x1u << 6)
	/* COM interrupt enable */
#define TIM1_DIER_COMIE						(1u << 5)
	/* Capture/Compare 4 interrupt */
#define TIM1_DIER_CC4IE						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM1_DIER_CC3IE						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM1_DIER_CC2IE						(1u << 2)
	/* Capture/Compare 1 interrupt */
#define TIM1_DIER_CC1IE						(1u << 1)
#define TIM1_DIER_CC1IE_DISABLED				(0x0u << 1)
#define TIM1_DIER_CC1IE_ENABLED					(0x1u << 1)
	/* Update interrupt enable */
#define TIM1_DIER_UIE						(1u << 0)
#define TIM1_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM1_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 4 overcapture */
#define TIM1_SR_CC4OF						(1u << 12)
	/* Capture/Compare 3 overcapture */
#define TIM1_SR_CC3OF						(1u << 11)
	/* Capture/compare 2 overcapture */
#define TIM1_SR_CC2OF						(1u << 10)
	/* Capture/Compare 1 overcapture */
#define TIM1_SR_CC1OF						(1u << 9)
#define TIM1_SR_CC1OF_OVERCAPTURE				(0x1u << 9)
#define TIM1_SR_CC1OF_CLEAR					(0x0u << 9)
	/* Break interrupt flag */
#define TIM1_SR_BIF						(1u << 7)
	/* Trigger interrupt flag */
#define TIM1_SR_TIF						(1u << 6)
#define TIM1_SR_TIF_NOTRIGGER					(0x0u << 6)
#define TIM1_SR_TIF_TRIGGER					(0x1u << 6)
#define TIM1_SR_TIF_CLEAR					(0x0u << 6)
	/* COM interrupt flag */
#define TIM1_SR_COMIF						(1u << 5)
	/* Capture/Compare 4 interrupt */
#define TIM1_SR_CC4IF						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM1_SR_CC3IF						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM1_SR_CC2IF						(1u << 2)
	/* Capture/compare 1 interrupt */
#define TIM1_SR_CC1IF						(1u << 1)
#define TIM1_SR_CC1IF_MATCH					(0x1u << 1)
#define TIM1_SR_CC1IF_CLEAR					(0x0u << 1)
	/* Update interrupt flag */
#define TIM1_SR_UIF						(1u << 0)
#define TIM1_SR_UIF_CLEAR					(0x0u << 0)
#define TIM1_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Break generation */
#define TIM1_EGR_BG						(1u << 7)
	/* Trigger generation */
#define TIM1_EGR_TG						(1u << 6)
#define TIM1_EGR_TG_TRIGGER					(0x1u << 6)
	/* Capture/Compare control update */
#define TIM1_EGR_COMG						(1u << 5)
	/* Capture/compare 4 */
#define TIM1_EGR_CC4G						(1u << 4)
	/* Capture/compare 3 */
#define TIM1_EGR_CC3G						(1u << 3)
	/* Capture/compare 2 */
#define TIM1_EGR_CC2G						(1u << 2)
	/* Capture/compare 1 */
#define TIM1_EGR_CC1G						(1u << 1)
#define TIM1_EGR_CC1G_TRIGGER					(0x1u << 1)
	/* Update generation */
#define TIM1_EGR_UG						(1u << 0)
#define TIM1_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* Output Compare 2 clear */
#define TIM1_CCMR1_OUTPUT_OC2CE					(1u << 15)
	/* Output Compare 2 mode */
#define TIM1_CCMR1_OUTPUT_OC2M_Msk				(0x7u << 12)
#define TIM1_CCMR1_OUTPUT_OC2M_Pos				12
	/* Output Compare 2 preload */
#define TIM1_CCMR1_OUTPUT_OC2PE					(1u << 11)
#define TIM1_CCMR1_OUTPUT_OC2PE_DISABLED			(0x0u << 11)
#define TIM1_CCMR1_OUTPUT_OC2PE_ENABLED				(0x1u << 11)
	/* Output Compare 2 fast */
#define TIM1_CCMR1_OUTPUT_OC2FE					(1u << 10)
	/* Capture/Compare 2 */
#define TIM1_CCMR1_OUTPUT_CC2S_Msk				(0x3u << 8)
#define TIM1_CCMR1_OUTPUT_CC2S_Pos				8
#define TIM1_CCMR1_OUTPUT_CC2S_OUTPUT				(0x0u << 8)
	/* Output Compare 1 clear */
#define TIM1_CCMR1_OUTPUT_OC1CE					(1u << 7)
	/* Output Compare 1 mode */
#define TIM1_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM1_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_PWMMODE1				(0x6u << 4)
#define TIM1_CCMR1_OUTPUT_OC1M_PWMMODE2				(0x7u << 4)
	/* Output Compare 1 preload */
#define TIM1_CCMR1_OUTPUT_OC1PE					(1u << 3)
#define TIM1_CCMR1_OUTPUT_OC1PE_DISABLED			(0x0u << 3)
#define TIM1_CCMR1_OUTPUT_OC1PE_ENABLED				(0x1u << 3)
	/* Output Compare 1 fast */
#define TIM1_CCMR1_OUTPUT_OC1FE					(1u << 2)
	/* Capture/Compare 1 */
#define TIM1_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM1_CCMR1_OUTPUT_CC1S_Pos				0
#define TIM1_CCMR1_OUTPUT_CC1S_OUTPUT				(0x0u << 0)

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 2 filter */
#define TIM1_CCMR1_INPUT_IC2F_Msk				(0xFu << 12)
#define TIM1_CCMR1_INPUT_IC2F_Pos				12
	/* Input capture 2 prescaler */
#define TIM1_CCMR1_INPUT_IC2PSC_Msk				(0x3u << 10)
#define TIM1_CCMR1_INPUT_IC2PSC_Pos				10
	/* Capture/Compare 2 */
#define TIM1_CCMR1_INPUT_CC2S_Msk				(0x3u << 8)
#define TIM1_CCMR1_INPUT_CC2S_Pos				8
#define TIM1_CCMR1_INPUT_CC2S_TI2				(0x1u << 8)
#define TIM1_CCMR1_INPUT_CC2S_TI1				(0x2u << 8)
#define TIM1_CCMR1_INPUT_CC2S_TRC				(0x3u << 8)
	/* Input capture 1 filter */
#define TIM1_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM1_CCMR1_INPUT_IC1F_Pos				4
#define TIM1_CCMR1_INPUT_IC1F_NOFILTER				(0x0u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FCK_INT_N2			(0x1u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FCK_INT_N4			(0x2u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FCK_INT_N8			(0x3u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV2_N6			(0x4u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV2_N8			(0x5u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV4_N6			(0x6u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV4_N8			(0x7u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV8_N6			(0x8u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV8_N8			(0x9u << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV16_N5			(0xAu << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV16_N6			(0xBu << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV16_N8			(0xCu << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV32_N5			(0xDu << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV32_N6			(0xEu << 4)
#define TIM1_CCMR1_INPUT_IC1F_FDTS_DIV32_N8			(0xFu << 4)
	/* Input capture 1 prescaler */
#define TIM1_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM1_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM1_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM1_CCMR1_INPUT_CC1S_Pos				0
#define TIM1_CCMR1_INPUT_CC1S_TI1				(0x1u << 0)
#define TIM1_CCMR1_INPUT_CC1S_TI2				(0x2u << 0)
#define TIM1_CCMR1_INPUT_CC1S_TRC				(0x3u << 0)

	/* 0x1C: capture/compare mode register 2 (output */
	uint32_t volatile CCMR2_OUTPUT;
	/* Output compare 4 clear */
#define TIM1_CCMR2_OUTPUT_OC4CE					(1u << 15)
	/* Output compare 4 mode */
#define TIM1_CCMR2_OUTPUT_OC4M_Msk				(0x7u << 12)
#define TIM1_CCMR2_OUTPUT_OC4M_Pos				12
	/* Output compare 4 preload */
#define TIM1_CCMR2_OUTPUT_OC4PE					(1u << 11)
#define TIM1_CCMR2_OUTPUT_OC4PE_DISABLED			(0x0u << 11)
#define TIM1_CCMR2_OUTPUT_OC4PE_ENABLED				(0x1u << 11)
	/* Output compare 4 fast */
#define TIM1_CCMR2_OUTPUT_OC4FE					(1u << 10)
	/* Capture/Compare 4 */
#define TIM1_CCMR2_OUTPUT_CC4S_Msk				(0x3u << 8)
#define TIM1_CCMR2_OUTPUT_CC4S_Pos				8
#define TIM1_CCMR2_OUTPUT_CC4S_OUTPUT				(0x0u << 8)
	/* Output compare 3 clear */
#define TIM1_CCMR2_OUTPUT_OC3CE					(1u << 7)
	/* Output compare 3 mode */
#define TIM1_CCMR2_OUTPUT_OC3M_Msk				(0x7u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_Pos				4
#define TIM1_CCMR2_OUTPUT_OC3M_FROZEN				(0x0u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_ACTIVEONMATCH			(0x1u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_INACTIVEONMATCH			(0x2u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_TOGGLE				(0x3u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_FORCEINACTIVE			(0x4u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_FORCEACTIVE			(0x5u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_PWMMODE1				(0x6u << 4)
#define TIM1_CCMR2_OUTPUT_OC3M_PWMMODE2				(0x7u << 4)
	/* Output compare 3 preload */
#define TIM1_CCMR2_OUTPUT_OC3PE					(1u << 3)
#define TIM1_CCMR2_OUTPUT_OC3PE_DISABLED			(0x0u << 3)
#define TIM1_CCMR2_OUTPUT_OC3PE_ENABLED				(0x1u << 3)
	/* Output compare 3 fast */
#define TIM1_CCMR2_OUTPUT_OC3FE					(1u << 2)
	/* Capture/Compare 3 */
#define TIM1_CCMR2_OUTPUT_CC3S_Msk				(0x3u << 0)
#define TIM1_CCMR2_OUTPUT_CC3S_Pos				0
#define TIM1_CCMR2_OUTPUT_CC3S_OUTPUT				(0x0u << 0)

	/* 0x1C: capture/compare mode register 2 (input */
	uint32_t volatile CCMR2_INPUT;
	/* Input capture 4 filter */
#define TIM1_CCMR2_INPUT_IC4F_Msk				(0xFu << 12)
#define TIM1_CCMR2_INPUT_IC4F_Pos				12
	/* Input capture 4 prescaler */
#define TIM1_CCMR2_INPUT_IC4PSC_Msk				(0x3u << 10)
#define TIM1_CCMR2_INPUT_IC4PSC_Pos				10
	/* Capture/Compare 4 */
#define TIM1_CCMR2_INPUT_CC4S_Msk				(0x3u << 8)
#define TIM1_CCMR2_INPUT_CC4S_Pos				8
#define TIM1_CCMR2_INPUT_CC4S_TI4				(0x1u << 8)
#define TIM1_CCMR2_INPUT_CC4S_TI3				(0x2u << 8)
#define TIM1_CCMR2_INPUT_CC4S_TRC				(0x3u << 8)
	/* Input capture 3 filter */
#define TIM1_CCMR2_INPUT_IC3F_Msk				(0xFu << 4)
#define TIM1_CCMR2_INPUT_IC3F_Pos				4
	/* Input capture 3 prescaler */
#define TIM1_CCMR2_INPUT_IC3PSC_Msk				(0x3u << 2)
#define TIM1_CCMR2_INPUT_IC3PSC_Pos				2
	/* Capture/compare 3 */
#define TIM1_CCMR2_INPUT_CC3S_Msk				(0x3u << 0)
#define TIM1_CCMR2_INPUT_CC3S_Pos				0
#define TIM1_CCMR2_INPUT_CC3S_TI3				(0x1u << 0)
#define TIM1_CCMR2_INPUT_CC3S_TI4				(0x2u << 0)
#define TIM1_CCMR2_INPUT_CC3S_TRC				(0x3u << 0)

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 3 output */
#define TIM1_CCER_CC4P						(1u << 13)
	/* Capture/Compare 4 output */
#define TIM1_CCER_CC4E						(1u << 12)
	/* Capture/Compare 3 output */
#define TIM1_CCER_CC3NP						(1u << 11)
	/* Capture/Compare 3 complementary output */
#define TIM1_CCER_CC3NE						(1u << 10)
	/* Capture/Compare 3 output */
#define TIM1_CCER_CC3P						(1u << 9)
	/* Capture/Compare 3 output */
#define TIM1_CCER_CC3E						(1u << 8)
	/* Capture/Compare 2 output */
#define TIM1_CCER_CC2NP						(1u << 7)
	/* Capture/Compare 2 complementary output */
#define TIM1_CCER_CC2NE						(1u << 6)
	/* Capture/Compare 2 output */
#define TIM1_CCER_CC2P						(1u << 5)
	/* Capture/Compare 2 output */
#define TIM1_CCER_CC2E						(1u << 4)
	/* Capture/Compare 1 output */
#define TIM1_CCER_CC1NP						(1u << 3)
	/* Capture/Compare 1 complementary output */
#define TIM1_CCER_CC1NE						(1u << 2)
	/* Capture/Compare 1 output */
#define TIM1_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM1_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* counter value */
#define TIM1_CNT_CNT_Msk					(0xFFFFu << 0)
#define TIM1_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM1_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM1_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM1_ARR_ARR_Msk					(0xFFFFu << 0)
#define TIM1_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED0[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR[4];
	/* Capture/Compare value */
#define TIM1_CCR_CCR_Msk					(0xFFFFu << 0)
#define TIM1_CCR_CCR_Pos					0

	/* 0x38 */
	uint8_t RESERVED1[0x48u-0x38u];

	/* 0x48: DMA control register */
	uint32_t volatile DCR;
	/* DMA burst length */
#define TIM1_DCR_DBL_Msk					(0x1Fu << 8)
#define TIM1_DCR_DBL_Pos					8
	/* DMA base address */
#define TIM1_DCR_DBA_Msk					(0x1Fu << 0)
#define TIM1_DCR_DBA_Pos					0

	/* 0x4C: DMA address for full transfer */
	uint32_t volatile DMAR;
	/* DMA register for burst */
#define TIM1_DMAR_DMAB_Msk					(0xFFFFu << 0)
#define TIM1_DMAR_DMAB_Pos					0

	/* 0x30: repetition counter register */
	uint32_t volatile RCR;
	/* Repetition counter value */
#define TIM1_RCR_REP_Msk					(0xFFu << 0)
#define TIM1_RCR_REP_Pos					0

	/* 0x34 */
	uint8_t RESERVED2[0x44u-0x34u];

	/* 0x44: break and dead-time register */
	uint32_t volatile BDTR;
	/* Main output enable */
#define TIM1_BDTR_MOE						(1u << 15)
	/* Automatic output enable */
#define TIM1_BDTR_AOE						(1u << 14)
	/* Break polarity */
#define TIM1_BDTR_BKP						(1u << 13)
	/* Break enable */
#define TIM1_BDTR_BKE						(1u << 12)
	/* Off-state selection for Run */
#define TIM1_BDTR_OSSR						(1u << 11)
	/* Off-state selection for Idle */
#define TIM1_BDTR_OSSI						(1u << 10)
	/* Lock configuration */
#define TIM1_BDTR_LOCK_Msk					(0x3u << 8)
#define TIM1_BDTR_LOCK_Pos					8
	/* Dead-time generator setup */
#define TIM1_BDTR_DTG_Msk					(0xFFu << 0)
#define TIM1_BDTR_DTG_Pos					0

};


#define TIM10 ((struct sdk_tim10 *)0x40014400)

struct sdk_tim10 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM10_CR1_CKD_Msk					(0x3u << 8)
#define TIM10_CR1_CKD_Pos					8
#define TIM10_CR1_CKD_DIV1					(0x0u << 8)
#define TIM10_CR1_CKD_DIV2					(0x1u << 8)
#define TIM10_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM10_CR1_ARPE						(1u << 7)
#define TIM10_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM10_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Update request source */
#define TIM10_CR1_URS						(1u << 2)
#define TIM10_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM10_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM10_CR1_UDIS						(1u << 1)
#define TIM10_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM10_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM10_CR1_CEN						(1u << 0)
#define TIM10_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM10_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04 */
	uint8_t RESERVED0[0x0Cu-0x04u];

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Capture/Compare 1 interrupt */
#define TIM10_DIER_CC1IE					(1u << 1)
	/* Update interrupt enable */
#define TIM10_DIER_UIE						(1u << 0)
#define TIM10_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM10_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 1 overcapture */
#define TIM10_SR_CC1OF						(1u << 9)
	/* Capture/compare 1 interrupt */
#define TIM10_SR_CC1IF						(1u << 1)
	/* Update interrupt flag */
#define TIM10_SR_UIF						(1u << 0)
#define TIM10_SR_UIF_CLEAR					(0x0u << 0)
#define TIM10_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Capture/compare 1 */
#define TIM10_EGR_CC1G						(1u << 1)
	/* Update generation */
#define TIM10_EGR_UG						(1u << 0)
#define TIM10_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* Output Compare 1 mode */
#define TIM10_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM10_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_PWMMODE1			(0x6u << 4)
#define TIM10_CCMR1_OUTPUT_OC1M_PWMMODE2			(0x7u << 4)
	/* Output Compare 1 preload */
#define TIM10_CCMR1_OUTPUT_OC1PE				(1u << 3)
	/* Output Compare 1 fast */
#define TIM10_CCMR1_OUTPUT_OC1FE				(1u << 2)
	/* Capture/Compare 1 */
#define TIM10_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM10_CCMR1_OUTPUT_CC1S_Pos				0

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 1 filter */
#define TIM10_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM10_CCMR1_INPUT_IC1F_Pos				4
	/* Input capture 1 prescaler */
#define TIM10_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM10_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM10_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM10_CCMR1_INPUT_CC1S_Pos				0

	/* 0x1C */
	uint8_t RESERVED1[0x20u-0x1Cu];

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 1 output */
#define TIM10_CCER_CC1NP					(1u << 3)
	/* Capture/Compare 1 output */
#define TIM10_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM10_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* counter value */
#define TIM10_CNT_CNT_Msk					(0xFFFFu << 0)
#define TIM10_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM10_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM10_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM10_ARR_ARR_Msk					(0xFFFFu << 0)
#define TIM10_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED2[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR;
	/* Capture/Compare value */
#define TIM10_CCR_CCR_Msk					(0xFFFFu << 0)
#define TIM10_CCR_CCR_Pos					0

};


#define TIM11 ((struct sdk_tim11 *)0x40014800)

struct sdk_tim11 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM11_CR1_CKD_Msk					(0x3u << 8)
#define TIM11_CR1_CKD_Pos					8
#define TIM11_CR1_CKD_DIV1					(0x0u << 8)
#define TIM11_CR1_CKD_DIV2					(0x1u << 8)
#define TIM11_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM11_CR1_ARPE						(1u << 7)
#define TIM11_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM11_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Update request source */
#define TIM11_CR1_URS						(1u << 2)
#define TIM11_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM11_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM11_CR1_UDIS						(1u << 1)
#define TIM11_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM11_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM11_CR1_CEN						(1u << 0)
#define TIM11_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM11_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04 */
	uint8_t RESERVED0[0x0Cu-0x04u];

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Capture/Compare 1 interrupt */
#define TIM11_DIER_CC1IE					(1u << 1)
	/* Update interrupt enable */
#define TIM11_DIER_UIE						(1u << 0)
#define TIM11_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM11_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 1 overcapture */
#define TIM11_SR_CC1OF						(1u << 9)
	/* Capture/compare 1 interrupt */
#define TIM11_SR_CC1IF						(1u << 1)
	/* Update interrupt flag */
#define TIM11_SR_UIF						(1u << 0)
#define TIM11_SR_UIF_CLEAR					(0x0u << 0)
#define TIM11_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Capture/compare 1 */
#define TIM11_EGR_CC1G						(1u << 1)
	/* Update generation */
#define TIM11_EGR_UG						(1u << 0)
#define TIM11_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* Output Compare 1 mode */
#define TIM11_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM11_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_PWMMODE1			(0x6u << 4)
#define TIM11_CCMR1_OUTPUT_OC1M_PWMMODE2			(0x7u << 4)
	/* Output Compare 1 preload */
#define TIM11_CCMR1_OUTPUT_OC1PE				(1u << 3)
	/* Output Compare 1 fast */
#define TIM11_CCMR1_OUTPUT_OC1FE				(1u << 2)
	/* Capture/Compare 1 */
#define TIM11_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM11_CCMR1_OUTPUT_CC1S_Pos				0

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 1 filter */
#define TIM11_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM11_CCMR1_INPUT_IC1F_Pos				4
	/* Input capture 1 prescaler */
#define TIM11_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM11_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM11_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM11_CCMR1_INPUT_CC1S_Pos				0

	/* 0x1C */
	uint8_t RESERVED1[0x20u-0x1Cu];

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 1 output */
#define TIM11_CCER_CC1NP					(1u << 3)
	/* Capture/Compare 1 output */
#define TIM11_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM11_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* counter value */
#define TIM11_CNT_CNT_Msk					(0xFFFFu << 0)
#define TIM11_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM11_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM11_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM11_ARR_ARR_Msk					(0xFFFFu << 0)
#define TIM11_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED2[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR;
	/* Capture/Compare value */
#define TIM11_CCR_CCR_Msk					(0xFFFFu << 0)
#define TIM11_CCR_CCR_Pos					0

	/* 0x38 */
	uint8_t RESERVED3[0x50u-0x38u];

	/* 0x50: option register */
	uint32_t volatile OR;
	/* Input 1 remapping */
#define TIM11_OR_RMP_Msk					(0x3u << 0)
#define TIM11_OR_RMP_Pos					0

};


#define TIM2 ((struct sdk_tim2 *)0x40000000)

struct sdk_tim2 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM2_CR1_CKD_Msk					(0x3u << 8)
#define TIM2_CR1_CKD_Pos					8
#define TIM2_CR1_CKD_DIV1					(0x0u << 8)
#define TIM2_CR1_CKD_DIV2					(0x1u << 8)
#define TIM2_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM2_CR1_ARPE						(1u << 7)
#define TIM2_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM2_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Center-aligned mode */
#define TIM2_CR1_CMS_Msk					(0x3u << 5)
#define TIM2_CR1_CMS_Pos					5
#define TIM2_CR1_CMS_EDGEALIGNED				(0x0u << 5)
#define TIM2_CR1_CMS_CENTERALIGNED1				(0x1u << 5)
#define TIM2_CR1_CMS_CENTERALIGNED2				(0x2u << 5)
#define TIM2_CR1_CMS_CENTERALIGNED3				(0x3u << 5)
	/* Direction */
#define TIM2_CR1_DIR						(1u << 4)
#define TIM2_CR1_DIR_UP						(0x0u << 4)
#define TIM2_CR1_DIR_DOWN					(0x1u << 4)
	/* One-pulse mode */
#define TIM2_CR1_OPM						(1u << 3)
#define TIM2_CR1_OPM_DISABLED					(0x0u << 3)
#define TIM2_CR1_OPM_ENABLED					(0x1u << 3)
	/* Update request source */
#define TIM2_CR1_URS						(1u << 2)
#define TIM2_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM2_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM2_CR1_UDIS						(1u << 1)
#define TIM2_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM2_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM2_CR1_CEN						(1u << 0)
#define TIM2_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM2_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* TI1 selection */
#define TIM2_CR2_TI1S						(1u << 7)
#define TIM2_CR2_TI1S_NORMAL					(0x0u << 7)
#define TIM2_CR2_TI1S_XOR					(0x1u << 7)
	/* Master mode selection */
#define TIM2_CR2_MMS_Msk					(0x7u << 4)
#define TIM2_CR2_MMS_Pos					4
#define TIM2_CR2_MMS_RESET					(0x0u << 4)
#define TIM2_CR2_MMS_ENABLE					(0x1u << 4)
#define TIM2_CR2_MMS_UPDATE					(0x2u << 4)
#define TIM2_CR2_MMS_COMPAREPULSE				(0x3u << 4)
#define TIM2_CR2_MMS_COMPAREOC1					(0x4u << 4)
#define TIM2_CR2_MMS_COMPAREOC2					(0x5u << 4)
#define TIM2_CR2_MMS_COMPAREOC3					(0x6u << 4)
#define TIM2_CR2_MMS_COMPAREOC4					(0x7u << 4)
	/* Capture/compare DMA */
#define TIM2_CR2_CCDS						(1u << 3)
#define TIM2_CR2_CCDS_ONCOMPARE					(0x0u << 3)
#define TIM2_CR2_CCDS_ONUPDATE					(0x1u << 3)

	/* 0x08: slave mode control register */
	uint32_t volatile SMCR;
	/* External trigger polarity */
#define TIM2_SMCR_ETP						(1u << 15)
#define TIM2_SMCR_ETP_NOTINVERTED				(0x0u << 15)
#define TIM2_SMCR_ETP_INVERTED					(0x1u << 15)
	/* External clock enable */
#define TIM2_SMCR_ECE						(1u << 14)
#define TIM2_SMCR_ECE_DISABLED					(0x0u << 14)
#define TIM2_SMCR_ECE_ENABLED					(0x1u << 14)
	/* External trigger prescaler */
#define TIM2_SMCR_ETPS_Msk					(0x3u << 12)
#define TIM2_SMCR_ETPS_Pos					12
#define TIM2_SMCR_ETPS_DIV1					(0x0u << 12)
#define TIM2_SMCR_ETPS_DIV2					(0x1u << 12)
#define TIM2_SMCR_ETPS_DIV4					(0x2u << 12)
#define TIM2_SMCR_ETPS_DIV8					(0x3u << 12)
	/* External trigger filter */
#define TIM2_SMCR_ETF_Msk					(0xFu << 8)
#define TIM2_SMCR_ETF_Pos					8
#define TIM2_SMCR_ETF_NOFILTER					(0x0u << 8)
#define TIM2_SMCR_ETF_FCK_INT_N2				(0x1u << 8)
#define TIM2_SMCR_ETF_FCK_INT_N4				(0x2u << 8)
#define TIM2_SMCR_ETF_FCK_INT_N8				(0x3u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV2_N6				(0x4u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV2_N8				(0x5u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV4_N6				(0x6u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV4_N8				(0x7u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV8_N6				(0x8u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV8_N8				(0x9u << 8)
#define TIM2_SMCR_ETF_FDTS_DIV16_N5				(0xAu << 8)
#define TIM2_SMCR_ETF_FDTS_DIV16_N6				(0xBu << 8)
#define TIM2_SMCR_ETF_FDTS_DIV16_N8				(0xCu << 8)
#define TIM2_SMCR_ETF_FDTS_DIV32_N5				(0xDu << 8)
#define TIM2_SMCR_ETF_FDTS_DIV32_N6				(0xEu << 8)
#define TIM2_SMCR_ETF_FDTS_DIV32_N8				(0xFu << 8)
	/* Master/Slave mode */
#define TIM2_SMCR_MSM						(1u << 7)
#define TIM2_SMCR_MSM_NOSYNC					(0x0u << 7)
#define TIM2_SMCR_MSM_SYNC					(0x1u << 7)
	/* Trigger selection */
#define TIM2_SMCR_TS_Msk					(0x7u << 4)
#define TIM2_SMCR_TS_Pos					4
#define TIM2_SMCR_TS_ITR0					(0x0u << 4)
#define TIM2_SMCR_TS_ITR1					(0x1u << 4)
#define TIM2_SMCR_TS_ITR2					(0x2u << 4)
#define TIM2_SMCR_TS_TI1F_ED					(0x4u << 4)
#define TIM2_SMCR_TS_TI1FP1					(0x5u << 4)
#define TIM2_SMCR_TS_TI2FP2					(0x6u << 4)
#define TIM2_SMCR_TS_ETRF					(0x7u << 4)
	/* Slave mode selection */
#define TIM2_SMCR_SMS_Msk					(0x7u << 0)
#define TIM2_SMCR_SMS_Pos					0
#define TIM2_SMCR_SMS_DISABLED					(0x0u << 0)
#define TIM2_SMCR_SMS_ENCODER_MODE_1				(0x1u << 0)
#define TIM2_SMCR_SMS_ENCODER_MODE_2				(0x2u << 0)
#define TIM2_SMCR_SMS_ENCODER_MODE_3				(0x3u << 0)
#define TIM2_SMCR_SMS_RESET_MODE				(0x4u << 0)
#define TIM2_SMCR_SMS_GATED_MODE				(0x5u << 0)
#define TIM2_SMCR_SMS_TRIGGER_MODE				(0x6u << 0)
#define TIM2_SMCR_SMS_EXT_CLOCK_MODE				(0x7u << 0)

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Trigger DMA request enable */
#define TIM2_DIER_TDE						(1u << 14)
#define TIM2_DIER_TDE_DISABLED					(0x0u << 14)
#define TIM2_DIER_TDE_ENABLED					(0x1u << 14)
	/* Capture/Compare 4 DMA request */
#define TIM2_DIER_CC4DE						(1u << 12)
	/* Capture/Compare 3 DMA request */
#define TIM2_DIER_CC3DE						(1u << 11)
	/* Capture/Compare 2 DMA request */
#define TIM2_DIER_CC2DE						(1u << 10)
	/* Capture/Compare 1 DMA request */
#define TIM2_DIER_CC1DE						(1u << 9)
#define TIM2_DIER_CC1DE_DISABLED				(0x0u << 9)
#define TIM2_DIER_CC1DE_ENABLED					(0x1u << 9)
	/* Update DMA request enable */
#define TIM2_DIER_UDE						(1u << 8)
#define TIM2_DIER_UDE_DISABLED					(0x0u << 8)
#define TIM2_DIER_UDE_ENABLED					(0x1u << 8)
	/* Trigger interrupt enable */
#define TIM2_DIER_TIE						(1u << 6)
#define TIM2_DIER_TIE_DISABLED					(0x0u << 6)
#define TIM2_DIER_TIE_ENABLED					(0x1u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM2_DIER_CC4IE						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM2_DIER_CC3IE						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM2_DIER_CC2IE						(1u << 2)
	/* Capture/Compare 1 interrupt */
#define TIM2_DIER_CC1IE						(1u << 1)
#define TIM2_DIER_CC1IE_DISABLED				(0x0u << 1)
#define TIM2_DIER_CC1IE_ENABLED					(0x1u << 1)
	/* Update interrupt enable */
#define TIM2_DIER_UIE						(1u << 0)
#define TIM2_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM2_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 4 overcapture */
#define TIM2_SR_CC4OF						(1u << 12)
	/* Capture/Compare 3 overcapture */
#define TIM2_SR_CC3OF						(1u << 11)
	/* Capture/compare 2 overcapture */
#define TIM2_SR_CC2OF						(1u << 10)
	/* Capture/Compare 1 overcapture */
#define TIM2_SR_CC1OF						(1u << 9)
#define TIM2_SR_CC1OF_OVERCAPTURE				(0x1u << 9)
#define TIM2_SR_CC1OF_CLEAR					(0x0u << 9)
	/* Trigger interrupt flag */
#define TIM2_SR_TIF						(1u << 6)
#define TIM2_SR_TIF_NOTRIGGER					(0x0u << 6)
#define TIM2_SR_TIF_TRIGGER					(0x1u << 6)
#define TIM2_SR_TIF_CLEAR					(0x0u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM2_SR_CC4IF						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM2_SR_CC3IF						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM2_SR_CC2IF						(1u << 2)
	/* Capture/compare 1 interrupt */
#define TIM2_SR_CC1IF						(1u << 1)
#define TIM2_SR_CC1IF_MATCH					(0x1u << 1)
#define TIM2_SR_CC1IF_CLEAR					(0x0u << 1)
	/* Update interrupt flag */
#define TIM2_SR_UIF						(1u << 0)
#define TIM2_SR_UIF_CLEAR					(0x0u << 0)
#define TIM2_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Trigger generation */
#define TIM2_EGR_TG						(1u << 6)
#define TIM2_EGR_TG_TRIGGER					(0x1u << 6)
	/* Capture/compare 4 */
#define TIM2_EGR_CC4G						(1u << 4)
	/* Capture/compare 3 */
#define TIM2_EGR_CC3G						(1u << 3)
	/* Capture/compare 2 */
#define TIM2_EGR_CC2G						(1u << 2)
	/* Capture/compare 1 */
#define TIM2_EGR_CC1G						(1u << 1)
#define TIM2_EGR_CC1G_TRIGGER					(0x1u << 1)
	/* Update generation */
#define TIM2_EGR_UG						(1u << 0)
#define TIM2_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* OC2CE */
#define TIM2_CCMR1_OUTPUT_OC2CE					(1u << 15)
	/* OC2M */
#define TIM2_CCMR1_OUTPUT_OC2M_Msk				(0x7u << 12)
#define TIM2_CCMR1_OUTPUT_OC2M_Pos				12
	/* OC2PE */
#define TIM2_CCMR1_OUTPUT_OC2PE					(1u << 11)
#define TIM2_CCMR1_OUTPUT_OC2PE_DISABLED			(0x0u << 11)
#define TIM2_CCMR1_OUTPUT_OC2PE_ENABLED				(0x1u << 11)
	/* OC2FE */
#define TIM2_CCMR1_OUTPUT_OC2FE					(1u << 10)
	/* CC2S */
#define TIM2_CCMR1_OUTPUT_CC2S_Msk				(0x3u << 8)
#define TIM2_CCMR1_OUTPUT_CC2S_Pos				8
#define TIM2_CCMR1_OUTPUT_CC2S_OUTPUT				(0x0u << 8)
	/* OC1CE */
#define TIM2_CCMR1_OUTPUT_OC1CE					(1u << 7)
	/* OC1M */
#define TIM2_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM2_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_PWMMODE1				(0x6u << 4)
#define TIM2_CCMR1_OUTPUT_OC1M_PWMMODE2				(0x7u << 4)
	/* OC1PE */
#define TIM2_CCMR1_OUTPUT_OC1PE					(1u << 3)
#define TIM2_CCMR1_OUTPUT_OC1PE_DISABLED			(0x0u << 3)
#define TIM2_CCMR1_OUTPUT_OC1PE_ENABLED				(0x1u << 3)
	/* OC1FE */
#define TIM2_CCMR1_OUTPUT_OC1FE					(1u << 2)
	/* CC1S */
#define TIM2_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM2_CCMR1_OUTPUT_CC1S_Pos				0
#define TIM2_CCMR1_OUTPUT_CC1S_OUTPUT				(0x0u << 0)

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 2 filter */
#define TIM2_CCMR1_INPUT_IC2F_Msk				(0xFu << 12)
#define TIM2_CCMR1_INPUT_IC2F_Pos				12
	/* Input capture 2 prescaler */
#define TIM2_CCMR1_INPUT_IC2PSC_Msk				(0x3u << 10)
#define TIM2_CCMR1_INPUT_IC2PSC_Pos				10
	/* Capture/Compare 2 */
#define TIM2_CCMR1_INPUT_CC2S_Msk				(0x3u << 8)
#define TIM2_CCMR1_INPUT_CC2S_Pos				8
#define TIM2_CCMR1_INPUT_CC2S_TI2				(0x1u << 8)
#define TIM2_CCMR1_INPUT_CC2S_TI1				(0x2u << 8)
#define TIM2_CCMR1_INPUT_CC2S_TRC				(0x3u << 8)
	/* Input capture 1 filter */
#define TIM2_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM2_CCMR1_INPUT_IC1F_Pos				4
#define TIM2_CCMR1_INPUT_IC1F_NOFILTER				(0x0u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FCK_INT_N2			(0x1u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FCK_INT_N4			(0x2u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FCK_INT_N8			(0x3u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV2_N6			(0x4u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV2_N8			(0x5u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV4_N6			(0x6u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV4_N8			(0x7u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV8_N6			(0x8u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV8_N8			(0x9u << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV16_N5			(0xAu << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV16_N6			(0xBu << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV16_N8			(0xCu << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV32_N5			(0xDu << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV32_N6			(0xEu << 4)
#define TIM2_CCMR1_INPUT_IC1F_FDTS_DIV32_N8			(0xFu << 4)
	/* Input capture 1 prescaler */
#define TIM2_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM2_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM2_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM2_CCMR1_INPUT_CC1S_Pos				0
#define TIM2_CCMR1_INPUT_CC1S_TI1				(0x1u << 0)
#define TIM2_CCMR1_INPUT_CC1S_TI2				(0x2u << 0)
#define TIM2_CCMR1_INPUT_CC1S_TRC				(0x3u << 0)

	/* 0x1C: capture/compare mode register 2 (output */
	uint32_t volatile CCMR2_OUTPUT;
	/* O24CE */
#define TIM2_CCMR2_OUTPUT_OC4CE					(1u << 15)
	/* OC4M */
#define TIM2_CCMR2_OUTPUT_OC4M_Msk				(0x7u << 12)
#define TIM2_CCMR2_OUTPUT_OC4M_Pos				12
	/* OC4PE */
#define TIM2_CCMR2_OUTPUT_OC4PE					(1u << 11)
#define TIM2_CCMR2_OUTPUT_OC4PE_DISABLED			(0x0u << 11)
#define TIM2_CCMR2_OUTPUT_OC4PE_ENABLED				(0x1u << 11)
	/* OC4FE */
#define TIM2_CCMR2_OUTPUT_OC4FE					(1u << 10)
	/* CC4S */
#define TIM2_CCMR2_OUTPUT_CC4S_Msk				(0x3u << 8)
#define TIM2_CCMR2_OUTPUT_CC4S_Pos				8
#define TIM2_CCMR2_OUTPUT_CC4S_OUTPUT				(0x0u << 8)
	/* OC3CE */
#define TIM2_CCMR2_OUTPUT_OC3CE					(1u << 7)
	/* OC3M */
#define TIM2_CCMR2_OUTPUT_OC3M_Msk				(0x7u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_Pos				4
#define TIM2_CCMR2_OUTPUT_OC3M_FROZEN				(0x0u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_ACTIVEONMATCH			(0x1u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_INACTIVEONMATCH			(0x2u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_TOGGLE				(0x3u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_FORCEINACTIVE			(0x4u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_FORCEACTIVE			(0x5u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_PWMMODE1				(0x6u << 4)
#define TIM2_CCMR2_OUTPUT_OC3M_PWMMODE2				(0x7u << 4)
	/* OC3PE */
#define TIM2_CCMR2_OUTPUT_OC3PE					(1u << 3)
#define TIM2_CCMR2_OUTPUT_OC3PE_DISABLED			(0x0u << 3)
#define TIM2_CCMR2_OUTPUT_OC3PE_ENABLED				(0x1u << 3)
	/* OC3FE */
#define TIM2_CCMR2_OUTPUT_OC3FE					(1u << 2)
	/* CC3S */
#define TIM2_CCMR2_OUTPUT_CC3S_Msk				(0x3u << 0)
#define TIM2_CCMR2_OUTPUT_CC3S_Pos				0
#define TIM2_CCMR2_OUTPUT_CC3S_OUTPUT				(0x0u << 0)

	/* 0x1C: capture/compare mode register 2 (input */
	uint32_t volatile CCMR2_INPUT;
	/* Input capture 4 filter */
#define TIM2_CCMR2_INPUT_IC4F_Msk				(0xFu << 12)
#define TIM2_CCMR2_INPUT_IC4F_Pos				12
	/* Input capture 4 prescaler */
#define TIM2_CCMR2_INPUT_IC4PSC_Msk				(0x3u << 10)
#define TIM2_CCMR2_INPUT_IC4PSC_Pos				10
	/* Capture/Compare 4 */
#define TIM2_CCMR2_INPUT_CC4S_Msk				(0x3u << 8)
#define TIM2_CCMR2_INPUT_CC4S_Pos				8
#define TIM2_CCMR2_INPUT_CC4S_TI4				(0x1u << 8)
#define TIM2_CCMR2_INPUT_CC4S_TI3				(0x2u << 8)
#define TIM2_CCMR2_INPUT_CC4S_TRC				(0x3u << 8)
	/* Input capture 3 filter */
#define TIM2_CCMR2_INPUT_IC3F_Msk				(0xFu << 4)
#define TIM2_CCMR2_INPUT_IC3F_Pos				4
	/* Input capture 3 prescaler */
#define TIM2_CCMR2_INPUT_IC3PSC_Msk				(0x3u << 2)
#define TIM2_CCMR2_INPUT_IC3PSC_Pos				2
	/* Capture/compare 3 */
#define TIM2_CCMR2_INPUT_CC3S_Msk				(0x3u << 0)
#define TIM2_CCMR2_INPUT_CC3S_Pos				0
#define TIM2_CCMR2_INPUT_CC3S_TI3				(0x1u << 0)
#define TIM2_CCMR2_INPUT_CC3S_TI4				(0x2u << 0)
#define TIM2_CCMR2_INPUT_CC3S_TRC				(0x3u << 0)

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 4 output */
#define TIM2_CCER_CC4NP						(1u << 15)
	/* Capture/Compare 3 output */
#define TIM2_CCER_CC4P						(1u << 13)
	/* Capture/Compare 4 output */
#define TIM2_CCER_CC4E						(1u << 12)
	/* Capture/Compare 3 output */
#define TIM2_CCER_CC3NP						(1u << 11)
	/* Capture/Compare 3 output */
#define TIM2_CCER_CC3P						(1u << 9)
	/* Capture/Compare 3 output */
#define TIM2_CCER_CC3E						(1u << 8)
	/* Capture/Compare 2 output */
#define TIM2_CCER_CC2NP						(1u << 7)
	/* Capture/Compare 2 output */
#define TIM2_CCER_CC2P						(1u << 5)
	/* Capture/Compare 2 output */
#define TIM2_CCER_CC2E						(1u << 4)
	/* Capture/Compare 1 output */
#define TIM2_CCER_CC1NP						(1u << 3)
	/* Capture/Compare 1 output */
#define TIM2_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM2_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* Counter value */
#define TIM2_CNT_CNT_Msk					(0xFFFFFFFFu << 0)
#define TIM2_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM2_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM2_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM2_ARR_ARR_Msk					(0xFFFFFFFFu << 0)
#define TIM2_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED0[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR[4];
	/* Capture/Compare value */
#define TIM2_CCR_CCR_Msk					(0xFFFFFFFFu << 0)
#define TIM2_CCR_CCR_Pos					0

	/* 0x38 */
	uint8_t RESERVED1[0x48u-0x38u];

	/* 0x48: DMA control register */
	uint32_t volatile DCR;
	/* DMA burst length */
#define TIM2_DCR_DBL_Msk					(0x1Fu << 8)
#define TIM2_DCR_DBL_Pos					8
	/* DMA base address */
#define TIM2_DCR_DBA_Msk					(0x1Fu << 0)
#define TIM2_DCR_DBA_Pos					0

	/* 0x4C: DMA address for full transfer */
	uint32_t volatile DMAR;
	/* DMA register for burst */
#define TIM2_DMAR_DMAB_Msk					(0xFFFFu << 0)
#define TIM2_DMAR_DMAB_Pos					0

	/* 0x50: TIM5 option register */
	uint32_t volatile OR;
	/* Timer Input 4 remap */
#define TIM2_OR_ITR1_RMP_Msk					(0x3u << 10)
#define TIM2_OR_ITR1_RMP_Pos					10

};


#define TIM3 ((struct sdk_tim3or4 *)0x40000400)
#define TIM4 ((struct sdk_tim3or4 *)0x40000800)

struct sdk_tim3or4 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM3_CR1_CKD_Msk					(0x3u << 8)
#define TIM3_CR1_CKD_Pos					8
#define TIM3_CR1_CKD_DIV1					(0x0u << 8)
#define TIM3_CR1_CKD_DIV2					(0x1u << 8)
#define TIM3_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM3_CR1_ARPE						(1u << 7)
#define TIM3_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM3_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Center-aligned mode */
#define TIM3_CR1_CMS_Msk					(0x3u << 5)
#define TIM3_CR1_CMS_Pos					5
#define TIM3_CR1_CMS_EDGEALIGNED				(0x0u << 5)
#define TIM3_CR1_CMS_CENTERALIGNED1				(0x1u << 5)
#define TIM3_CR1_CMS_CENTERALIGNED2				(0x2u << 5)
#define TIM3_CR1_CMS_CENTERALIGNED3				(0x3u << 5)
	/* Direction */
#define TIM3_CR1_DIR						(1u << 4)
#define TIM3_CR1_DIR_UP						(0x0u << 4)
#define TIM3_CR1_DIR_DOWN					(0x1u << 4)
	/* One-pulse mode */
#define TIM3_CR1_OPM						(1u << 3)
#define TIM3_CR1_OPM_DISABLED					(0x0u << 3)
#define TIM3_CR1_OPM_ENABLED					(0x1u << 3)
	/* Update request source */
#define TIM3_CR1_URS						(1u << 2)
#define TIM3_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM3_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM3_CR1_UDIS						(1u << 1)
#define TIM3_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM3_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM3_CR1_CEN						(1u << 0)
#define TIM3_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM3_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* TI1 selection */
#define TIM3_CR2_TI1S						(1u << 7)
#define TIM3_CR2_TI1S_NORMAL					(0x0u << 7)
#define TIM3_CR2_TI1S_XOR					(0x1u << 7)
	/* Master mode selection */
#define TIM3_CR2_MMS_Msk					(0x7u << 4)
#define TIM3_CR2_MMS_Pos					4
#define TIM3_CR2_MMS_RESET					(0x0u << 4)
#define TIM3_CR2_MMS_ENABLE					(0x1u << 4)
#define TIM3_CR2_MMS_UPDATE					(0x2u << 4)
#define TIM3_CR2_MMS_COMPAREPULSE				(0x3u << 4)
#define TIM3_CR2_MMS_COMPAREOC1					(0x4u << 4)
#define TIM3_CR2_MMS_COMPAREOC2					(0x5u << 4)
#define TIM3_CR2_MMS_COMPAREOC3					(0x6u << 4)
#define TIM3_CR2_MMS_COMPAREOC4					(0x7u << 4)
	/* Capture/compare DMA */
#define TIM3_CR2_CCDS						(1u << 3)
#define TIM3_CR2_CCDS_ONCOMPARE					(0x0u << 3)
#define TIM3_CR2_CCDS_ONUPDATE					(0x1u << 3)

	/* 0x08: slave mode control register */
	uint32_t volatile SMCR;
	/* External trigger polarity */
#define TIM3_SMCR_ETP						(1u << 15)
#define TIM3_SMCR_ETP_NOTINVERTED				(0x0u << 15)
#define TIM3_SMCR_ETP_INVERTED					(0x1u << 15)
	/* External clock enable */
#define TIM3_SMCR_ECE						(1u << 14)
#define TIM3_SMCR_ECE_DISABLED					(0x0u << 14)
#define TIM3_SMCR_ECE_ENABLED					(0x1u << 14)
	/* External trigger prescaler */
#define TIM3_SMCR_ETPS_Msk					(0x3u << 12)
#define TIM3_SMCR_ETPS_Pos					12
#define TIM3_SMCR_ETPS_DIV1					(0x0u << 12)
#define TIM3_SMCR_ETPS_DIV2					(0x1u << 12)
#define TIM3_SMCR_ETPS_DIV4					(0x2u << 12)
#define TIM3_SMCR_ETPS_DIV8					(0x3u << 12)
	/* External trigger filter */
#define TIM3_SMCR_ETF_Msk					(0xFu << 8)
#define TIM3_SMCR_ETF_Pos					8
#define TIM3_SMCR_ETF_NOFILTER					(0x0u << 8)
#define TIM3_SMCR_ETF_FCK_INT_N2				(0x1u << 8)
#define TIM3_SMCR_ETF_FCK_INT_N4				(0x2u << 8)
#define TIM3_SMCR_ETF_FCK_INT_N8				(0x3u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV2_N6				(0x4u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV2_N8				(0x5u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV4_N6				(0x6u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV4_N8				(0x7u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV8_N6				(0x8u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV8_N8				(0x9u << 8)
#define TIM3_SMCR_ETF_FDTS_DIV16_N5				(0xAu << 8)
#define TIM3_SMCR_ETF_FDTS_DIV16_N6				(0xBu << 8)
#define TIM3_SMCR_ETF_FDTS_DIV16_N8				(0xCu << 8)
#define TIM3_SMCR_ETF_FDTS_DIV32_N5				(0xDu << 8)
#define TIM3_SMCR_ETF_FDTS_DIV32_N6				(0xEu << 8)
#define TIM3_SMCR_ETF_FDTS_DIV32_N8				(0xFu << 8)
	/* Master/Slave mode */
#define TIM3_SMCR_MSM						(1u << 7)
#define TIM3_SMCR_MSM_NOSYNC					(0x0u << 7)
#define TIM3_SMCR_MSM_SYNC					(0x1u << 7)
	/* Trigger selection */
#define TIM3_SMCR_TS_Msk					(0x7u << 4)
#define TIM3_SMCR_TS_Pos					4
#define TIM3_SMCR_TS_ITR0					(0x0u << 4)
#define TIM3_SMCR_TS_ITR1					(0x1u << 4)
#define TIM3_SMCR_TS_ITR2					(0x2u << 4)
#define TIM3_SMCR_TS_TI1F_ED					(0x4u << 4)
#define TIM3_SMCR_TS_TI1FP1					(0x5u << 4)
#define TIM3_SMCR_TS_TI2FP2					(0x6u << 4)
#define TIM3_SMCR_TS_ETRF					(0x7u << 4)
	/* Slave mode selection */
#define TIM3_SMCR_SMS_Msk					(0x7u << 0)
#define TIM3_SMCR_SMS_Pos					0
#define TIM3_SMCR_SMS_DISABLED					(0x0u << 0)
#define TIM3_SMCR_SMS_ENCODER_MODE_1				(0x1u << 0)
#define TIM3_SMCR_SMS_ENCODER_MODE_2				(0x2u << 0)
#define TIM3_SMCR_SMS_ENCODER_MODE_3				(0x3u << 0)
#define TIM3_SMCR_SMS_RESET_MODE				(0x4u << 0)
#define TIM3_SMCR_SMS_GATED_MODE				(0x5u << 0)
#define TIM3_SMCR_SMS_TRIGGER_MODE				(0x6u << 0)
#define TIM3_SMCR_SMS_EXT_CLOCK_MODE				(0x7u << 0)

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Trigger DMA request enable */
#define TIM3_DIER_TDE						(1u << 14)
#define TIM3_DIER_TDE_DISABLED					(0x0u << 14)
#define TIM3_DIER_TDE_ENABLED					(0x1u << 14)
	/* Capture/Compare 4 DMA request */
#define TIM3_DIER_CC4DE						(1u << 12)
	/* Capture/Compare 3 DMA request */
#define TIM3_DIER_CC3DE						(1u << 11)
	/* Capture/Compare 2 DMA request */
#define TIM3_DIER_CC2DE						(1u << 10)
	/* Capture/Compare 1 DMA request */
#define TIM3_DIER_CC1DE						(1u << 9)
#define TIM3_DIER_CC1DE_DISABLED				(0x0u << 9)
#define TIM3_DIER_CC1DE_ENABLED					(0x1u << 9)
	/* Update DMA request enable */
#define TIM3_DIER_UDE						(1u << 8)
#define TIM3_DIER_UDE_DISABLED					(0x0u << 8)
#define TIM3_DIER_UDE_ENABLED					(0x1u << 8)
	/* Trigger interrupt enable */
#define TIM3_DIER_TIE						(1u << 6)
#define TIM3_DIER_TIE_DISABLED					(0x0u << 6)
#define TIM3_DIER_TIE_ENABLED					(0x1u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM3_DIER_CC4IE						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM3_DIER_CC3IE						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM3_DIER_CC2IE						(1u << 2)
	/* Capture/Compare 1 interrupt */
#define TIM3_DIER_CC1IE						(1u << 1)
#define TIM3_DIER_CC1IE_DISABLED				(0x0u << 1)
#define TIM3_DIER_CC1IE_ENABLED					(0x1u << 1)
	/* Update interrupt enable */
#define TIM3_DIER_UIE						(1u << 0)
#define TIM3_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM3_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 4 overcapture */
#define TIM3_SR_CC4OF						(1u << 12)
	/* Capture/Compare 3 overcapture */
#define TIM3_SR_CC3OF						(1u << 11)
	/* Capture/compare 2 overcapture */
#define TIM3_SR_CC2OF						(1u << 10)
	/* Capture/Compare 1 overcapture */
#define TIM3_SR_CC1OF						(1u << 9)
#define TIM3_SR_CC1OF_OVERCAPTURE				(0x1u << 9)
#define TIM3_SR_CC1OF_CLEAR					(0x0u << 9)
	/* Trigger interrupt flag */
#define TIM3_SR_TIF						(1u << 6)
#define TIM3_SR_TIF_NOTRIGGER					(0x0u << 6)
#define TIM3_SR_TIF_TRIGGER					(0x1u << 6)
#define TIM3_SR_TIF_CLEAR					(0x0u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM3_SR_CC4IF						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM3_SR_CC3IF						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM3_SR_CC2IF						(1u << 2)
	/* Capture/compare 1 interrupt */
#define TIM3_SR_CC1IF						(1u << 1)
#define TIM3_SR_CC1IF_MATCH					(0x1u << 1)
#define TIM3_SR_CC1IF_CLEAR					(0x0u << 1)
	/* Update interrupt flag */
#define TIM3_SR_UIF						(1u << 0)
#define TIM3_SR_UIF_CLEAR					(0x0u << 0)
#define TIM3_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Trigger generation */
#define TIM3_EGR_TG						(1u << 6)
#define TIM3_EGR_TG_TRIGGER					(0x1u << 6)
	/* Capture/compare 4 */
#define TIM3_EGR_CC4G						(1u << 4)
	/* Capture/compare 3 */
#define TIM3_EGR_CC3G						(1u << 3)
	/* Capture/compare 2 */
#define TIM3_EGR_CC2G						(1u << 2)
	/* Capture/compare 1 */
#define TIM3_EGR_CC1G						(1u << 1)
#define TIM3_EGR_CC1G_TRIGGER					(0x1u << 1)
	/* Update generation */
#define TIM3_EGR_UG						(1u << 0)
#define TIM3_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* OC2CE */
#define TIM3_CCMR1_OUTPUT_OC2CE					(1u << 15)
	/* OC2M */
#define TIM3_CCMR1_OUTPUT_OC2M_Msk				(0x7u << 12)
#define TIM3_CCMR1_OUTPUT_OC2M_Pos				12
	/* OC2PE */
#define TIM3_CCMR1_OUTPUT_OC2PE					(1u << 11)
#define TIM3_CCMR1_OUTPUT_OC2PE_DISABLED			(0x0u << 11)
#define TIM3_CCMR1_OUTPUT_OC2PE_ENABLED				(0x1u << 11)
	/* OC2FE */
#define TIM3_CCMR1_OUTPUT_OC2FE					(1u << 10)
	/* CC2S */
#define TIM3_CCMR1_OUTPUT_CC2S_Msk				(0x3u << 8)
#define TIM3_CCMR1_OUTPUT_CC2S_Pos				8
#define TIM3_CCMR1_OUTPUT_CC2S_OUTPUT				(0x0u << 8)
	/* OC1CE */
#define TIM3_CCMR1_OUTPUT_OC1CE					(1u << 7)
	/* OC1M */
#define TIM3_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM3_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_PWMMODE1				(0x6u << 4)
#define TIM3_CCMR1_OUTPUT_OC1M_PWMMODE2				(0x7u << 4)
	/* OC1PE */
#define TIM3_CCMR1_OUTPUT_OC1PE					(1u << 3)
#define TIM3_CCMR1_OUTPUT_OC1PE_DISABLED			(0x0u << 3)
#define TIM3_CCMR1_OUTPUT_OC1PE_ENABLED				(0x1u << 3)
	/* OC1FE */
#define TIM3_CCMR1_OUTPUT_OC1FE					(1u << 2)
	/* CC1S */
#define TIM3_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM3_CCMR1_OUTPUT_CC1S_Pos				0
#define TIM3_CCMR1_OUTPUT_CC1S_OUTPUT				(0x0u << 0)

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 2 filter */
#define TIM3_CCMR1_INPUT_IC2F_Msk				(0xFu << 12)
#define TIM3_CCMR1_INPUT_IC2F_Pos				12
	/* Input capture 2 prescaler */
#define TIM3_CCMR1_INPUT_IC2PSC_Msk				(0x3u << 10)
#define TIM3_CCMR1_INPUT_IC2PSC_Pos				10
	/* Capture/Compare 2 */
#define TIM3_CCMR1_INPUT_CC2S_Msk				(0x3u << 8)
#define TIM3_CCMR1_INPUT_CC2S_Pos				8
#define TIM3_CCMR1_INPUT_CC2S_TI2				(0x1u << 8)
#define TIM3_CCMR1_INPUT_CC2S_TI1				(0x2u << 8)
#define TIM3_CCMR1_INPUT_CC2S_TRC				(0x3u << 8)
	/* Input capture 1 filter */
#define TIM3_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM3_CCMR1_INPUT_IC1F_Pos				4
#define TIM3_CCMR1_INPUT_IC1F_NOFILTER				(0x0u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FCK_INT_N2			(0x1u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FCK_INT_N4			(0x2u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FCK_INT_N8			(0x3u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV2_N6			(0x4u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV2_N8			(0x5u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV4_N6			(0x6u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV4_N8			(0x7u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV8_N6			(0x8u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV8_N8			(0x9u << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV16_N5			(0xAu << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV16_N6			(0xBu << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV16_N8			(0xCu << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV32_N5			(0xDu << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV32_N6			(0xEu << 4)
#define TIM3_CCMR1_INPUT_IC1F_FDTS_DIV32_N8			(0xFu << 4)
	/* Input capture 1 prescaler */
#define TIM3_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM3_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM3_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM3_CCMR1_INPUT_CC1S_Pos				0
#define TIM3_CCMR1_INPUT_CC1S_TI1				(0x1u << 0)
#define TIM3_CCMR1_INPUT_CC1S_TI2				(0x2u << 0)
#define TIM3_CCMR1_INPUT_CC1S_TRC				(0x3u << 0)

	/* 0x1C: capture/compare mode register 2 (output */
	uint32_t volatile CCMR2_OUTPUT;
	/* O24CE */
#define TIM3_CCMR2_OUTPUT_OC4CE					(1u << 15)
	/* OC4M */
#define TIM3_CCMR2_OUTPUT_OC4M_Msk				(0x7u << 12)
#define TIM3_CCMR2_OUTPUT_OC4M_Pos				12
	/* OC4PE */
#define TIM3_CCMR2_OUTPUT_OC4PE					(1u << 11)
#define TIM3_CCMR2_OUTPUT_OC4PE_DISABLED			(0x0u << 11)
#define TIM3_CCMR2_OUTPUT_OC4PE_ENABLED				(0x1u << 11)
	/* OC4FE */
#define TIM3_CCMR2_OUTPUT_OC4FE					(1u << 10)
	/* CC4S */
#define TIM3_CCMR2_OUTPUT_CC4S_Msk				(0x3u << 8)
#define TIM3_CCMR2_OUTPUT_CC4S_Pos				8
#define TIM3_CCMR2_OUTPUT_CC4S_OUTPUT				(0x0u << 8)
	/* OC3CE */
#define TIM3_CCMR2_OUTPUT_OC3CE					(1u << 7)
	/* OC3M */
#define TIM3_CCMR2_OUTPUT_OC3M_Msk				(0x7u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_Pos				4
#define TIM3_CCMR2_OUTPUT_OC3M_FROZEN				(0x0u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_ACTIVEONMATCH			(0x1u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_INACTIVEONMATCH			(0x2u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_TOGGLE				(0x3u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_FORCEINACTIVE			(0x4u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_FORCEACTIVE			(0x5u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_PWMMODE1				(0x6u << 4)
#define TIM3_CCMR2_OUTPUT_OC3M_PWMMODE2				(0x7u << 4)
	/* OC3PE */
#define TIM3_CCMR2_OUTPUT_OC3PE					(1u << 3)
#define TIM3_CCMR2_OUTPUT_OC3PE_DISABLED			(0x0u << 3)
#define TIM3_CCMR2_OUTPUT_OC3PE_ENABLED				(0x1u << 3)
	/* OC3FE */
#define TIM3_CCMR2_OUTPUT_OC3FE					(1u << 2)
	/* CC3S */
#define TIM3_CCMR2_OUTPUT_CC3S_Msk				(0x3u << 0)
#define TIM3_CCMR2_OUTPUT_CC3S_Pos				0
#define TIM3_CCMR2_OUTPUT_CC3S_OUTPUT				(0x0u << 0)

	/* 0x1C: capture/compare mode register 2 (input */
	uint32_t volatile CCMR2_INPUT;
	/* Input capture 4 filter */
#define TIM3_CCMR2_INPUT_IC4F_Msk				(0xFu << 12)
#define TIM3_CCMR2_INPUT_IC4F_Pos				12
	/* Input capture 4 prescaler */
#define TIM3_CCMR2_INPUT_IC4PSC_Msk				(0x3u << 10)
#define TIM3_CCMR2_INPUT_IC4PSC_Pos				10
	/* Capture/Compare 4 */
#define TIM3_CCMR2_INPUT_CC4S_Msk				(0x3u << 8)
#define TIM3_CCMR2_INPUT_CC4S_Pos				8
#define TIM3_CCMR2_INPUT_CC4S_TI4				(0x1u << 8)
#define TIM3_CCMR2_INPUT_CC4S_TI3				(0x2u << 8)
#define TIM3_CCMR2_INPUT_CC4S_TRC				(0x3u << 8)
	/* Input capture 3 filter */
#define TIM3_CCMR2_INPUT_IC3F_Msk				(0xFu << 4)
#define TIM3_CCMR2_INPUT_IC3F_Pos				4
	/* Input capture 3 prescaler */
#define TIM3_CCMR2_INPUT_IC3PSC_Msk				(0x3u << 2)
#define TIM3_CCMR2_INPUT_IC3PSC_Pos				2
	/* Capture/compare 3 */
#define TIM3_CCMR2_INPUT_CC3S_Msk				(0x3u << 0)
#define TIM3_CCMR2_INPUT_CC3S_Pos				0
#define TIM3_CCMR2_INPUT_CC3S_TI3				(0x1u << 0)
#define TIM3_CCMR2_INPUT_CC3S_TI4				(0x2u << 0)
#define TIM3_CCMR2_INPUT_CC3S_TRC				(0x3u << 0)

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 4 output */
#define TIM3_CCER_CC4NP						(1u << 15)
	/* Capture/Compare 3 output */
#define TIM3_CCER_CC4P						(1u << 13)
	/* Capture/Compare 4 output */
#define TIM3_CCER_CC4E						(1u << 12)
	/* Capture/Compare 3 output */
#define TIM3_CCER_CC3NP						(1u << 11)
	/* Capture/Compare 3 output */
#define TIM3_CCER_CC3P						(1u << 9)
	/* Capture/Compare 3 output */
#define TIM3_CCER_CC3E						(1u << 8)
	/* Capture/Compare 2 output */
#define TIM3_CCER_CC2NP						(1u << 7)
	/* Capture/Compare 2 output */
#define TIM3_CCER_CC2P						(1u << 5)
	/* Capture/Compare 2 output */
#define TIM3_CCER_CC2E						(1u << 4)
	/* Capture/Compare 1 output */
#define TIM3_CCER_CC1NP						(1u << 3)
	/* Capture/Compare 1 output */
#define TIM3_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM3_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* High counter value */
#define TIM3_CNT_CNT_H_Msk					(0xFFFFu << 16)
#define TIM3_CNT_CNT_H_Pos					16
	/* Counter value */
#define TIM3_CNT_CNT_Msk					(0xFFFFu << 0)
#define TIM3_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM3_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM3_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* High Auto-reload value */
#define TIM3_ARR_ARR_H_Msk					(0xFFFFu << 16)
#define TIM3_ARR_ARR_H_Pos					16
	/* Auto-reload value */
#define TIM3_ARR_ARR_Msk					(0xFFFFu << 0)
#define TIM3_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED0[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR[4];
	/* High Capture/Compare 1 */
#define TIM3_CCR_CCR1_H_Msk					(0xFFFFu << 16)
#define TIM3_CCR_CCR1_H_Pos					16
	/* Capture/Compare value */
#define TIM3_CCR_CCR_Msk					(0xFFFFu << 0)
#define TIM3_CCR_CCR_Pos					0

	/* 0x38 */
	uint8_t RESERVED1[0x48u-0x38u];

	/* 0x48: DMA control register */
	uint32_t volatile DCR;
	/* DMA burst length */
#define TIM3_DCR_DBL_Msk					(0x1Fu << 8)
#define TIM3_DCR_DBL_Pos					8
	/* DMA base address */
#define TIM3_DCR_DBA_Msk					(0x1Fu << 0)
#define TIM3_DCR_DBA_Pos					0

	/* 0x4C: DMA address for full transfer */
	uint32_t volatile DMAR;
	/* DMA register for burst */
#define TIM3_DMAR_DMAB_Msk					(0xFFFFu << 0)
#define TIM3_DMAR_DMAB_Pos					0

};


#define TIM5 ((struct sdk_tim5 *)0x40000C00)

struct sdk_tim5 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM5_CR1_CKD_Msk					(0x3u << 8)
#define TIM5_CR1_CKD_Pos					8
#define TIM5_CR1_CKD_DIV1					(0x0u << 8)
#define TIM5_CR1_CKD_DIV2					(0x1u << 8)
#define TIM5_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM5_CR1_ARPE						(1u << 7)
#define TIM5_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM5_CR1_ARPE_ENABLED					(0x1u << 7)
	/* Center-aligned mode */
#define TIM5_CR1_CMS_Msk					(0x3u << 5)
#define TIM5_CR1_CMS_Pos					5
#define TIM5_CR1_CMS_EDGEALIGNED				(0x0u << 5)
#define TIM5_CR1_CMS_CENTERALIGNED1				(0x1u << 5)
#define TIM5_CR1_CMS_CENTERALIGNED2				(0x2u << 5)
#define TIM5_CR1_CMS_CENTERALIGNED3				(0x3u << 5)
	/* Direction */
#define TIM5_CR1_DIR						(1u << 4)
#define TIM5_CR1_DIR_UP						(0x0u << 4)
#define TIM5_CR1_DIR_DOWN					(0x1u << 4)
	/* One-pulse mode */
#define TIM5_CR1_OPM						(1u << 3)
#define TIM5_CR1_OPM_DISABLED					(0x0u << 3)
#define TIM5_CR1_OPM_ENABLED					(0x1u << 3)
	/* Update request source */
#define TIM5_CR1_URS						(1u << 2)
#define TIM5_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM5_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM5_CR1_UDIS						(1u << 1)
#define TIM5_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM5_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM5_CR1_CEN						(1u << 0)
#define TIM5_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM5_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* TI1 selection */
#define TIM5_CR2_TI1S						(1u << 7)
#define TIM5_CR2_TI1S_NORMAL					(0x0u << 7)
#define TIM5_CR2_TI1S_XOR					(0x1u << 7)
	/* Master mode selection */
#define TIM5_CR2_MMS_Msk					(0x7u << 4)
#define TIM5_CR2_MMS_Pos					4
#define TIM5_CR2_MMS_RESET					(0x0u << 4)
#define TIM5_CR2_MMS_ENABLE					(0x1u << 4)
#define TIM5_CR2_MMS_UPDATE					(0x2u << 4)
#define TIM5_CR2_MMS_COMPAREPULSE				(0x3u << 4)
#define TIM5_CR2_MMS_COMPAREOC1					(0x4u << 4)
#define TIM5_CR2_MMS_COMPAREOC2					(0x5u << 4)
#define TIM5_CR2_MMS_COMPAREOC3					(0x6u << 4)
#define TIM5_CR2_MMS_COMPAREOC4					(0x7u << 4)
	/* Capture/compare DMA */
#define TIM5_CR2_CCDS						(1u << 3)
#define TIM5_CR2_CCDS_ONCOMPARE					(0x0u << 3)
#define TIM5_CR2_CCDS_ONUPDATE					(0x1u << 3)

	/* 0x08: slave mode control register */
	uint32_t volatile SMCR;
	/* External trigger polarity */
#define TIM5_SMCR_ETP						(1u << 15)
#define TIM5_SMCR_ETP_NOTINVERTED				(0x0u << 15)
#define TIM5_SMCR_ETP_INVERTED					(0x1u << 15)
	/* External clock enable */
#define TIM5_SMCR_ECE						(1u << 14)
#define TIM5_SMCR_ECE_DISABLED					(0x0u << 14)
#define TIM5_SMCR_ECE_ENABLED					(0x1u << 14)
	/* External trigger prescaler */
#define TIM5_SMCR_ETPS_Msk					(0x3u << 12)
#define TIM5_SMCR_ETPS_Pos					12
#define TIM5_SMCR_ETPS_DIV1					(0x0u << 12)
#define TIM5_SMCR_ETPS_DIV2					(0x1u << 12)
#define TIM5_SMCR_ETPS_DIV4					(0x2u << 12)
#define TIM5_SMCR_ETPS_DIV8					(0x3u << 12)
	/* External trigger filter */
#define TIM5_SMCR_ETF_Msk					(0xFu << 8)
#define TIM5_SMCR_ETF_Pos					8
#define TIM5_SMCR_ETF_NOFILTER					(0x0u << 8)
#define TIM5_SMCR_ETF_FCK_INT_N2				(0x1u << 8)
#define TIM5_SMCR_ETF_FCK_INT_N4				(0x2u << 8)
#define TIM5_SMCR_ETF_FCK_INT_N8				(0x3u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV2_N6				(0x4u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV2_N8				(0x5u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV4_N6				(0x6u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV4_N8				(0x7u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV8_N6				(0x8u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV8_N8				(0x9u << 8)
#define TIM5_SMCR_ETF_FDTS_DIV16_N5				(0xAu << 8)
#define TIM5_SMCR_ETF_FDTS_DIV16_N6				(0xBu << 8)
#define TIM5_SMCR_ETF_FDTS_DIV16_N8				(0xCu << 8)
#define TIM5_SMCR_ETF_FDTS_DIV32_N5				(0xDu << 8)
#define TIM5_SMCR_ETF_FDTS_DIV32_N6				(0xEu << 8)
#define TIM5_SMCR_ETF_FDTS_DIV32_N8				(0xFu << 8)
	/* Master/Slave mode */
#define TIM5_SMCR_MSM						(1u << 7)
#define TIM5_SMCR_MSM_NOSYNC					(0x0u << 7)
#define TIM5_SMCR_MSM_SYNC					(0x1u << 7)
	/* Trigger selection */
#define TIM5_SMCR_TS_Msk					(0x7u << 4)
#define TIM5_SMCR_TS_Pos					4
#define TIM5_SMCR_TS_ITR0					(0x0u << 4)
#define TIM5_SMCR_TS_ITR1					(0x1u << 4)
#define TIM5_SMCR_TS_ITR2					(0x2u << 4)
#define TIM5_SMCR_TS_TI1F_ED					(0x4u << 4)
#define TIM5_SMCR_TS_TI1FP1					(0x5u << 4)
#define TIM5_SMCR_TS_TI2FP2					(0x6u << 4)
#define TIM5_SMCR_TS_ETRF					(0x7u << 4)
	/* Slave mode selection */
#define TIM5_SMCR_SMS_Msk					(0x7u << 0)
#define TIM5_SMCR_SMS_Pos					0
#define TIM5_SMCR_SMS_DISABLED					(0x0u << 0)
#define TIM5_SMCR_SMS_ENCODER_MODE_1				(0x1u << 0)
#define TIM5_SMCR_SMS_ENCODER_MODE_2				(0x2u << 0)
#define TIM5_SMCR_SMS_ENCODER_MODE_3				(0x3u << 0)
#define TIM5_SMCR_SMS_RESET_MODE				(0x4u << 0)
#define TIM5_SMCR_SMS_GATED_MODE				(0x5u << 0)
#define TIM5_SMCR_SMS_TRIGGER_MODE				(0x6u << 0)
#define TIM5_SMCR_SMS_EXT_CLOCK_MODE				(0x7u << 0)

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Trigger DMA request enable */
#define TIM5_DIER_TDE						(1u << 14)
#define TIM5_DIER_TDE_DISABLED					(0x0u << 14)
#define TIM5_DIER_TDE_ENABLED					(0x1u << 14)
	/* Capture/Compare 4 DMA request */
#define TIM5_DIER_CC4DE						(1u << 12)
	/* Capture/Compare 3 DMA request */
#define TIM5_DIER_CC3DE						(1u << 11)
	/* Capture/Compare 2 DMA request */
#define TIM5_DIER_CC2DE						(1u << 10)
	/* Capture/Compare 1 DMA request */
#define TIM5_DIER_CC1DE						(1u << 9)
#define TIM5_DIER_CC1DE_DISABLED				(0x0u << 9)
#define TIM5_DIER_CC1DE_ENABLED					(0x1u << 9)
	/* Update DMA request enable */
#define TIM5_DIER_UDE						(1u << 8)
#define TIM5_DIER_UDE_DISABLED					(0x0u << 8)
#define TIM5_DIER_UDE_ENABLED					(0x1u << 8)
	/* Trigger interrupt enable */
#define TIM5_DIER_TIE						(1u << 6)
#define TIM5_DIER_TIE_DISABLED					(0x0u << 6)
#define TIM5_DIER_TIE_ENABLED					(0x1u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM5_DIER_CC4IE						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM5_DIER_CC3IE						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM5_DIER_CC2IE						(1u << 2)
	/* Capture/Compare 1 interrupt */
#define TIM5_DIER_CC1IE						(1u << 1)
#define TIM5_DIER_CC1IE_DISABLED				(0x0u << 1)
#define TIM5_DIER_CC1IE_ENABLED					(0x1u << 1)
	/* Update interrupt enable */
#define TIM5_DIER_UIE						(1u << 0)
#define TIM5_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM5_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/Compare 4 overcapture */
#define TIM5_SR_CC4OF						(1u << 12)
	/* Capture/Compare 3 overcapture */
#define TIM5_SR_CC3OF						(1u << 11)
	/* Capture/compare 2 overcapture */
#define TIM5_SR_CC2OF						(1u << 10)
	/* Capture/Compare 1 overcapture */
#define TIM5_SR_CC1OF						(1u << 9)
#define TIM5_SR_CC1OF_OVERCAPTURE				(0x1u << 9)
#define TIM5_SR_CC1OF_CLEAR					(0x0u << 9)
	/* Trigger interrupt flag */
#define TIM5_SR_TIF						(1u << 6)
#define TIM5_SR_TIF_NOTRIGGER					(0x0u << 6)
#define TIM5_SR_TIF_TRIGGER					(0x1u << 6)
#define TIM5_SR_TIF_CLEAR					(0x0u << 6)
	/* Capture/Compare 4 interrupt */
#define TIM5_SR_CC4IF						(1u << 4)
	/* Capture/Compare 3 interrupt */
#define TIM5_SR_CC3IF						(1u << 3)
	/* Capture/Compare 2 interrupt */
#define TIM5_SR_CC2IF						(1u << 2)
	/* Capture/compare 1 interrupt */
#define TIM5_SR_CC1IF						(1u << 1)
#define TIM5_SR_CC1IF_MATCH					(0x1u << 1)
#define TIM5_SR_CC1IF_CLEAR					(0x0u << 1)
	/* Update interrupt flag */
#define TIM5_SR_UIF						(1u << 0)
#define TIM5_SR_UIF_CLEAR					(0x0u << 0)
#define TIM5_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Trigger generation */
#define TIM5_EGR_TG						(1u << 6)
#define TIM5_EGR_TG_TRIGGER					(0x1u << 6)
	/* Capture/compare 4 */
#define TIM5_EGR_CC4G						(1u << 4)
	/* Capture/compare 3 */
#define TIM5_EGR_CC3G						(1u << 3)
	/* Capture/compare 2 */
#define TIM5_EGR_CC2G						(1u << 2)
	/* Capture/compare 1 */
#define TIM5_EGR_CC1G						(1u << 1)
#define TIM5_EGR_CC1G_TRIGGER					(0x1u << 1)
	/* Update generation */
#define TIM5_EGR_UG						(1u << 0)
#define TIM5_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* OC2CE */
#define TIM5_CCMR1_OUTPUT_OC2CE					(1u << 15)
	/* OC2M */
#define TIM5_CCMR1_OUTPUT_OC2M_Msk				(0x7u << 12)
#define TIM5_CCMR1_OUTPUT_OC2M_Pos				12
	/* OC2PE */
#define TIM5_CCMR1_OUTPUT_OC2PE					(1u << 11)
#define TIM5_CCMR1_OUTPUT_OC2PE_DISABLED			(0x0u << 11)
#define TIM5_CCMR1_OUTPUT_OC2PE_ENABLED				(0x1u << 11)
	/* OC2FE */
#define TIM5_CCMR1_OUTPUT_OC2FE					(1u << 10)
	/* CC2S */
#define TIM5_CCMR1_OUTPUT_CC2S_Msk				(0x3u << 8)
#define TIM5_CCMR1_OUTPUT_CC2S_Pos				8
#define TIM5_CCMR1_OUTPUT_CC2S_OUTPUT				(0x0u << 8)
	/* OC1CE */
#define TIM5_CCMR1_OUTPUT_OC1CE					(1u << 7)
	/* OC1M */
#define TIM5_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM5_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_PWMMODE1				(0x6u << 4)
#define TIM5_CCMR1_OUTPUT_OC1M_PWMMODE2				(0x7u << 4)
	/* OC1PE */
#define TIM5_CCMR1_OUTPUT_OC1PE					(1u << 3)
#define TIM5_CCMR1_OUTPUT_OC1PE_DISABLED			(0x0u << 3)
#define TIM5_CCMR1_OUTPUT_OC1PE_ENABLED				(0x1u << 3)
	/* OC1FE */
#define TIM5_CCMR1_OUTPUT_OC1FE					(1u << 2)
	/* CC1S */
#define TIM5_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM5_CCMR1_OUTPUT_CC1S_Pos				0
#define TIM5_CCMR1_OUTPUT_CC1S_OUTPUT				(0x0u << 0)

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 2 filter */
#define TIM5_CCMR1_INPUT_IC2F_Msk				(0xFu << 12)
#define TIM5_CCMR1_INPUT_IC2F_Pos				12
	/* Input capture 2 prescaler */
#define TIM5_CCMR1_INPUT_IC2PSC_Msk				(0x3u << 10)
#define TIM5_CCMR1_INPUT_IC2PSC_Pos				10
	/* Capture/Compare 2 */
#define TIM5_CCMR1_INPUT_CC2S_Msk				(0x3u << 8)
#define TIM5_CCMR1_INPUT_CC2S_Pos				8
#define TIM5_CCMR1_INPUT_CC2S_TI2				(0x1u << 8)
#define TIM5_CCMR1_INPUT_CC2S_TI1				(0x2u << 8)
#define TIM5_CCMR1_INPUT_CC2S_TRC				(0x3u << 8)
	/* Input capture 1 filter */
#define TIM5_CCMR1_INPUT_IC1F_Msk				(0xFu << 4)
#define TIM5_CCMR1_INPUT_IC1F_Pos				4
#define TIM5_CCMR1_INPUT_IC1F_NOFILTER				(0x0u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FCK_INT_N2			(0x1u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FCK_INT_N4			(0x2u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FCK_INT_N8			(0x3u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV2_N6			(0x4u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV2_N8			(0x5u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV4_N6			(0x6u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV4_N8			(0x7u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV8_N6			(0x8u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV8_N8			(0x9u << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV16_N5			(0xAu << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV16_N6			(0xBu << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV16_N8			(0xCu << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV32_N5			(0xDu << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV32_N6			(0xEu << 4)
#define TIM5_CCMR1_INPUT_IC1F_FDTS_DIV32_N8			(0xFu << 4)
	/* Input capture 1 prescaler */
#define TIM5_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM5_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM5_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM5_CCMR1_INPUT_CC1S_Pos				0
#define TIM5_CCMR1_INPUT_CC1S_TI1				(0x1u << 0)
#define TIM5_CCMR1_INPUT_CC1S_TI2				(0x2u << 0)
#define TIM5_CCMR1_INPUT_CC1S_TRC				(0x3u << 0)

	/* 0x1C: capture/compare mode register 2 (output */
	uint32_t volatile CCMR2_OUTPUT;
	/* O24CE */
#define TIM5_CCMR2_OUTPUT_OC4CE					(1u << 15)
	/* OC4M */
#define TIM5_CCMR2_OUTPUT_OC4M_Msk				(0x7u << 12)
#define TIM5_CCMR2_OUTPUT_OC4M_Pos				12
	/* OC4PE */
#define TIM5_CCMR2_OUTPUT_OC4PE					(1u << 11)
#define TIM5_CCMR2_OUTPUT_OC4PE_DISABLED			(0x0u << 11)
#define TIM5_CCMR2_OUTPUT_OC4PE_ENABLED				(0x1u << 11)
	/* OC4FE */
#define TIM5_CCMR2_OUTPUT_OC4FE					(1u << 10)
	/* CC4S */
#define TIM5_CCMR2_OUTPUT_CC4S_Msk				(0x3u << 8)
#define TIM5_CCMR2_OUTPUT_CC4S_Pos				8
#define TIM5_CCMR2_OUTPUT_CC4S_OUTPUT				(0x0u << 8)
	/* OC3CE */
#define TIM5_CCMR2_OUTPUT_OC3CE					(1u << 7)
	/* OC3M */
#define TIM5_CCMR2_OUTPUT_OC3M_Msk				(0x7u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_Pos				4
#define TIM5_CCMR2_OUTPUT_OC3M_FROZEN				(0x0u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_ACTIVEONMATCH			(0x1u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_INACTIVEONMATCH			(0x2u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_TOGGLE				(0x3u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_FORCEINACTIVE			(0x4u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_FORCEACTIVE			(0x5u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_PWMMODE1				(0x6u << 4)
#define TIM5_CCMR2_OUTPUT_OC3M_PWMMODE2				(0x7u << 4)
	/* OC3PE */
#define TIM5_CCMR2_OUTPUT_OC3PE					(1u << 3)
#define TIM5_CCMR2_OUTPUT_OC3PE_DISABLED			(0x0u << 3)
#define TIM5_CCMR2_OUTPUT_OC3PE_ENABLED				(0x1u << 3)
	/* OC3FE */
#define TIM5_CCMR2_OUTPUT_OC3FE					(1u << 2)
	/* CC3S */
#define TIM5_CCMR2_OUTPUT_CC3S_Msk				(0x3u << 0)
#define TIM5_CCMR2_OUTPUT_CC3S_Pos				0
#define TIM5_CCMR2_OUTPUT_CC3S_OUTPUT				(0x0u << 0)

	/* 0x1C: capture/compare mode register 2 (input */
	uint32_t volatile CCMR2_INPUT;
	/* Input capture 4 filter */
#define TIM5_CCMR2_INPUT_IC4F_Msk				(0xFu << 12)
#define TIM5_CCMR2_INPUT_IC4F_Pos				12
	/* Input capture 4 prescaler */
#define TIM5_CCMR2_INPUT_IC4PSC_Msk				(0x3u << 10)
#define TIM5_CCMR2_INPUT_IC4PSC_Pos				10
	/* Capture/Compare 4 */
#define TIM5_CCMR2_INPUT_CC4S_Msk				(0x3u << 8)
#define TIM5_CCMR2_INPUT_CC4S_Pos				8
#define TIM5_CCMR2_INPUT_CC4S_TI4				(0x1u << 8)
#define TIM5_CCMR2_INPUT_CC4S_TI3				(0x2u << 8)
#define TIM5_CCMR2_INPUT_CC4S_TRC				(0x3u << 8)
	/* Input capture 3 filter */
#define TIM5_CCMR2_INPUT_IC3F_Msk				(0xFu << 4)
#define TIM5_CCMR2_INPUT_IC3F_Pos				4
	/* Input capture 3 prescaler */
#define TIM5_CCMR2_INPUT_IC3PSC_Msk				(0x3u << 2)
#define TIM5_CCMR2_INPUT_IC3PSC_Pos				2
	/* Capture/compare 3 */
#define TIM5_CCMR2_INPUT_CC3S_Msk				(0x3u << 0)
#define TIM5_CCMR2_INPUT_CC3S_Pos				0
#define TIM5_CCMR2_INPUT_CC3S_TI3				(0x1u << 0)
#define TIM5_CCMR2_INPUT_CC3S_TI4				(0x2u << 0)
#define TIM5_CCMR2_INPUT_CC3S_TRC				(0x3u << 0)

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 4 output */
#define TIM5_CCER_CC4NP						(1u << 15)
	/* Capture/Compare 3 output */
#define TIM5_CCER_CC4P						(1u << 13)
	/* Capture/Compare 4 output */
#define TIM5_CCER_CC4E						(1u << 12)
	/* Capture/Compare 3 output */
#define TIM5_CCER_CC3NP						(1u << 11)
	/* Capture/Compare 3 output */
#define TIM5_CCER_CC3P						(1u << 9)
	/* Capture/Compare 3 output */
#define TIM5_CCER_CC3E						(1u << 8)
	/* Capture/Compare 2 output */
#define TIM5_CCER_CC2NP						(1u << 7)
	/* Capture/Compare 2 output */
#define TIM5_CCER_CC2P						(1u << 5)
	/* Capture/Compare 2 output */
#define TIM5_CCER_CC2E						(1u << 4)
	/* Capture/Compare 1 output */
#define TIM5_CCER_CC1NP						(1u << 3)
	/* Capture/Compare 1 output */
#define TIM5_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM5_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* Counter value */
#define TIM5_CNT_CNT_Msk					(0xFFFFFFFFu << 0)
#define TIM5_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM5_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM5_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM5_ARR_ARR_Msk					(0xFFFFFFFFu << 0)
#define TIM5_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED0[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR[4];
	/* Capture/Compare value */
#define TIM5_CCR_CCR_Msk					(0xFFFFFFFFu << 0)
#define TIM5_CCR_CCR_Pos					0

	/* 0x38 */
	uint8_t RESERVED1[0x48u-0x38u];

	/* 0x48: DMA control register */
	uint32_t volatile DCR;
	/* DMA burst length */
#define TIM5_DCR_DBL_Msk					(0x1Fu << 8)
#define TIM5_DCR_DBL_Pos					8
	/* DMA base address */
#define TIM5_DCR_DBA_Msk					(0x1Fu << 0)
#define TIM5_DCR_DBA_Pos					0

	/* 0x4C: DMA address for full transfer */
	uint32_t volatile DMAR;
	/* DMA register for burst */
#define TIM5_DMAR_DMAB_Msk					(0xFFFFu << 0)
#define TIM5_DMAR_DMAB_Pos					0

	/* 0x50: TIM5 option register */
	uint32_t volatile OR;
	/* Timer Input 4 remap */
#define TIM5_OR_IT4_RMP_Msk					(0x3u << 6)
#define TIM5_OR_IT4_RMP_Pos					6

};


#define TIM9 ((struct sdk_tim9 *)0x40014000)

struct sdk_tim9 {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Clock division */
#define TIM9_CR1_CKD_Msk					(0x3u << 8)
#define TIM9_CR1_CKD_Pos					8
#define TIM9_CR1_CKD_DIV1					(0x0u << 8)
#define TIM9_CR1_CKD_DIV2					(0x1u << 8)
#define TIM9_CR1_CKD_DIV4					(0x2u << 8)
	/* Auto-reload preload enable */
#define TIM9_CR1_ARPE						(1u << 7)
#define TIM9_CR1_ARPE_DISABLED					(0x0u << 7)
#define TIM9_CR1_ARPE_ENABLED					(0x1u << 7)
	/* One-pulse mode */
#define TIM9_CR1_OPM						(1u << 3)
#define TIM9_CR1_OPM_DISABLED					(0x0u << 3)
#define TIM9_CR1_OPM_ENABLED					(0x1u << 3)
	/* Update request source */
#define TIM9_CR1_URS						(1u << 2)
#define TIM9_CR1_URS_ANYEVENT					(0x0u << 2)
#define TIM9_CR1_URS_COUNTERONLY				(0x1u << 2)
	/* Update disable */
#define TIM9_CR1_UDIS						(1u << 1)
#define TIM9_CR1_UDIS_ENABLED					(0x0u << 1)
#define TIM9_CR1_UDIS_DISABLED					(0x1u << 1)
	/* Counter enable */
#define TIM9_CR1_CEN						(1u << 0)
#define TIM9_CR1_CEN_DISABLED					(0x0u << 0)
#define TIM9_CR1_CEN_ENABLED					(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* Master mode selection */
#define TIM9_CR2_MMS_Msk					(0x7u << 4)
#define TIM9_CR2_MMS_Pos					4

	/* 0x08: slave mode control register */
	uint32_t volatile SMCR;
	/* Master/Slave mode */
#define TIM9_SMCR_MSM						(1u << 7)
	/* Trigger selection */
#define TIM9_SMCR_TS_Msk					(0x7u << 4)
#define TIM9_SMCR_TS_Pos					4
	/* Slave mode selection */
#define TIM9_SMCR_SMS_Msk					(0x7u << 0)
#define TIM9_SMCR_SMS_Pos					0

	/* 0x0C: DMA/Interrupt enable register */
	uint32_t volatile DIER;
	/* Trigger interrupt enable */
#define TIM9_DIER_TIE						(1u << 6)
	/* Capture/Compare 2 interrupt */
#define TIM9_DIER_CC2IE						(1u << 2)
	/* Capture/Compare 1 interrupt */
#define TIM9_DIER_CC1IE						(1u << 1)
	/* Update interrupt enable */
#define TIM9_DIER_UIE						(1u << 0)
#define TIM9_DIER_UIE_DISABLED					(0x0u << 0)
#define TIM9_DIER_UIE_ENABLED					(0x1u << 0)

	/* 0x10: status register */
	uint32_t volatile SR;
	/* Capture/compare 2 overcapture */
#define TIM9_SR_CC2OF						(1u << 10)
	/* Capture/Compare 1 overcapture */
#define TIM9_SR_CC1OF						(1u << 9)
	/* Trigger interrupt flag */
#define TIM9_SR_TIF						(1u << 6)
	/* Capture/Compare 2 interrupt */
#define TIM9_SR_CC2IF						(1u << 2)
	/* Capture/compare 1 interrupt */
#define TIM9_SR_CC1IF						(1u << 1)
	/* Update interrupt flag */
#define TIM9_SR_UIF						(1u << 0)
#define TIM9_SR_UIF_CLEAR					(0x0u << 0)
#define TIM9_SR_UIF_UPDATEPENDING				(0x1u << 0)

	/* 0x14: event generation register */
	uint32_t volatile EGR;
	/* Trigger generation */
#define TIM9_EGR_TG						(1u << 6)
	/* Capture/compare 2 */
#define TIM9_EGR_CC2G						(1u << 2)
	/* Capture/compare 1 */
#define TIM9_EGR_CC1G						(1u << 1)
	/* Update generation */
#define TIM9_EGR_UG						(1u << 0)
#define TIM9_EGR_UG_UPDATE					(0x1u << 0)

	/* 0x18: capture/compare mode register 1 (output */
	uint32_t volatile CCMR1_OUTPUT;
	/* Output Compare 2 mode */
#define TIM9_CCMR1_OUTPUT_OC2M_Msk				(0x7u << 12)
#define TIM9_CCMR1_OUTPUT_OC2M_Pos				12
	/* Output Compare 2 preload */
#define TIM9_CCMR1_OUTPUT_OC2PE					(1u << 11)
	/* Output Compare 2 fast */
#define TIM9_CCMR1_OUTPUT_OC2FE					(1u << 10)
	/* Capture/Compare 2 */
#define TIM9_CCMR1_OUTPUT_CC2S_Msk				(0x3u << 8)
#define TIM9_CCMR1_OUTPUT_CC2S_Pos				8
	/* Output Compare 1 mode */
#define TIM9_CCMR1_OUTPUT_OC1M_Msk				(0x7u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_Pos				4
#define TIM9_CCMR1_OUTPUT_OC1M_FROZEN				(0x0u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_ACTIVEONMATCH			(0x1u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_INACTIVEONMATCH			(0x2u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_TOGGLE				(0x3u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_FORCEINACTIVE			(0x4u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_FORCEACTIVE			(0x5u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_PWMMODE1				(0x6u << 4)
#define TIM9_CCMR1_OUTPUT_OC1M_PWMMODE2				(0x7u << 4)
	/* Output Compare 1 preload */
#define TIM9_CCMR1_OUTPUT_OC1PE					(1u << 3)
	/* Output Compare 1 fast */
#define TIM9_CCMR1_OUTPUT_OC1FE					(1u << 2)
	/* Capture/Compare 1 */
#define TIM9_CCMR1_OUTPUT_CC1S_Msk				(0x3u << 0)
#define TIM9_CCMR1_OUTPUT_CC1S_Pos				0

	/* 0x18: capture/compare mode register 1 (input */
	uint32_t volatile CCMR1_INPUT;
	/* Input capture 2 filter */
#define TIM9_CCMR1_INPUT_IC2F_Msk				(0x7u << 12)
#define TIM9_CCMR1_INPUT_IC2F_Pos				12
	/* Input capture 2 prescaler */
#define TIM9_CCMR1_INPUT_IC2PSC_Msk				(0x3u << 10)
#define TIM9_CCMR1_INPUT_IC2PSC_Pos				10
	/* Capture/Compare 2 */
#define TIM9_CCMR1_INPUT_CC2S_Msk				(0x3u << 8)
#define TIM9_CCMR1_INPUT_CC2S_Pos				8
	/* Input capture 1 filter */
#define TIM9_CCMR1_INPUT_IC1F_Msk				(0x7u << 4)
#define TIM9_CCMR1_INPUT_IC1F_Pos				4
	/* Input capture 1 prescaler */
#define TIM9_CCMR1_INPUT_IC1PSC_Msk				(0x3u << 2)
#define TIM9_CCMR1_INPUT_IC1PSC_Pos				2
	/* Capture/Compare 1 */
#define TIM9_CCMR1_INPUT_CC1S_Msk				(0x3u << 0)
#define TIM9_CCMR1_INPUT_CC1S_Pos				0

	/* 0x1C */
	uint8_t RESERVED0[0x20u-0x1Cu];

	/* 0x20: capture/compare enable */
	uint32_t volatile CCER;
	/* Capture/Compare 2 output */
#define TIM9_CCER_CC2NP						(1u << 7)
	/* Capture/Compare 2 output */
#define TIM9_CCER_CC2P						(1u << 5)
	/* Capture/Compare 2 output */
#define TIM9_CCER_CC2E						(1u << 4)
	/* Capture/Compare 1 output */
#define TIM9_CCER_CC1NP						(1u << 3)
	/* Capture/Compare 1 output */
#define TIM9_CCER_CC1P						(1u << 1)
	/* Capture/Compare 1 output */
#define TIM9_CCER_CC1E						(1u << 0)

	/* 0x24: counter */
	uint32_t volatile CNT;
	/* counter value */
#define TIM9_CNT_CNT_Msk					(0xFFFFu << 0)
#define TIM9_CNT_CNT_Pos					0

	/* 0x28: prescaler */
	uint32_t volatile PSC;
	/* Prescaler value */
#define TIM9_PSC_PSC_Msk					(0xFFFFu << 0)
#define TIM9_PSC_PSC_Pos					0

	/* 0x2C: auto-reload register */
	uint32_t volatile ARR;
	/* Auto-reload value */
#define TIM9_ARR_ARR_Msk					(0xFFFFu << 0)
#define TIM9_ARR_ARR_Pos					0

	/* 0x30 */
	uint8_t RESERVED1[0x34u-0x30u];

	/* 0x34: capture/compare register */
	uint32_t volatile CCR[2];
	/* Capture/Compare value */
#define TIM9_CCR_CCR_Msk					(0xFFFFu << 0)
#define TIM9_CCR_CCR_Pos					0

};


#define USART1 ((struct sdk_usart *)0x40011000)
#define USART2 ((struct sdk_usart *)0x40004400)
#define USART6 ((struct sdk_usart *)0x40011400)

struct sdk_usart {

	/* 0x00: Status register */
	uint32_t volatile SR;
	/* CTS flag */
#define USART1_SR_CTS						(1u << 9)
	/* LIN break detection flag */
#define USART1_SR_LBD						(1u << 8)
	/* Transmit data register */
#define USART1_SR_TXE						(1u << 7)
	/* Transmission complete */
#define USART1_SR_TC						(1u << 6)
	/* Read data register not */
#define USART1_SR_RXNE						(1u << 5)
	/* IDLE line detected */
#define USART1_SR_IDLE						(1u << 4)
	/* Overrun error */
#define USART1_SR_ORE						(1u << 3)
	/* Noise detected flag */
#define USART1_SR_NF						(1u << 2)
	/* Framing error */
#define USART1_SR_FE						(1u << 1)
	/* Parity error */
#define USART1_SR_PE						(1u << 0)

	/* 0x04: Data register */
	uint32_t volatile DR;
	/* Data value */
#define USART1_DR_DR_Msk					(0x1FFu << 0)
#define USART1_DR_DR_Pos					0

	/* 0x08: Baud rate register */
	uint32_t volatile BRR;
	/* mantissa of USARTDIV */
#define USART1_BRR_DIV_MANTISSA_Msk				(0xFFFu << 4)
#define USART1_BRR_DIV_MANTISSA_Pos				4
	/* fraction of USARTDIV */
#define USART1_BRR_DIV_FRACTION_Msk				(0xFu << 0)
#define USART1_BRR_DIV_FRACTION_Pos				0

	/* 0x0C: Control register 1 */
	uint32_t volatile CR1;
	/* Oversampling mode */
#define USART1_CR1_OVER8					(1u << 15)
#define USART1_CR1_OVER8_OVERSAMPLE16				(0x0u << 15)
#define USART1_CR1_OVER8_OVERSAMPLE8				(0x1u << 15)
	/* USART enable */
#define USART1_CR1_UE						(1u << 13)
#define USART1_CR1_UE_DISABLED					(0x0u << 13)
#define USART1_CR1_UE_ENABLED					(0x1u << 13)
	/* Word length */
#define USART1_CR1_M						(1u << 12)
#define USART1_CR1_M_M8						(0x0u << 12)
#define USART1_CR1_M_M9						(0x1u << 12)
	/* Wakeup method */
#define USART1_CR1_WAKE						(1u << 11)
#define USART1_CR1_WAKE_IDLELINE				(0x0u << 11)
#define USART1_CR1_WAKE_ADDRESSMARK				(0x1u << 11)
	/* Parity control enable */
#define USART1_CR1_PCE						(1u << 10)
#define USART1_CR1_PCE_DISABLED					(0x0u << 10)
#define USART1_CR1_PCE_ENABLED					(0x1u << 10)
	/* Parity selection */
#define USART1_CR1_PS						(1u << 9)
#define USART1_CR1_PS_EVEN					(0x0u << 9)
#define USART1_CR1_PS_ODD					(0x1u << 9)
	/* PE interrupt enable */
#define USART1_CR1_PEIE						(1u << 8)
#define USART1_CR1_PEIE_DISABLED				(0x0u << 8)
#define USART1_CR1_PEIE_ENABLED					(0x1u << 8)
	/* TXE interrupt enable */
#define USART1_CR1_TXEIE					(1u << 7)
#define USART1_CR1_TXEIE_DISABLED				(0x0u << 7)
#define USART1_CR1_TXEIE_ENABLED				(0x1u << 7)
	/* Transmission complete interrupt */
#define USART1_CR1_TCIE						(1u << 6)
#define USART1_CR1_TCIE_DISABLED				(0x0u << 6)
#define USART1_CR1_TCIE_ENABLED					(0x1u << 6)
	/* RXNE interrupt enable */
#define USART1_CR1_RXNEIE					(1u << 5)
#define USART1_CR1_RXNEIE_DISABLED				(0x0u << 5)
#define USART1_CR1_RXNEIE_ENABLED				(0x1u << 5)
	/* IDLE interrupt enable */
#define USART1_CR1_IDLEIE					(1u << 4)
#define USART1_CR1_IDLEIE_DISABLED				(0x0u << 4)
#define USART1_CR1_IDLEIE_ENABLED				(0x1u << 4)
	/* Transmitter enable */
#define USART1_CR1_TE						(1u << 3)
#define USART1_CR1_TE_DISABLED					(0x0u << 3)
#define USART1_CR1_TE_ENABLED					(0x1u << 3)
	/* Receiver enable */
#define USART1_CR1_RE						(1u << 2)
#define USART1_CR1_RE_DISABLED					(0x0u << 2)
#define USART1_CR1_RE_ENABLED					(0x1u << 2)
	/* Receiver wakeup */
#define USART1_CR1_RWU						(1u << 1)
#define USART1_CR1_RWU_ACTIVE					(0x0u << 1)
#define USART1_CR1_RWU_MUTE					(0x1u << 1)
	/* Send break */
#define USART1_CR1_SBK						(1u << 0)
#define USART1_CR1_SBK_NOBREAK					(0x0u << 0)
#define USART1_CR1_SBK_BREAK					(0x1u << 0)

	/* 0x10: Control register 2 */
	uint32_t volatile CR2;
	/* LIN mode enable */
#define USART1_CR2_LINEN					(1u << 14)
#define USART1_CR2_LINEN_DISABLED				(0x0u << 14)
#define USART1_CR2_LINEN_ENABLED				(0x1u << 14)
	/* STOP bits */
#define USART1_CR2_STOP_Msk					(0x3u << 12)
#define USART1_CR2_STOP_Pos					12
#define USART1_CR2_STOP_STOP1					(0x0u << 12)
#define USART1_CR2_STOP_STOP0P5					(0x1u << 12)
#define USART1_CR2_STOP_STOP2					(0x2u << 12)
#define USART1_CR2_STOP_STOP1P5					(0x3u << 12)
	/* Clock enable */
#define USART1_CR2_CLKEN					(1u << 11)
#define USART1_CR2_CLKEN_DISABLED				(0x0u << 11)
#define USART1_CR2_CLKEN_ENABLED				(0x1u << 11)
	/* Clock polarity */
#define USART1_CR2_CPOL						(1u << 10)
#define USART1_CR2_CPOL_LOW					(0x0u << 10)
#define USART1_CR2_CPOL_HIGH					(0x1u << 10)
	/* Clock phase */
#define USART1_CR2_CPHA						(1u << 9)
#define USART1_CR2_CPHA_FIRST					(0x0u << 9)
#define USART1_CR2_CPHA_SECOND					(0x1u << 9)
	/* Last bit clock pulse */
#define USART1_CR2_LBCL						(1u << 8)
	/* LIN break detection interrupt */
#define USART1_CR2_LBDIE					(1u << 6)
#define USART1_CR2_LBDIE_DISABLED				(0x0u << 6)
#define USART1_CR2_LBDIE_ENABLED				(0x1u << 6)
	/* lin break detection length */
#define USART1_CR2_LBDL						(1u << 5)
#define USART1_CR2_LBDL_LBDL10					(0x0u << 5)
#define USART1_CR2_LBDL_LBDL11					(0x1u << 5)
	/* Address of the USART node */
#define USART1_CR2_ADD_Msk					(0xFu << 0)
#define USART1_CR2_ADD_Pos					0

	/* 0x14: Control register 3 */
	uint32_t volatile CR3;
	/* One sample bit method */
#define USART1_CR3_ONEBIT					(1u << 11)
#define USART1_CR3_ONEBIT_SAMPLE3				(0x0u << 11)
#define USART1_CR3_ONEBIT_SAMPLE1				(0x1u << 11)
	/* CTS interrupt enable */
#define USART1_CR3_CTSIE					(1u << 10)
#define USART1_CR3_CTSIE_DISABLED				(0x0u << 10)
#define USART1_CR3_CTSIE_ENABLED				(0x1u << 10)
	/* CTS enable */
#define USART1_CR3_CTSE						(1u << 9)
#define USART1_CR3_CTSE_DISABLED				(0x0u << 9)
#define USART1_CR3_CTSE_ENABLED					(0x1u << 9)
	/* RTS enable */
#define USART1_CR3_RTSE						(1u << 8)
#define USART1_CR3_RTSE_DISABLED				(0x0u << 8)
#define USART1_CR3_RTSE_ENABLED					(0x1u << 8)
	/* DMA enable transmitter */
#define USART1_CR3_DMAT						(1u << 7)
#define USART1_CR3_DMAT_DISABLED				(0x0u << 7)
#define USART1_CR3_DMAT_ENABLED					(0x1u << 7)
	/* DMA enable receiver */
#define USART1_CR3_DMAR						(1u << 6)
#define USART1_CR3_DMAR_DISABLED				(0x0u << 6)
#define USART1_CR3_DMAR_ENABLED					(0x1u << 6)
	/* Smartcard mode enable */
#define USART1_CR3_SCEN						(1u << 5)
#define USART1_CR3_SCEN_DISABLED				(0x0u << 5)
#define USART1_CR3_SCEN_ENABLED					(0x1u << 5)
	/* Smartcard NACK enable */
#define USART1_CR3_NACK						(1u << 4)
#define USART1_CR3_NACK_DISABLED				(0x0u << 4)
#define USART1_CR3_NACK_ENABLED					(0x1u << 4)
	/* Half-duplex selection */
#define USART1_CR3_HDSEL					(1u << 3)
#define USART1_CR3_HDSEL_FULLDUPLEX				(0x0u << 3)
#define USART1_CR3_HDSEL_HALFDUPLEX				(0x1u << 3)
	/* IrDA low-power */
#define USART1_CR3_IRLP						(1u << 2)
#define USART1_CR3_IRLP_NORMAL					(0x0u << 2)
#define USART1_CR3_IRLP_LOWPOWER				(0x1u << 2)
	/* IrDA mode enable */
#define USART1_CR3_IREN						(1u << 1)
#define USART1_CR3_IREN_DISABLED				(0x0u << 1)
#define USART1_CR3_IREN_ENABLED					(0x1u << 1)
	/* Error interrupt enable */
#define USART1_CR3_EIE						(1u << 0)
#define USART1_CR3_EIE_DISABLED					(0x0u << 0)
#define USART1_CR3_EIE_ENABLED					(0x1u << 0)

	/* 0x18: Guard time and prescaler */
	uint32_t volatile GTPR;
	/* Guard time value */
#define USART1_GTPR_GT_Msk					(0xFFu << 8)
#define USART1_GTPR_GT_Pos					8
	/* Prescaler value */
#define USART1_GTPR_PSC_Msk					(0xFFu << 0)
#define USART1_GTPR_PSC_Pos					0

};


#define WWDG ((struct sdk_wwdg *)0x40002C00)

struct sdk_wwdg {

	/* 0x00: Control register */
	uint32_t volatile CR;
	/* Activation bit */
#define WWDG_CR_WDGA						(1u << 7)
#define WWDG_CR_WDGA_DISABLED					(0x0u << 7)
#define WWDG_CR_WDGA_ENABLED					(0x1u << 7)
	/* 7-bit counter (MSB to LSB) */
#define WWDG_CR_T_Msk						(0x7Fu << 0)
#define WWDG_CR_T_Pos						0

	/* 0x04: Configuration register */
	uint32_t volatile CFR;
	/* Early wakeup interrupt */
#define WWDG_CFR_EWI						(1u << 9)
#define WWDG_CFR_EWI_ENABLE					(0x1u << 9)
	/* 7-bit window value */
#define WWDG_CFR_W_Msk						(0x7Fu << 0)
#define WWDG_CFR_W_Pos						0
	/* Timer base */
#define WWDG_CFR_WDGTB_Msk					(0x3u << 7)
#define WWDG_CFR_WDGTB_Pos					7
#define WWDG_CFR_WDGTB_DIV1					(0x0u << 7)
#define WWDG_CFR_WDGTB_DIV2					(0x1u << 7)
#define WWDG_CFR_WDGTB_DIV4					(0x2u << 7)
#define WWDG_CFR_WDGTB_DIV8					(0x3u << 7)

	/* 0x08: Status register */
	uint32_t volatile SR;
	/* Early wakeup interrupt */
#define WWDG_SR_EWIF						(1u << 0)
#define WWDG_SR_EWIF_PENDING					(0x1u << 0)
#define WWDG_SR_EWIF_FINISHED					(0x0u << 0)
#define WWDG_SR_EWIF_FINISHED					(0x0u << 0)

};


#define DMA1 ((struct sdk_dma *)0x40026000)
#define DMA2 ((struct sdk_dma *)0x40026400)

struct sdk_dma {

	/* 0x00: stream x configuration */
	uint32_t volatile CR;
	/* Channel selection */
#define DMA1_CR_CHSEL_Msk					(0x7u << 25)
#define DMA1_CR_CHSEL_Pos					25
	/* Memory burst transfer */
#define DMA1_CR_MBURST_Msk					(0x3u << 23)
#define DMA1_CR_MBURST_Pos					23
	/* Peripheral burst transfer */
#define DMA1_CR_PBURST_Msk					(0x3u << 21)
#define DMA1_CR_PBURST_Pos					21
#define DMA1_CR_PBURST_SINGLE					(0x0u << 21)
#define DMA1_CR_PBURST_INCR4					(0x1u << 21)
#define DMA1_CR_PBURST_INCR8					(0x2u << 21)
#define DMA1_CR_PBURST_INCR16					(0x3u << 21)
	/* Current target (only in double buffer */
#define DMA1_CR_CT						(1u << 19)
#define DMA1_CR_CT_MEMORY0					(0x0u << 19)
#define DMA1_CR_CT_MEMORY1					(0x1u << 19)
	/* Double buffer mode */
#define DMA1_CR_DBM						(1u << 18)
#define DMA1_CR_DBM_DISABLED					(0x0u << 18)
#define DMA1_CR_DBM_ENABLED					(0x1u << 18)
	/* Priority level */
#define DMA1_CR_PL_Msk						(0x3u << 16)
#define DMA1_CR_PL_Pos						16
#define DMA1_CR_PL_LOW						(0x0u << 16)
#define DMA1_CR_PL_MEDIUM					(0x1u << 16)
#define DMA1_CR_PL_HIGH						(0x2u << 16)
#define DMA1_CR_PL_VERYHIGH					(0x3u << 16)
	/* Peripheral increment offset */
#define DMA1_CR_PINCOS						(1u << 15)
#define DMA1_CR_PINCOS_PSIZE					(0x0u << 15)
#define DMA1_CR_PINCOS_FIXED4					(0x1u << 15)
	/* Memory data size */
#define DMA1_CR_MSIZE_Msk					(0x3u << 13)
#define DMA1_CR_MSIZE_Pos					13
	/* Peripheral data size */
#define DMA1_CR_PSIZE_Msk					(0x3u << 11)
#define DMA1_CR_PSIZE_Pos					11
#define DMA1_CR_PSIZE_BITS8					(0x0u << 11)
#define DMA1_CR_PSIZE_BITS16					(0x1u << 11)
#define DMA1_CR_PSIZE_BITS32					(0x2u << 11)
	/* Memory increment mode */
#define DMA1_CR_MINC						(1u << 10)
	/* Peripheral increment mode */
#define DMA1_CR_PINC						(1u << 9)
#define DMA1_CR_PINC_FIXED					(0x0u << 9)
#define DMA1_CR_PINC_INCREMENTED				(0x1u << 9)
	/* Circular mode */
#define DMA1_CR_CIRC						(1u << 8)
#define DMA1_CR_CIRC_DISABLED					(0x0u << 8)
#define DMA1_CR_CIRC_ENABLED					(0x1u << 8)
	/* Data transfer direction */
#define DMA1_CR_DIR_Msk						(0x3u << 6)
#define DMA1_CR_DIR_Pos						6
#define DMA1_CR_DIR_PERIPHERALTOMEMORY				(0x0u << 6)
#define DMA1_CR_DIR_MEMORYTOPERIPHERAL				(0x1u << 6)
#define DMA1_CR_DIR_MEMORYTOMEMORY				(0x2u << 6)
	/* Peripheral flow controller */
#define DMA1_CR_PFCTRL						(1u << 5)
#define DMA1_CR_PFCTRL_DMA					(0x0u << 5)
#define DMA1_CR_PFCTRL_PERIPHERAL				(0x1u << 5)
	/* Transfer complete interrupt */
#define DMA1_CR_TCIE						(1u << 4)
#define DMA1_CR_TCIE_DISABLED					(0x0u << 4)
#define DMA1_CR_TCIE_ENABLED					(0x1u << 4)
	/* Half transfer interrupt */
#define DMA1_CR_HTIE						(1u << 3)
#define DMA1_CR_HTIE_DISABLED					(0x0u << 3)
#define DMA1_CR_HTIE_ENABLED					(0x1u << 3)
	/* Transfer error interrupt */
#define DMA1_CR_TEIE						(1u << 2)
#define DMA1_CR_TEIE_DISABLED					(0x0u << 2)
#define DMA1_CR_TEIE_ENABLED					(0x1u << 2)
	/* Direct mode error interrupt */
#define DMA1_CR_DMEIE						(1u << 1)
#define DMA1_CR_DMEIE_DISABLED					(0x0u << 1)
#define DMA1_CR_DMEIE_ENABLED					(0x1u << 1)
	/* Stream enable / flag stream ready when */
#define DMA1_CR_EN						(1u << 0)
#define DMA1_CR_EN_DISABLED					(0x0u << 0)
#define DMA1_CR_EN_ENABLED					(0x1u << 0)

	/* 0x04: stream x number of data */
	uint32_t volatile NDTR;
	/* Number of data items to */
#define DMA1_NDTR_NDT_Msk					(0xFFFFu << 0)
#define DMA1_NDTR_NDT_Pos					0

	/* 0x08: stream x peripheral address */
	uint32_t volatile PAR;
	/* Peripheral address */
#define DMA1_PAR_PA_Msk						(0xFFFFFFFFu << 0)
#define DMA1_PAR_PA_Pos						0

	/* 0x0C: stream x memory 0 address */
	uint32_t volatile M0AR;
	/* Memory 0 address */
#define DMA1_M0AR_M0A_Msk					(0xFFFFFFFFu << 0)
#define DMA1_M0AR_M0A_Pos					0

	/* 0x10: stream x memory 1 address */
	uint32_t volatile M1AR;
	/* Memory 1 address (used in case of Double */
#define DMA1_M1AR_M1A_Msk					(0xFFFFFFFFu << 0)
#define DMA1_M1AR_M1A_Pos					0

	/* 0x14: stream x FIFO control register */
	uint32_t volatile FCR;
	/* FIFO error interrupt */
#define DMA1_FCR_FEIE						(1u << 7)
#define DMA1_FCR_FEIE_DISABLED					(0x0u << 7)
#define DMA1_FCR_FEIE_ENABLED					(0x1u << 7)
	/* FIFO status */
#define DMA1_FCR_FS_Msk						(0x7u << 3)
#define DMA1_FCR_FS_Pos						3
#define DMA1_FCR_FS_QUARTER1					(0x0u << 3)
#define DMA1_FCR_FS_QUARTER2					(0x1u << 3)
#define DMA1_FCR_FS_QUARTER3					(0x2u << 3)
#define DMA1_FCR_FS_QUARTER4					(0x3u << 3)
#define DMA1_FCR_FS_EMPTY					(0x4u << 3)
#define DMA1_FCR_FS_FULL					(0x5u << 3)
	/* Direct mode disable */
#define DMA1_FCR_DMDIS						(1u << 2)
#define DMA1_FCR_DMDIS_ENABLED					(0x0u << 2)
#define DMA1_FCR_DMDIS_DISABLED					(0x1u << 2)
	/* FIFO threshold selection */
#define DMA1_FCR_FTH_Msk					(0x3u << 0)
#define DMA1_FCR_FTH_Pos					0
#define DMA1_FCR_FTH_QUARTER					(0x0u << 0)
#define DMA1_FCR_FTH_HALF					(0x1u << 0)
#define DMA1_FCR_FTH_THREEQUARTERS				(0x2u << 0)
#define DMA1_FCR_FTH_FULL					(0x3u << 0)

	/* 0x00: low interrupt status register */
	uint32_t volatile const LISR;
	/* Stream x transfer complete interrupt */
#define DMA1_LISR_TCIF3						(1u << 27)
	/* Stream x half transfer interrupt flag */
#define DMA1_LISR_HTIF3						(1u << 26)
	/* Stream x transfer error interrupt flag */
#define DMA1_LISR_TEIF3						(1u << 25)
	/* Stream x direct mode error interrupt */
#define DMA1_LISR_DMEIF3					(1u << 24)
	/* Stream x FIFO error interrupt flag */
#define DMA1_LISR_FEIF3						(1u << 22)
	/* Stream x transfer complete interrupt */
#define DMA1_LISR_TCIF2						(1u << 21)
	/* Stream x half transfer interrupt flag */
#define DMA1_LISR_HTIF2						(1u << 20)
	/* Stream x transfer error interrupt flag */
#define DMA1_LISR_TEIF2						(1u << 19)
	/* Stream x direct mode error interrupt */
#define DMA1_LISR_DMEIF2					(1u << 18)
	/* Stream x FIFO error interrupt flag */
#define DMA1_LISR_FEIF2						(1u << 16)
	/* Stream x transfer complete interrupt */
#define DMA1_LISR_TCIF1						(1u << 11)
	/* Stream x half transfer interrupt flag */
#define DMA1_LISR_HTIF1						(1u << 10)
	/* Stream x transfer error interrupt flag */
#define DMA1_LISR_TEIF1						(1u << 9)
	/* Stream x direct mode error interrupt */
#define DMA1_LISR_DMEIF1					(1u << 8)
	/* Stream x FIFO error interrupt flag */
#define DMA1_LISR_FEIF1						(1u << 6)
	/* Stream x transfer complete interrupt */
#define DMA1_LISR_TCIF0						(1u << 5)
#define DMA1_LISR_TCIF0_NOTCOMPLETE				(0x0u << 5)
#define DMA1_LISR_TCIF0_COMPLETE				(0x1u << 5)
	/* Stream x half transfer interrupt flag */
#define DMA1_LISR_HTIF0						(1u << 4)
#define DMA1_LISR_HTIF0_NOTHALF					(0x0u << 4)
#define DMA1_LISR_HTIF0_HALF					(0x1u << 4)
	/* Stream x transfer error interrupt flag */
#define DMA1_LISR_TEIF0						(1u << 3)
#define DMA1_LISR_TEIF0_NOERROR					(0x0u << 3)
#define DMA1_LISR_TEIF0_ERROR					(0x1u << 3)
	/* Stream x direct mode error interrupt */
#define DMA1_LISR_DMEIF0					(1u << 2)
#define DMA1_LISR_DMEIF0_NOERROR				(0x0u << 2)
#define DMA1_LISR_DMEIF0_ERROR					(0x1u << 2)
	/* Stream x FIFO error interrupt flag */
#define DMA1_LISR_FEIF0						(1u << 0)
#define DMA1_LISR_FEIF0_NOERROR					(0x0u << 0)
#define DMA1_LISR_FEIF0_ERROR					(0x1u << 0)

	/* 0x04: high interrupt status register */
	uint32_t volatile const HISR;
	/* Stream x transfer complete interrupt */
#define DMA1_HISR_TCIF7						(1u << 27)
	/* Stream x half transfer interrupt flag */
#define DMA1_HISR_HTIF7						(1u << 26)
	/* Stream x transfer error interrupt flag */
#define DMA1_HISR_TEIF7						(1u << 25)
	/* Stream x direct mode error interrupt */
#define DMA1_HISR_DMEIF7					(1u << 24)
	/* Stream x FIFO error interrupt flag */
#define DMA1_HISR_FEIF7						(1u << 22)
	/* Stream x transfer complete interrupt */
#define DMA1_HISR_TCIF6						(1u << 21)
	/* Stream x half transfer interrupt flag */
#define DMA1_HISR_HTIF6						(1u << 20)
	/* Stream x transfer error interrupt flag */
#define DMA1_HISR_TEIF6						(1u << 19)
	/* Stream x direct mode error interrupt */
#define DMA1_HISR_DMEIF6					(1u << 18)
	/* Stream x FIFO error interrupt flag */
#define DMA1_HISR_FEIF6						(1u << 16)
	/* Stream x transfer complete interrupt */
#define DMA1_HISR_TCIF5						(1u << 11)
	/* Stream x half transfer interrupt flag */
#define DMA1_HISR_HTIF5						(1u << 10)
	/* Stream x transfer error interrupt flag */
#define DMA1_HISR_TEIF5						(1u << 9)
	/* Stream x direct mode error interrupt */
#define DMA1_HISR_DMEIF5					(1u << 8)
	/* Stream x FIFO error interrupt flag */
#define DMA1_HISR_FEIF5						(1u << 6)
	/* Stream x transfer complete interrupt */
#define DMA1_HISR_TCIF4						(1u << 5)
#define DMA1_HISR_TCIF4_NOTCOMPLETE				(0x0u << 5)
#define DMA1_HISR_TCIF4_COMPLETE				(0x1u << 5)
	/* Stream x half transfer interrupt flag */
#define DMA1_HISR_HTIF4						(1u << 4)
#define DMA1_HISR_HTIF4_NOTHALF					(0x0u << 4)
#define DMA1_HISR_HTIF4_HALF					(0x1u << 4)
	/* Stream x transfer error interrupt flag */
#define DMA1_HISR_TEIF4						(1u << 3)
#define DMA1_HISR_TEIF4_NOERROR					(0x0u << 3)
#define DMA1_HISR_TEIF4_ERROR					(0x1u << 3)
	/* Stream x direct mode error interrupt */
#define DMA1_HISR_DMEIF4					(1u << 2)
#define DMA1_HISR_DMEIF4_NOERROR				(0x0u << 2)
#define DMA1_HISR_DMEIF4_ERROR					(0x1u << 2)
	/* Stream x FIFO error interrupt flag */
#define DMA1_HISR_FEIF4						(1u << 0)
#define DMA1_HISR_FEIF4_NOERROR					(0x0u << 0)
#define DMA1_HISR_FEIF4_ERROR					(0x1u << 0)

	/* 0x08: low interrupt flag clear */
	uint32_t volatile LIFCR;
	/* Stream x clear transfer complete */
#define DMA1_LIFCR_CTCIF3					(1u << 27)
	/* Stream x clear half transfer interrupt */
#define DMA1_LIFCR_CHTIF3					(1u << 26)
	/* Stream x clear transfer error interrupt */
#define DMA1_LIFCR_CTEIF3					(1u << 25)
	/* Stream x clear direct mode error */
#define DMA1_LIFCR_CDMEIF3					(1u << 24)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_LIFCR_CFEIF3					(1u << 22)
	/* Stream x clear transfer complete */
#define DMA1_LIFCR_CTCIF2					(1u << 21)
	/* Stream x clear half transfer interrupt */
#define DMA1_LIFCR_CHTIF2					(1u << 20)
	/* Stream x clear transfer error interrupt */
#define DMA1_LIFCR_CTEIF2					(1u << 19)
	/* Stream x clear direct mode error */
#define DMA1_LIFCR_CDMEIF2					(1u << 18)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_LIFCR_CFEIF2					(1u << 16)
	/* Stream x clear transfer complete */
#define DMA1_LIFCR_CTCIF1					(1u << 11)
	/* Stream x clear half transfer interrupt */
#define DMA1_LIFCR_CHTIF1					(1u << 10)
	/* Stream x clear transfer error interrupt */
#define DMA1_LIFCR_CTEIF1					(1u << 9)
	/* Stream x clear direct mode error */
#define DMA1_LIFCR_CDMEIF1					(1u << 8)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_LIFCR_CFEIF1					(1u << 6)
	/* Stream x clear transfer complete */
#define DMA1_LIFCR_CTCIF0					(1u << 5)
#define DMA1_LIFCR_CTCIF0_CLEAR					(0x1u << 5)
	/* Stream x clear half transfer interrupt */
#define DMA1_LIFCR_CHTIF0					(1u << 4)
#define DMA1_LIFCR_CHTIF0_CLEAR					(0x1u << 4)
	/* Stream x clear transfer error interrupt */
#define DMA1_LIFCR_CTEIF0					(1u << 3)
#define DMA1_LIFCR_CTEIF0_CLEAR					(0x1u << 3)
	/* Stream x clear direct mode error */
#define DMA1_LIFCR_CDMEIF0					(1u << 2)
#define DMA1_LIFCR_CDMEIF0_CLEAR				(0x1u << 2)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_LIFCR_CFEIF0					(1u << 0)
#define DMA1_LIFCR_CFEIF0_CLEAR					(0x1u << 0)

	/* 0x0C: high interrupt flag clear */
	uint32_t volatile HIFCR;
	/* Stream x clear transfer complete */
#define DMA1_HIFCR_CTCIF7					(1u << 27)
	/* Stream x clear half transfer interrupt */
#define DMA1_HIFCR_CHTIF7					(1u << 26)
	/* Stream x clear transfer error interrupt */
#define DMA1_HIFCR_CTEIF7					(1u << 25)
	/* Stream x clear direct mode error */
#define DMA1_HIFCR_CDMEIF7					(1u << 24)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_HIFCR_CFEIF7					(1u << 22)
	/* Stream x clear transfer complete */
#define DMA1_HIFCR_CTCIF6					(1u << 21)
	/* Stream x clear half transfer interrupt */
#define DMA1_HIFCR_CHTIF6					(1u << 20)
	/* Stream x clear transfer error interrupt */
#define DMA1_HIFCR_CTEIF6					(1u << 19)
	/* Stream x clear direct mode error */
#define DMA1_HIFCR_CDMEIF6					(1u << 18)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_HIFCR_CFEIF6					(1u << 16)
	/* Stream x clear transfer complete */
#define DMA1_HIFCR_CTCIF5					(1u << 11)
	/* Stream x clear half transfer interrupt */
#define DMA1_HIFCR_CHTIF5					(1u << 10)
	/* Stream x clear transfer error interrupt */
#define DMA1_HIFCR_CTEIF5					(1u << 9)
	/* Stream x clear direct mode error */
#define DMA1_HIFCR_CDMEIF5					(1u << 8)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_HIFCR_CFEIF5					(1u << 6)
	/* Stream x clear transfer complete */
#define DMA1_HIFCR_CTCIF4					(1u << 5)
#define DMA1_HIFCR_CTCIF4_CLEAR					(0x1u << 5)
	/* Stream x clear half transfer interrupt */
#define DMA1_HIFCR_CHTIF4					(1u << 4)
#define DMA1_HIFCR_CHTIF4_CLEAR					(0x1u << 4)
	/* Stream x clear transfer error interrupt */
#define DMA1_HIFCR_CTEIF4					(1u << 3)
#define DMA1_HIFCR_CTEIF4_CLEAR					(0x1u << 3)
	/* Stream x clear direct mode error */
#define DMA1_HIFCR_CDMEIF4					(1u << 2)
#define DMA1_HIFCR_CDMEIF4_CLEAR				(0x1u << 2)
	/* Stream x clear FIFO error interrupt flag */
#define DMA1_HIFCR_CFEIF4					(1u << 0)
#define DMA1_HIFCR_CFEIF4_CLEAR					(0x1u << 0)

};


#define GPIOA ((struct sdk_gpio *)0x40020000)
#define GPIOB ((struct sdk_gpio *)0x40020400)
#define GPIOC ((struct sdk_gpio *)0x40020800)
#define GPIOD ((struct sdk_gpio *)0x00000000)
#define GPIOE ((struct sdk_gpio *)0x40021000)
#define GPIOH ((struct sdk_gpio *)0x40021C00)

struct sdk_gpio {

	/* 0x00: GPIO port mode register */
	uint32_t volatile MODER;
	/* Port x configuration bits */
#define GPIO_MODER_MODER_Msk(pin)				(0x3u << (pin) * 2)
#define GPIO_MODER_MODER_Pos(pin)				((pin) * 2)
#define GPIO_MODER_MODER_INPUT(pin)				(0x0u << (pin) * 2)
#define GPIO_MODER_MODER_OUTPUT(pin)				(0x1u << (pin) * 2)
#define GPIO_MODER_MODER_ALTERNATE(pin)				(0x2u << (pin) * 2)
#define GPIO_MODER_MODER_ANALOG(pin)				(0x3u << (pin) * 2)

	/* 0x04: GPIO port output type register */
	uint32_t volatile OTYPER;
	/* Port x configuration bits */
#define GPIO_OTYPER_OT(pin)					(1u << (pin))

	/* 0x08: GPIO port output speed */
	uint32_t volatile OSPEEDR;
	/* Port x configuration bits */
#define GPIO_OSPEEDR_OSPEEDR_Msk(pin)				(0x3u << (pin) * 2)
#define GPIO_OSPEEDR_OSPEEDR_Pos(pin)				((pin) * 2)
#define GPIO_OSPEEDR_OSPEEDR_LOWSPEED(pin)			(0x0u << (pin) * 2)
#define GPIO_OSPEEDR_OSPEEDR_MEDIUMSPEED(pin)			(0x1u << (pin) * 2)
#define GPIO_OSPEEDR_OSPEEDR_HIGHSPEED(pin)			(0x2u << (pin) * 2)
#define GPIO_OSPEEDR_OSPEEDR_VERYHIGHSPEED(pin)			(0x3u << (pin) * 2)

	/* 0x0C: GPIO port pull-up/pull-down */
	uint32_t volatile PUPDR;
	/* Port x configuration bits */
#define GPIO_PUPDR_PUPDR_Msk(pin)				(0x3u << (pin) * 2)
#define GPIO_PUPDR_PUPDR_Pos(pin)				((pin) * 2)
#define GPIO_PUPDR_PUPDR_FLOATING(pin)				(0x0u << (pin) * 2)
#define GPIO_PUPDR_PUPDR_PULLUP(pin)				(0x1u << (pin) * 2)
#define GPIO_PUPDR_PUPDR_PULLDOWN(pin)				(0x2u << (pin) * 2)

	/* 0x10: GPIO port input data register */
	uint32_t volatile const IDR;
	/* Port input data */
#define GPIO_IDR_IDR(pin)					(1u << (pin))

	/* 0x14: GPIO port output data register */
	uint32_t volatile ODR;
	/* Port output data */
#define GPIO_ODR_ODR(pin)					(1u << (pin))

	/* 0x18: GPIO port bit set/reset */
	uint32_t volatile BSRR;
	/* Port x set bit y */
#define GPIO_BSRR_RESET(pin)					(0x1u << 16 + (pin))
	/* Port x set bit y */
#define GPIO_BSRR_SET(pin)					(0x1u << (pin))

	/* 0x1C: GPIO port configuration lock */
	uint32_t volatile LCKR;
	/* Port x lock bit y */
#define GPIO_LCKR_LCKK						(1u << 16)
#define GPIO_LCKR_LOCKED(pin)					(1u << (pin))

	/* 0x20: GPIO alternate function low */
	uint64_t volatile AFR;
	/* Alternate function selection for port x */
#define GPIO_AFR_AFR_Msk(pin)					(0xFu << (pin))
#define GPIO_AFR_AFR_Pos(pin)					(pin)
#define GPIO_AFR_AFR_AF0(pin)					(0x0u << (pin) * 4)
#define GPIO_AFR_AFR_AF1(pin)					(0x1u << (pin) * 4)
#define GPIO_AFR_AFR_AF2(pin)					(0x2u << (pin) * 4)
#define GPIO_AFR_AFR_AF3(pin)					(0x3u << (pin) * 4)
#define GPIO_AFR_AFR_AF4(pin)					(0x4u << (pin) * 4)
#define GPIO_AFR_AFR_AF5(pin)					(0x5u << (pin) * 4)
#define GPIO_AFR_AFR_AF6(pin)					(0x6u << (pin) * 4)
#define GPIO_AFR_AFR_AF7(pin)					(0x7u << (pin) * 4)
#define GPIO_AFR_AFR_AF8(pin)					(0x8u << (pin) * 4)
#define GPIO_AFR_AFR_AF9(pin)					(0x9u << (pin) * 4)
#define GPIO_AFR_AFR_AF10(pin)					(0xAu << (pin) * 4)
#define GPIO_AFR_AFR_AF11(pin)					(0xBu << (pin) * 4)
#define GPIO_AFR_AFR_AF12(pin)					(0xCu << (pin) * 4)
#define GPIO_AFR_AFR_AF13(pin)					(0xDu << (pin) * 4)
#define GPIO_AFR_AFR_AF14(pin)					(0xEu << (pin) * 4)
#define GPIO_AFR_AFR_AF15(pin)					(0xFu << (pin) * 4)

};


#define I2C1 ((struct sdk_i2c *)0x40005400)
#define I2C2 ((struct sdk_i2c *)0x40005800)
#define I2C3 ((struct sdk_i2c *)0x40005C00)

struct sdk_i2c {

	/* 0x00: Control register 1 */
	uint32_t volatile CR1;
	/* Software reset */
#define I2C1_CR1_SWRST						(1u << 15)
#define I2C1_CR1_SWRST_NOTRESET					(0x0u << 15)
#define I2C1_CR1_SWRST_RESET					(0x1u << 15)
	/* SMBus alert */
#define I2C1_CR1_ALERT						(1u << 13)
#define I2C1_CR1_ALERT_RELEASE					(0x0u << 13)
#define I2C1_CR1_ALERT_DRIVE					(0x1u << 13)
	/* Packet error checking */
#define I2C1_CR1_PEC						(1u << 12)
#define I2C1_CR1_PEC_DISABLED					(0x0u << 12)
#define I2C1_CR1_PEC_ENABLED					(0x1u << 12)
	/* Acknowledge/PEC Position (for data */
#define I2C1_CR1_POS						(1u << 11)
#define I2C1_CR1_POS_CURRENT					(0x0u << 11)
#define I2C1_CR1_POS_NEXT					(0x1u << 11)
	/* Acknowledge enable */
#define I2C1_CR1_ACK						(1u << 10)
#define I2C1_CR1_ACK_NAK					(0x0u << 10)
#define I2C1_CR1_ACK_ACK					(0x1u << 10)
	/* Stop generation */
#define I2C1_CR1_STOP						(1u << 9)
#define I2C1_CR1_STOP_NOSTOP					(0x0u << 9)
#define I2C1_CR1_STOP_STOP					(0x1u << 9)
	/* Start generation */
#define I2C1_CR1_START						(1u << 8)
#define I2C1_CR1_START_NOSTART					(0x0u << 8)
#define I2C1_CR1_START_START					(0x1u << 8)
	/* Clock stretching disable (Slave */
#define I2C1_CR1_NOSTRETCH					(1u << 7)
#define I2C1_CR1_NOSTRETCH_ENABLED				(0x0u << 7)
#define I2C1_CR1_NOSTRETCH_DISABLED				(0x1u << 7)
	/* General call enable */
#define I2C1_CR1_ENGC						(1u << 6)
#define I2C1_CR1_ENGC_DISABLED					(0x0u << 6)
#define I2C1_CR1_ENGC_ENABLED					(0x1u << 6)
	/* PEC enable */
#define I2C1_CR1_ENPEC						(1u << 5)
#define I2C1_CR1_ENPEC_DISABLED					(0x0u << 5)
#define I2C1_CR1_ENPEC_ENABLED					(0x1u << 5)
	/* ARP enable */
#define I2C1_CR1_ENARP						(1u << 4)
#define I2C1_CR1_ENARP_DISABLED					(0x0u << 4)
#define I2C1_CR1_ENARP_ENABLED					(0x1u << 4)
	/* SMBus type */
#define I2C1_CR1_SMBTYPE					(1u << 3)
#define I2C1_CR1_SMBTYPE_DEVICE					(0x0u << 3)
#define I2C1_CR1_SMBTYPE_HOST					(0x1u << 3)
	/* SMBus mode */
#define I2C1_CR1_SMBUS						(1u << 1)
#define I2C1_CR1_SMBUS_I2C					(0x0u << 1)
#define I2C1_CR1_SMBUS_SMBUS					(0x1u << 1)
	/* Peripheral enable */
#define I2C1_CR1_PE						(1u << 0)
#define I2C1_CR1_PE_DISABLED					(0x0u << 0)
#define I2C1_CR1_PE_ENABLED					(0x1u << 0)

	/* 0x04: Control register 2 */
	uint32_t volatile CR2;
	/* DMA last transfer */
#define I2C1_CR2_LAST						(1u << 12)
#define I2C1_CR2_LAST_NOTLAST					(0x0u << 12)
#define I2C1_CR2_LAST_LAST					(0x1u << 12)
	/* DMA requests enable */
#define I2C1_CR2_DMAEN						(1u << 11)
#define I2C1_CR2_DMAEN_DISABLED					(0x0u << 11)
#define I2C1_CR2_DMAEN_ENABLED					(0x1u << 11)
	/* Buffer interrupt enable */
#define I2C1_CR2_ITBUFEN					(1u << 10)
#define I2C1_CR2_ITBUFEN_DISABLED				(0x0u << 10)
#define I2C1_CR2_ITBUFEN_ENABLED				(0x1u << 10)
	/* Event interrupt enable */
#define I2C1_CR2_ITEVTEN					(1u << 9)
#define I2C1_CR2_ITEVTEN_DISABLED				(0x0u << 9)
#define I2C1_CR2_ITEVTEN_ENABLED				(0x1u << 9)
	/* Error interrupt enable */
#define I2C1_CR2_ITERREN					(1u << 8)
#define I2C1_CR2_ITERREN_DISABLED				(0x0u << 8)
#define I2C1_CR2_ITERREN_ENABLED				(0x1u << 8)
	/* Peripheral clock frequency */
#define I2C1_CR2_FREQ_Msk					(0x3Fu << 0)
#define I2C1_CR2_FREQ_Pos					0

	/* 0x08: Own address register 1 */
	uint32_t volatile OAR1;
	/* Addressing mode (slave */
#define I2C1_OAR1_ADDMODE					(1u << 15)
#define I2C1_OAR1_ADDMODE_ADD7					(0x0u << 15)
#define I2C1_OAR1_ADDMODE_ADD10					(0x1u << 15)
	/* Interface address */
#define I2C1_OAR1_ADD_Msk					(0x3FFu << 0)
#define I2C1_OAR1_ADD_Pos					0

	/* 0x0C: Own address register 2 */
	uint32_t volatile OAR2;
	/* Interface address */
#define I2C1_OAR2_ADD2_Msk					(0x7Fu << 1)
#define I2C1_OAR2_ADD2_Pos					1
	/* Dual addressing mode */
#define I2C1_OAR2_ENDUAL					(1u << 0)
#define I2C1_OAR2_ENDUAL_SINGLE					(0x0u << 0)
#define I2C1_OAR2_ENDUAL_DUAL					(0x1u << 0)

	/* 0x10: Data register */
	uint32_t volatile DR;
	/* 8-bit data register */
#define I2C1_DR_DR_Msk						(0xFFu << 0)
#define I2C1_DR_DR_Pos						0

	/* 0x14: Status register 1 */
	uint32_t volatile SR1;
	/* SMBus alert */
#define I2C1_SR1_SMBALERT					(1u << 15)
#define I2C1_SR1_SMBALERT_NOALERT				(0x0u << 15)
#define I2C1_SR1_SMBALERT_ALERT					(0x1u << 15)
	/* Timeout or Tlow error */
#define I2C1_SR1_TIMEOUT					(1u << 14)
#define I2C1_SR1_TIMEOUT_NOTIMEOUT				(0x0u << 14)
#define I2C1_SR1_TIMEOUT_TIMEOUT				(0x1u << 14)
	/* PEC Error in reception */
#define I2C1_SR1_PECERR						(1u << 12)
#define I2C1_SR1_PECERR_NOERROR					(0x0u << 12)
#define I2C1_SR1_PECERR_ERROR					(0x1u << 12)
	/* Overrun/Underrun */
#define I2C1_SR1_OVR						(1u << 11)
#define I2C1_SR1_OVR_NOOVERRUN					(0x0u << 11)
#define I2C1_SR1_OVR_OVERRUN					(0x1u << 11)
	/* Acknowledge failure */
#define I2C1_SR1_AF						(1u << 10)
#define I2C1_SR1_AF_NOFAILURE					(0x0u << 10)
#define I2C1_SR1_AF_FAILURE					(0x1u << 10)
	/* Arbitration lost (master */
#define I2C1_SR1_ARLO						(1u << 9)
#define I2C1_SR1_ARLO_NOLOST					(0x0u << 9)
#define I2C1_SR1_ARLO_LOST					(0x1u << 9)
	/* Bus error */
#define I2C1_SR1_BERR						(1u << 8)
#define I2C1_SR1_BERR_NOERROR					(0x0u << 8)
#define I2C1_SR1_BERR_ERROR					(0x1u << 8)
	/* Data register empty */
#define I2C1_SR1_TXE						(1u << 7)
#define I2C1_SR1_TXE_NOTEMPTY					(0x0u << 7)
#define I2C1_SR1_TXE_EMPTY					(0x1u << 7)
	/* Data register not empty */
#define I2C1_SR1_RXNE						(1u << 6)
#define I2C1_SR1_RXNE_EMPTY					(0x0u << 6)
#define I2C1_SR1_RXNE_NOTEMPTY					(0x1u << 6)
	/* Stop detection (slave */
#define I2C1_SR1_STOPF						(1u << 4)
#define I2C1_SR1_STOPF_NOSTOP					(0x0u << 4)
#define I2C1_SR1_STOPF_STOP					(0x1u << 4)
	/* 10-bit header sent (Master */
#define I2C1_SR1_ADD10						(1u << 3)
	/* Byte transfer finished */
#define I2C1_SR1_BTF						(1u << 2)
#define I2C1_SR1_BTF_NOTFINISHED				(0x0u << 2)
#define I2C1_SR1_BTF_FINISHED					(0x1u << 2)
	/* Address sent (master mode)/matched */
#define I2C1_SR1_ADDR						(1u << 1)
#define I2C1_SR1_ADDR_NOTMATCH					(0x0u << 1)
#define I2C1_SR1_ADDR_MATCH					(0x1u << 1)
	/* Start bit (Master mode) */
#define I2C1_SR1_SB						(1u << 0)
#define I2C1_SR1_SB_NOSTART					(0x0u << 0)
#define I2C1_SR1_SB_START					(0x1u << 0)

	/* 0x18: Status register 2 */
	uint32_t volatile const SR2;
	/* acket error checking */
#define I2C1_SR2_PEC_Msk					(0xFFu << 8)
#define I2C1_SR2_PEC_Pos					8
	/* Dual flag (Slave mode) */
#define I2C1_SR2_DUALF						(1u << 7)
	/* SMBus host header (Slave */
#define I2C1_SR2_SMBHOST					(1u << 6)
	/* SMBus device default address (Slave */
#define I2C1_SR2_SMBDEFAULT					(1u << 5)
	/* General call address (Slave */
#define I2C1_SR2_GENCALL					(1u << 4)
	/* Transmitter/receiver */
#define I2C1_SR2_TRA						(1u << 2)
	/* Bus busy */
#define I2C1_SR2_BUSY						(1u << 1)
	/* Master/slave */
#define I2C1_SR2_MSL						(1u << 0)

	/* 0x1C: Clock control register */
	uint32_t volatile CCR;
	/* I2C master mode selection */
#define I2C1_CCR_F_S						(1u << 15)
#define I2C1_CCR_F_S_STANDARD					(0x0u << 15)
#define I2C1_CCR_F_S_FAST					(0x1u << 15)
	/* Fast mode duty cycle */
#define I2C1_CCR_DUTY						(1u << 14)
#define I2C1_CCR_DUTY_DUTY2_1					(0x0u << 14)
#define I2C1_CCR_DUTY_DUTY16_9					(0x1u << 14)
	/* Clock control register in Fast/Standard */
#define I2C1_CCR_CCR_Msk					(0xFFFu << 0)
#define I2C1_CCR_CCR_Pos					0

	/* 0x20: TRISE register */
	uint32_t volatile TRISE;
	/* Maximum rise time in Fast/Standard mode */
#define I2C1_TRISE_TRISE_Msk					(0x3Fu << 0)
#define I2C1_TRISE_TRISE_Pos					0

	/* 0x24: FLTR register */
	uint32_t volatile FLTR;
	/* Analog noise filter */
#define I2C1_FLTR_ANOFF						(1u << 4)
#define I2C1_FLTR_ANOFF_ENABLED					(0x0u << 4)
#define I2C1_FLTR_ANOFF_DISABLED				(0x1u << 4)
	/* Digital noise filter */
#define I2C1_FLTR_DNF_Msk					(0xFu << 0)
#define I2C1_FLTR_DNF_Pos					0
#define I2C1_FLTR_DNF_NOFILTER					(0x0u << 0)
#define I2C1_FLTR_DNF_FILTER1					(0x1u << 0)
#define I2C1_FLTR_DNF_FILTER2					(0x2u << 0)
#define I2C1_FLTR_DNF_FILTER3					(0x3u << 0)
#define I2C1_FLTR_DNF_FILTER4					(0x4u << 0)
#define I2C1_FLTR_DNF_FILTER5					(0x5u << 0)
#define I2C1_FLTR_DNF_FILTER6					(0x6u << 0)
#define I2C1_FLTR_DNF_FILTER7					(0x7u << 0)
#define I2C1_FLTR_DNF_FILTER8					(0x8u << 0)
#define I2C1_FLTR_DNF_FILTER9					(0x9u << 0)
#define I2C1_FLTR_DNF_FILTER10					(0xAu << 0)
#define I2C1_FLTR_DNF_FILTER11					(0xBu << 0)
#define I2C1_FLTR_DNF_FILTER12					(0xCu << 0)
#define I2C1_FLTR_DNF_FILTER13					(0xDu << 0)
#define I2C1_FLTR_DNF_FILTER14					(0xEu << 0)
#define I2C1_FLTR_DNF_FILTER15					(0xFu << 0)

};


#define I2S2EXT ((struct sdk_i2s2ext *)0x40003400)
#define I2S3EXT ((struct sdk_i2s3ext *)0x40004000)


#define SPI1 ((struct sdk_spi *)0x40013000)
#define SPI2 ((struct sdk_spi *)0x40003800)
#define SPI3 ((struct sdk_spi *)0x40003C00)
#define SPI4 ((struct sdk_spi *)0x40013400)
#define SPI5 ((struct sdk_spi *)0x40015000)

struct sdk_spi {

	/* 0x00: control register 1 */
	uint32_t volatile CR1;
	/* Bidirectional data mode */
#define SPI1_CR1_BIDIMODE					(1u << 15)
#define SPI1_CR1_BIDIMODE_UNIDIRECTIONAL			(0x0u << 15)
#define SPI1_CR1_BIDIMODE_BIDIRECTIONAL				(0x1u << 15)
	/* Output enable in bidirectional */
#define SPI1_CR1_BIDIOE						(1u << 14)
#define SPI1_CR1_BIDIOE_OUTPUTDISABLED				(0x0u << 14)
#define SPI1_CR1_BIDIOE_OUTPUTENABLED				(0x1u << 14)
	/* Hardware CRC calculation */
#define SPI1_CR1_CRCEN						(1u << 13)
#define SPI1_CR1_CRCEN_DISABLED					(0x0u << 13)
#define SPI1_CR1_CRCEN_ENABLED					(0x1u << 13)
	/* CRC transfer next */
#define SPI1_CR1_CRCNEXT					(1u << 12)
#define SPI1_CR1_CRCNEXT_TXBUFFER				(0x0u << 12)
#define SPI1_CR1_CRCNEXT_CRC					(0x1u << 12)
	/* Data frame format */
#define SPI1_CR1_DFF						(1u << 11)
#define SPI1_CR1_DFF_EIGHTBIT					(0x0u << 11)
#define SPI1_CR1_DFF_SIXTEENBIT					(0x1u << 11)
	/* Receive only */
#define SPI1_CR1_RXONLY						(1u << 10)
#define SPI1_CR1_RXONLY_FULLDUPLEX				(0x0u << 10)
#define SPI1_CR1_RXONLY_OUTPUTDISABLED				(0x1u << 10)
	/* Software slave management */
#define SPI1_CR1_SSM						(1u << 9)
#define SPI1_CR1_SSM_DISABLED					(0x0u << 9)
#define SPI1_CR1_SSM_ENABLED					(0x1u << 9)
	/* Internal slave select */
#define SPI1_CR1_SSI						(1u << 8)
#define SPI1_CR1_SSI_SLAVESELECTED				(0x0u << 8)
#define SPI1_CR1_SSI_SLAVENOTSELECTED				(0x1u << 8)
	/* Frame format */
#define SPI1_CR1_LSBFIRST					(1u << 7)
#define SPI1_CR1_LSBFIRST_MSBFIRST				(0x0u << 7)
#define SPI1_CR1_LSBFIRST_LSBFIRST				(0x1u << 7)
	/* SPI enable */
#define SPI1_CR1_SPE						(1u << 6)
#define SPI1_CR1_SPE_DISABLED					(0x0u << 6)
#define SPI1_CR1_SPE_ENABLED					(0x1u << 6)
	/* Baud rate control */
#define SPI1_CR1_BR_Msk						(0x7u << 3)
#define SPI1_CR1_BR_Pos						3
#define SPI1_CR1_BR_DIV2					(0x0u << 3)
#define SPI1_CR1_BR_DIV4					(0x1u << 3)
#define SPI1_CR1_BR_DIV8					(0x2u << 3)
#define SPI1_CR1_BR_DIV16					(0x3u << 3)
#define SPI1_CR1_BR_DIV32					(0x4u << 3)
#define SPI1_CR1_BR_DIV64					(0x5u << 3)
#define SPI1_CR1_BR_DIV128					(0x6u << 3)
#define SPI1_CR1_BR_DIV256					(0x7u << 3)
	/* Master selection */
#define SPI1_CR1_MSTR						(1u << 2)
#define SPI1_CR1_MSTR_SLAVE					(0x0u << 2)
#define SPI1_CR1_MSTR_MASTER					(0x1u << 2)
	/* Clock polarity */
#define SPI1_CR1_CPOL						(1u << 1)
#define SPI1_CR1_CPOL_IDLELOW					(0x0u << 1)
#define SPI1_CR1_CPOL_IDLEHIGH					(0x1u << 1)
	/* Clock phase */
#define SPI1_CR1_CPHA						(1u << 0)
#define SPI1_CR1_CPHA_FIRSTEDGE					(0x0u << 0)
#define SPI1_CR1_CPHA_SECONDEDGE				(0x1u << 0)

	/* 0x04: control register 2 */
	uint32_t volatile CR2;
	/* Tx buffer empty interrupt */
#define SPI1_CR2_TXEIE						(1u << 7)
#define SPI1_CR2_TXEIE_MASKED					(0x0u << 7)
#define SPI1_CR2_TXEIE_NOTMASKED				(0x1u << 7)
	/* RX buffer not empty interrupt */
#define SPI1_CR2_RXNEIE						(1u << 6)
#define SPI1_CR2_RXNEIE_MASKED					(0x0u << 6)
#define SPI1_CR2_RXNEIE_NOTMASKED				(0x1u << 6)
	/* Error interrupt enable */
#define SPI1_CR2_ERRIE						(1u << 5)
#define SPI1_CR2_ERRIE_MASKED					(0x0u << 5)
#define SPI1_CR2_ERRIE_NOTMASKED				(0x1u << 5)
	/* Frame format */
#define SPI1_CR2_FRF						(1u << 4)
#define SPI1_CR2_FRF_MOTOROLA					(0x0u << 4)
#define SPI1_CR2_FRF_TI						(0x1u << 4)
	/* SS output enable */
#define SPI1_CR2_SSOE						(1u << 2)
#define SPI1_CR2_SSOE_DISABLED					(0x0u << 2)
#define SPI1_CR2_SSOE_ENABLED					(0x1u << 2)
	/* Tx buffer DMA enable */
#define SPI1_CR2_TXDMAEN					(1u << 1)
#define SPI1_CR2_TXDMAEN_DISABLED				(0x0u << 1)
#define SPI1_CR2_TXDMAEN_ENABLED				(0x1u << 1)
	/* Rx buffer DMA enable */
#define SPI1_CR2_RXDMAEN					(1u << 0)
#define SPI1_CR2_RXDMAEN_DISABLED				(0x0u << 0)
#define SPI1_CR2_RXDMAEN_ENABLED				(0x1u << 0)

	/* 0x08: status register */
	uint32_t volatile SR;
	/* TI frame format error */
#define SPI1_SR_FRE						(1u << 8)
#define SPI1_SR_FRE_NOERROR					(0x0u << 8)
#define SPI1_SR_FRE_ERROR					(0x1u << 8)
	/* Busy flag */
#define SPI1_SR_BSY						(1u << 7)
#define SPI1_SR_BSY_NOTBUSY					(0x0u << 7)
#define SPI1_SR_BSY_BUSY					(0x1u << 7)
	/* Overrun flag */
#define SPI1_SR_OVR						(1u << 6)
#define SPI1_SR_OVR_NOOVERRUN					(0x0u << 6)
#define SPI1_SR_OVR_OVERRUN					(0x1u << 6)
	/* Mode fault */
#define SPI1_SR_MODF						(1u << 5)
#define SPI1_SR_MODF_NOFAULT					(0x0u << 5)
#define SPI1_SR_MODF_FAULT					(0x1u << 5)
	/* CRC error flag */
#define SPI1_SR_CRCERR						(1u << 4)
#define SPI1_SR_CRCERR_MATCH					(0x0u << 4)
#define SPI1_SR_CRCERR_NOMATCH					(0x1u << 4)
	/* Underrun flag */
#define SPI1_SR_UDR						(1u << 3)
#define SPI1_SR_UDR_NOUNDERRUN					(0x0u << 3)
#define SPI1_SR_UDR_UNDERRUN					(0x1u << 3)
	/* Channel side */
#define SPI1_SR_CHSIDE						(1u << 2)
#define SPI1_SR_CHSIDE_LEFT					(0x0u << 2)
#define SPI1_SR_CHSIDE_RIGHT					(0x1u << 2)
	/* Transmit buffer empty */
#define SPI1_SR_TXE						(1u << 1)
#define SPI1_SR_TXE_NOTEMPTY					(0x0u << 1)
#define SPI1_SR_TXE_EMPTY					(0x1u << 1)
	/* Receive buffer not empty */
#define SPI1_SR_RXNE						(1u << 0)
#define SPI1_SR_RXNE_EMPTY					(0x0u << 0)
#define SPI1_SR_RXNE_NOTEMPTY					(0x1u << 0)

	/* 0x0C: data register */
	uint32_t volatile DR;
	/* Data register */
#define SPI1_DR_DR_Msk						(0xFFFFu << 0)
#define SPI1_DR_DR_Pos						0

	/* 0x10: CRC polynomial register */
	uint32_t volatile CRCPR;
	/* CRC polynomial register */
#define SPI1_CRCPR_CRCPOLY_Msk					(0xFFFFu << 0)
#define SPI1_CRCPR_CRCPOLY_Pos					0

	/* 0x14: RX CRC register */
	uint32_t volatile const RXCRCR;
	/* Rx CRC register */
#define SPI1_RXCRCR_RXCRC_Msk					(0xFFFFu << 0)
#define SPI1_RXCRCR_RXCRC_Pos					0

	/* 0x18: TX CRC register */
	uint32_t volatile const TXCRCR;
	/* Tx CRC register */
#define SPI1_TXCRCR_TXCRC_Msk					(0xFFFFu << 0)
#define SPI1_TXCRCR_TXCRC_Pos					0

	/* 0x1C: I2S configuration register */
	uint32_t volatile I2SCFGR;
	/* I2S mode selection */
#define SPI1_I2SCFGR_I2SMOD					(1u << 11)
#define SPI1_I2SCFGR_I2SMOD_SPIMODE				(0x0u << 11)
#define SPI1_I2SCFGR_I2SMOD_I2SMODE				(0x1u << 11)
	/* I2S Enable */
#define SPI1_I2SCFGR_I2SE					(1u << 10)
#define SPI1_I2SCFGR_I2SE_DISABLED				(0x0u << 10)
#define SPI1_I2SCFGR_I2SE_ENABLED				(0x1u << 10)
	/* I2S configuration mode */
#define SPI1_I2SCFGR_I2SCFG_Msk					(0x3u << 8)
#define SPI1_I2SCFGR_I2SCFG_Pos					8
#define SPI1_I2SCFGR_I2SCFG_SLAVETX				(0x0u << 8)
#define SPI1_I2SCFGR_I2SCFG_SLAVERX				(0x1u << 8)
#define SPI1_I2SCFGR_I2SCFG_MASTERTX				(0x2u << 8)
#define SPI1_I2SCFGR_I2SCFG_MASTERRX				(0x3u << 8)
	/* PCM frame synchronization */
#define SPI1_I2SCFGR_PCMSYNC					(1u << 7)
#define SPI1_I2SCFGR_PCMSYNC_SHORT				(0x0u << 7)
#define SPI1_I2SCFGR_PCMSYNC_LONG				(0x1u << 7)
	/* I2S standard selection */
#define SPI1_I2SCFGR_I2SSTD_Msk					(0x3u << 4)
#define SPI1_I2SCFGR_I2SSTD_Pos					4
#define SPI1_I2SCFGR_I2SSTD_PHILIPS				(0x0u << 4)
#define SPI1_I2SCFGR_I2SSTD_MSB					(0x1u << 4)
#define SPI1_I2SCFGR_I2SSTD_LSB					(0x2u << 4)
#define SPI1_I2SCFGR_I2SSTD_PCM					(0x3u << 4)
	/* Steady state clock */
#define SPI1_I2SCFGR_CKPOL					(1u << 3)
#define SPI1_I2SCFGR_CKPOL_IDLELOW				(0x0u << 3)
#define SPI1_I2SCFGR_CKPOL_IDLEHIGH				(0x1u << 3)
	/* Data length to be */
#define SPI1_I2SCFGR_DATLEN_Msk					(0x3u << 1)
#define SPI1_I2SCFGR_DATLEN_Pos					1
#define SPI1_I2SCFGR_DATLEN_SIXTEENBIT				(0x0u << 1)
#define SPI1_I2SCFGR_DATLEN_TWENTYFOURBIT			(0x1u << 1)
#define SPI1_I2SCFGR_DATLEN_THIRTYTWOBIT			(0x2u << 1)
	/* Channel length (number of bits per audio */
#define SPI1_I2SCFGR_CHLEN					(1u << 0)
#define SPI1_I2SCFGR_CHLEN_SIXTEENBIT				(0x0u << 0)
#define SPI1_I2SCFGR_CHLEN_THIRTYTWOBIT				(0x1u << 0)

	/* 0x20: I2S prescaler register */
	uint32_t volatile I2SPR;
	/* Master clock output enable */
#define SPI1_I2SPR_MCKOE					(1u << 9)
#define SPI1_I2SPR_MCKOE_DISABLED				(0x0u << 9)
#define SPI1_I2SPR_MCKOE_ENABLED				(0x1u << 9)
	/* Odd factor for the */
#define SPI1_I2SPR_ODD						(1u << 8)
#define SPI1_I2SPR_ODD_EVEN					(0x0u << 8)
#define SPI1_I2SPR_ODD_ODD					(0x1u << 8)
	/* I2S Linear prescaler */
#define SPI1_I2SPR_I2SDIV_Msk					(0xFFu << 0)
#define SPI1_I2SPR_I2SDIV_Pos					0

};


#define NVIC ((struct sdk_nvic *)0xE000E100)

struct sdk_nvic {

	/* 0x00: Interrupt Set-Enable Register */
	uint32_t volatile ISER0;
	/* SETENA */
#define NVIC_ISER0_SETENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISER0_SETENA_Pos					0

	/* 0x04: Interrupt Set-Enable Register */
	uint32_t volatile ISER1;
	/* SETENA */
#define NVIC_ISER1_SETENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISER1_SETENA_Pos					0

	/* 0x08: Interrupt Set-Enable Register */
	uint32_t volatile ISER2;
	/* SETENA */
#define NVIC_ISER2_SETENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISER2_SETENA_Pos					0

	/* 0x0C */
	uint8_t RESERVED0[0x80u-0x0Cu];

	/* 0x80: Interrupt Clear-Enable */
	uint32_t volatile ICER0;
	/* CLRENA */
#define NVIC_ICER0_CLRENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICER0_CLRENA_Pos					0

	/* 0x84: Interrupt Clear-Enable */
	uint32_t volatile ICER1;
	/* CLRENA */
#define NVIC_ICER1_CLRENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICER1_CLRENA_Pos					0

	/* 0x88: Interrupt Clear-Enable */
	uint32_t volatile ICER2;
	/* CLRENA */
#define NVIC_ICER2_CLRENA_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICER2_CLRENA_Pos					0

	/* 0x8C */
	uint8_t RESERVED1[0x100u-0x8Cu];

	/* 0x100: Interrupt Set-Pending Register */
	uint32_t volatile ISPR0;
	/* SETPEND */
#define NVIC_ISPR0_SETPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISPR0_SETPEND_Pos					0

	/* 0x104: Interrupt Set-Pending Register */
	uint32_t volatile ISPR1;
	/* SETPEND */
#define NVIC_ISPR1_SETPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISPR1_SETPEND_Pos					0

	/* 0x108: Interrupt Set-Pending Register */
	uint32_t volatile ISPR2;
	/* SETPEND */
#define NVIC_ISPR2_SETPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ISPR2_SETPEND_Pos					0

	/* 0x10C */
	uint8_t RESERVED2[0x180u-0x10Cu];

	/* 0x180: Interrupt Clear-Pending */
	uint32_t volatile ICPR0;
	/* CLRPEND */
#define NVIC_ICPR0_CLRPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICPR0_CLRPEND_Pos					0

	/* 0x184: Interrupt Clear-Pending */
	uint32_t volatile ICPR1;
	/* CLRPEND */
#define NVIC_ICPR1_CLRPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICPR1_CLRPEND_Pos					0

	/* 0x188: Interrupt Clear-Pending */
	uint32_t volatile ICPR2;
	/* CLRPEND */
#define NVIC_ICPR2_CLRPEND_Msk					(0xFFFFFFFFu << 0)
#define NVIC_ICPR2_CLRPEND_Pos					0

	/* 0x18C */
	uint8_t RESERVED3[0x200u-0x18Cu];

	/* 0x200: Interrupt Active Bit Register */
	uint32_t volatile const IABR0;
	/* ACTIVE */
#define NVIC_IABR0_ACTIVE_Msk					(0xFFFFFFFFu << 0)
#define NVIC_IABR0_ACTIVE_Pos					0

	/* 0x204: Interrupt Active Bit Register */
	uint32_t volatile const IABR1;
	/* ACTIVE */
#define NVIC_IABR1_ACTIVE_Msk					(0xFFFFFFFFu << 0)
#define NVIC_IABR1_ACTIVE_Pos					0

	/* 0x208: Interrupt Active Bit Register */
	uint32_t volatile const IABR2;
	/* ACTIVE */
#define NVIC_IABR2_ACTIVE_Msk					(0xFFFFFFFFu << 0)
#define NVIC_IABR2_ACTIVE_Pos					0

	/* 0x20C */
	uint8_t RESERVED4[0x300u-0x20Cu];

	/* 0x300: Interrupt Priority Register */
	uint32_t volatile IPR0;
	/* IPR_N0 */
#define NVIC_IPR0_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR0_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR0_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR0_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR0_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR0_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR0_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR0_IPR_N3_Pos					24

	/* 0x304: Interrupt Priority Register */
	uint32_t volatile IPR1;
	/* IPR_N0 */
#define NVIC_IPR1_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR1_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR1_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR1_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR1_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR1_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR1_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR1_IPR_N3_Pos					24

	/* 0x308: Interrupt Priority Register */
	uint32_t volatile IPR2;
	/* IPR_N0 */
#define NVIC_IPR2_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR2_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR2_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR2_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR2_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR2_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR2_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR2_IPR_N3_Pos					24

	/* 0x30C: Interrupt Priority Register */
	uint32_t volatile IPR3;
	/* IPR_N0 */
#define NVIC_IPR3_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR3_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR3_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR3_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR3_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR3_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR3_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR3_IPR_N3_Pos					24

	/* 0x310: Interrupt Priority Register */
	uint32_t volatile IPR4;
	/* IPR_N0 */
#define NVIC_IPR4_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR4_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR4_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR4_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR4_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR4_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR4_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR4_IPR_N3_Pos					24

	/* 0x314: Interrupt Priority Register */
	uint32_t volatile IPR5;
	/* IPR_N0 */
#define NVIC_IPR5_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR5_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR5_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR5_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR5_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR5_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR5_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR5_IPR_N3_Pos					24

	/* 0x318: Interrupt Priority Register */
	uint32_t volatile IPR6;
	/* IPR_N0 */
#define NVIC_IPR6_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR6_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR6_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR6_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR6_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR6_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR6_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR6_IPR_N3_Pos					24

	/* 0x31C: Interrupt Priority Register */
	uint32_t volatile IPR7;
	/* IPR_N0 */
#define NVIC_IPR7_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR7_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR7_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR7_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR7_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR7_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR7_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR7_IPR_N3_Pos					24

	/* 0x320: Interrupt Priority Register */
	uint32_t volatile IPR8;
	/* IPR_N0 */
#define NVIC_IPR8_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR8_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR8_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR8_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR8_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR8_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR8_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR8_IPR_N3_Pos					24

	/* 0x324: Interrupt Priority Register */
	uint32_t volatile IPR9;
	/* IPR_N0 */
#define NVIC_IPR9_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR9_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR9_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR9_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR9_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR9_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR9_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR9_IPR_N3_Pos					24

	/* 0x328: Interrupt Priority Register */
	uint32_t volatile IPR10;
	/* IPR_N0 */
#define NVIC_IPR10_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR10_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR10_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR10_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR10_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR10_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR10_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR10_IPR_N3_Pos					24

	/* 0x32C: Interrupt Priority Register */
	uint32_t volatile IPR11;
	/* IPR_N0 */
#define NVIC_IPR11_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR11_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR11_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR11_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR11_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR11_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR11_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR11_IPR_N3_Pos					24

	/* 0x330: Interrupt Priority Register */
	uint32_t volatile IPR12;
	/* IPR_N0 */
#define NVIC_IPR12_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR12_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR12_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR12_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR12_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR12_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR12_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR12_IPR_N3_Pos					24

	/* 0x334: Interrupt Priority Register */
	uint32_t volatile IPR13;
	/* IPR_N0 */
#define NVIC_IPR13_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR13_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR13_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR13_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR13_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR13_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR13_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR13_IPR_N3_Pos					24

	/* 0x338: Interrupt Priority Register */
	uint32_t volatile IPR14;
	/* IPR_N0 */
#define NVIC_IPR14_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR14_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR14_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR14_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR14_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR14_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR14_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR14_IPR_N3_Pos					24

	/* 0x33C: Interrupt Priority Register */
	uint32_t volatile IPR15;
	/* IPR_N0 */
#define NVIC_IPR15_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR15_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR15_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR15_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR15_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR15_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR15_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR15_IPR_N3_Pos					24

	/* 0x340: Interrupt Priority Register */
	uint32_t volatile IPR16;
	/* IPR_N0 */
#define NVIC_IPR16_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR16_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR16_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR16_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR16_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR16_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR16_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR16_IPR_N3_Pos					24

	/* 0x344: Interrupt Priority Register */
	uint32_t volatile IPR17;
	/* IPR_N0 */
#define NVIC_IPR17_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR17_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR17_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR17_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR17_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR17_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR17_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR17_IPR_N3_Pos					24

	/* 0x348: Interrupt Priority Register */
	uint32_t volatile IPR18;
	/* IPR_N0 */
#define NVIC_IPR18_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR18_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR18_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR18_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR18_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR18_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR18_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR18_IPR_N3_Pos					24

	/* 0x34C: Interrupt Priority Register */
	uint32_t volatile IPR19;
	/* IPR_N0 */
#define NVIC_IPR19_IPR_N0_Msk					(0xFFu << 0)
#define NVIC_IPR19_IPR_N0_Pos					0
	/* IPR_N1 */
#define NVIC_IPR19_IPR_N1_Msk					(0xFFu << 8)
#define NVIC_IPR19_IPR_N1_Pos					8
	/* IPR_N2 */
#define NVIC_IPR19_IPR_N2_Msk					(0xFFu << 16)
#define NVIC_IPR19_IPR_N2_Pos					16
	/* IPR_N3 */
#define NVIC_IPR19_IPR_N3_Msk					(0xFFu << 24)
#define NVIC_IPR19_IPR_N3_Pos					24

};


#define FPU ((struct sdk_fpu *)0xE000EF34)

struct sdk_fpu {

	/* 0x00: Floating-point context control */
	uint32_t volatile FPCCR;
	/* LSPACT */
#define FPU_FPCCR_LSPACT					(1u << 0)
	/* USER */
#define FPU_FPCCR_USER						(1u << 1)
	/* THREAD */
#define FPU_FPCCR_THREAD					(1u << 3)
	/* HFRDY */
#define FPU_FPCCR_HFRDY						(1u << 4)
	/* MMRDY */
#define FPU_FPCCR_MMRDY						(1u << 5)
	/* BFRDY */
#define FPU_FPCCR_BFRDY						(1u << 6)
	/* MONRDY */
#define FPU_FPCCR_MONRDY					(1u << 8)
	/* LSPEN */
#define FPU_FPCCR_LSPEN						(1u << 30)
	/* ASPEN */
#define FPU_FPCCR_ASPEN						(1u << 31)

	/* 0x04: Floating-point context address */
	uint32_t volatile FPCAR;
	/* Location of unpopulated */
#define FPU_FPCAR_ADDRESS_Msk					(0x1FFFFFFFu << 3)
#define FPU_FPCAR_ADDRESS_Pos					3

	/* 0x08: Floating-point status control */
	uint32_t volatile FPSCR;
	/* Invalid operation cumulative exception */
#define FPU_FPSCR_IOC						(1u << 0)
	/* Division by zero cumulative exception */
#define FPU_FPSCR_DZC						(1u << 1)
	/* Overflow cumulative exception */
#define FPU_FPSCR_OFC						(1u << 2)
	/* Underflow cumulative exception */
#define FPU_FPSCR_UFC						(1u << 3)
	/* Inexact cumulative exception */
#define FPU_FPSCR_IXC						(1u << 4)
	/* Input denormal cumulative exception */
#define FPU_FPSCR_IDC						(1u << 7)
	/* Rounding Mode control */
#define FPU_FPSCR_RMODE_Msk					(0x3u << 22)
#define FPU_FPSCR_RMODE_Pos					22
	/* Flush-to-zero mode control */
#define FPU_FPSCR_FZ						(1u << 24)
	/* Default NaN mode control */
#define FPU_FPSCR_DN						(1u << 25)
	/* Alternative half-precision control */
#define FPU_FPSCR_AHP						(1u << 26)
	/* Overflow condition code */
#define FPU_FPSCR_V						(1u << 28)
	/* Carry condition code flag */
#define FPU_FPSCR_C						(1u << 29)
	/* Zero condition code flag */
#define FPU_FPSCR_Z						(1u << 30)
	/* Negative condition code */
#define FPU_FPSCR_N						(1u << 31)

};


#define MPU ((struct sdk_mpu *)0xE000ED90)

struct sdk_mpu {

	/* 0x00: MPU type register */
	uint32_t volatile const TYPER;
	/* Separate flag */
#define MPU_TYPER_SEPARATE					(1u << 0)
	/* Number of MPU data regions */
#define MPU_TYPER_DREGION_Msk					(0xFFu << 8)
#define MPU_TYPER_DREGION_Pos					8
	/* Number of MPU instruction */
#define MPU_TYPER_IREGION_Msk					(0xFFu << 16)
#define MPU_TYPER_IREGION_Pos					16

	/* 0x04: MPU control register */
	uint32_t volatile const CTRL;
	/* Enables the MPU */
#define MPU_CTRL_ENABLE						(1u << 0)
	/* Enables the operation of MPU during hard */
#define MPU_CTRL_HFNMIENA					(1u << 1)
	/* Enable priviliged software access to */
#define MPU_CTRL_PRIVDEFENA					(1u << 2)

	/* 0x08: MPU region number register */
	uint32_t volatile RNR;
	/* MPU region */
#define MPU_RNR_REGION_Msk					(0xFFu << 0)
#define MPU_RNR_REGION_Pos					0

	/* 0x0C: MPU region base address */
	uint32_t volatile RBAR;
	/* MPU region field */
#define MPU_RBAR_REGION_Msk					(0xFu << 0)
#define MPU_RBAR_REGION_Pos					0
	/* MPU region number valid */
#define MPU_RBAR_VALID						(1u << 4)
	/* Region base address field */
#define MPU_RBAR_ADDR_Msk					(0x7FFFFFFu << 5)
#define MPU_RBAR_ADDR_Pos					5

	/* 0x10: MPU region attribute and size */
	uint32_t volatile RASR;
	/* Region enable bit. */
#define MPU_RASR_ENABLE						(1u << 0)
	/* Size of the MPU protection */
#define MPU_RASR_SIZE_Msk					(0x1Fu << 1)
#define MPU_RASR_SIZE_Pos					1
	/* Subregion disable bits */
#define MPU_RASR_SRD_Msk					(0xFFu << 8)
#define MPU_RASR_SRD_Pos					8
	/* memory attribute */
#define MPU_RASR_B						(1u << 16)
	/* memory attribute */
#define MPU_RASR_C						(1u << 17)
	/* Shareable memory attribute */
#define MPU_RASR_S						(1u << 18)
	/* memory attribute */
#define MPU_RASR_TEX_Msk					(0x7u << 19)
#define MPU_RASR_TEX_Pos					19
	/* Access permission */
#define MPU_RASR_AP_Msk						(0x7u << 24)
#define MPU_RASR_AP_Pos						24
	/* Instruction access disable */
#define MPU_RASR_XN						(1u << 28)

};


#define STK ((struct sdk_stk *)0xE000E010)

struct sdk_stk {

	/* 0x00: SysTick control and status */
	uint32_t volatile CTRL;
	/* Counter enable */
#define STK_CTRL_ENABLE						(1u << 0)
	/* SysTick exception request */
#define STK_CTRL_TICKINT					(1u << 1)
	/* Clock source selection */
#define STK_CTRL_CLKSOURCE					(1u << 2)
	/* COUNTFLAG */
#define STK_CTRL_COUNTFLAG					(1u << 16)

	/* 0x04: SysTick reload value register */
	uint32_t volatile LOAD;
	/* RELOAD value */
#define STK_LOAD_RELOAD_Msk					(0xFFFFFFu << 0)
#define STK_LOAD_RELOAD_Pos					0

	/* 0x08: SysTick current value register */
	uint32_t volatile VAL;
	/* Current counter value */
#define STK_VAL_CURRENT_Msk					(0xFFFFFFu << 0)
#define STK_VAL_CURRENT_Pos					0

	/* 0x0C: SysTick calibration value */
	uint32_t volatile CALIB;
	/* Calibration value */
#define STK_CALIB_TENMS_Msk					(0xFFFFFFu << 0)
#define STK_CALIB_TENMS_Pos					0
	/* SKEW flag: Indicates whether the TENMS */
#define STK_CALIB_SKEW						(1u << 30)
	/* NOREF flag. */
#define STK_CALIB_NOREF						(1u << 31)

};


#define SCB ((struct sdk_scb *)0xE000ED00)

struct sdk_scb {

	/* 0x00: CPUID base register */
	uint32_t volatile const CPUID;
	/* Revision number */
#define SCB_CPUID_REVISION_Msk					(0xFu << 0)
#define SCB_CPUID_REVISION_Pos					0
	/* Part number of the */
#define SCB_CPUID_PARTNO_Msk					(0xFFFu << 4)
#define SCB_CPUID_PARTNO_Pos					4
	/* Reads as 0xF */
#define SCB_CPUID_CONSTANT_Msk					(0xFu << 16)
#define SCB_CPUID_CONSTANT_Pos					16
	/* Variant number */
#define SCB_CPUID_VARIANT_Msk					(0xFu << 20)
#define SCB_CPUID_VARIANT_Pos					20
	/* Implementer code */
#define SCB_CPUID_IMPLEMENTER_Msk				(0xFFu << 24)
#define SCB_CPUID_IMPLEMENTER_Pos				24

	/* 0x04: Interrupt control and state */
	uint32_t volatile ICSR;
	/* Active vector */
#define SCB_ICSR_VECTACTIVE_Msk					(0x1FFu << 0)
#define SCB_ICSR_VECTACTIVE_Pos					0
	/* Return to base level */
#define SCB_ICSR_RETTOBASE					(1u << 11)
	/* Pending vector */
#define SCB_ICSR_VECTPENDING_Msk				(0x7Fu << 12)
#define SCB_ICSR_VECTPENDING_Pos				12
	/* Interrupt pending flag */
#define SCB_ICSR_ISRPENDING					(1u << 22)
	/* SysTick exception clear-pending */
#define SCB_ICSR_PENDSTCLR					(1u << 25)
	/* SysTick exception set-pending */
#define SCB_ICSR_PENDSTSET					(1u << 26)
	/* PendSV clear-pending bit */
#define SCB_ICSR_PENDSVCLR					(1u << 27)
	/* PendSV set-pending bit */
#define SCB_ICSR_PENDSVSET					(1u << 28)
	/* NMI set-pending bit. */
#define SCB_ICSR_NMIPENDSET					(1u << 31)

	/* 0x08: Vector table offset register */
	uint32_t volatile VTOR;
	/* Vector table base offset */
#define SCB_VTOR_TBLOFF_Msk					(0x1FFFFFu << 9)
#define SCB_VTOR_TBLOFF_Pos					9

	/* 0x0C: Application interrupt and reset control */
	uint32_t volatile AIRCR;
	/* VECTRESET */
#define SCB_AIRCR_VECTRESET					(1u << 0)
	/* VECTCLRACTIVE */
#define SCB_AIRCR_VECTCLRACTIVE					(1u << 1)
	/* SYSRESETREQ */
#define SCB_AIRCR_SYSRESETREQ					(1u << 2)
	/* PRIGROUP */
#define SCB_AIRCR_PRIGROUP_Msk					(0x7u << 8)
#define SCB_AIRCR_PRIGROUP_Pos					8
	/* ENDIANESS */
#define SCB_AIRCR_ENDIANESS					(1u << 15)
	/* Register key */
#define SCB_AIRCR_VECTKEYSTAT_Msk				(0xFFFFu << 16)
#define SCB_AIRCR_VECTKEYSTAT_Pos				16

	/* 0x10: System control register */
	uint32_t volatile SCR;
	/* SLEEPONEXIT */
#define SCB_SCR_SLEEPONEXIT					(1u << 1)
	/* SLEEPDEEP */
#define SCB_SCR_SLEEPDEEP					(1u << 2)
	/* Send Event on Pending bit */
#define SCB_SCR_SEVEONPEND					(1u << 4)

	/* 0x14: Configuration and control */
	uint32_t volatile CCR;
	/* Configures how the processor enters */
#define SCB_CCR_NONBASETHRDENA					(1u << 0)
	/* USERSETMPEND */
#define SCB_CCR_USERSETMPEND					(1u << 1)
	/* UNALIGN_ TRP */
#define SCB_CCR_UNALIGN__TRP					(1u << 3)
	/* DIV_0_TRP */
#define SCB_CCR_DIV_0_TRP					(1u << 4)
	/* BFHFNMIGN */
#define SCB_CCR_BFHFNMIGN					(1u << 8)
	/* STKALIGN */
#define SCB_CCR_STKALIGN					(1u << 9)

	/* 0x18: System handler priority */
	uint32_t volatile SHPR1;
	/* Priority of system handler */
#define SCB_SHPR1_PRI_4_Msk					(0xFFu << 0)
#define SCB_SHPR1_PRI_4_Pos					0
	/* Priority of system handler */
#define SCB_SHPR1_PRI_5_Msk					(0xFFu << 8)
#define SCB_SHPR1_PRI_5_Pos					8
	/* Priority of system handler */
#define SCB_SHPR1_PRI_6_Msk					(0xFFu << 16)
#define SCB_SHPR1_PRI_6_Pos					16

	/* 0x1C: System handler priority */
	uint32_t volatile SHPR2;
	/* Priority of system handler */
#define SCB_SHPR2_PRI_11_Msk					(0xFFu << 24)
#define SCB_SHPR2_PRI_11_Pos					24

	/* 0x20: System handler priority */
	uint32_t volatile SHPR3;
	/* Priority of system handler */
#define SCB_SHPR3_PRI_14_Msk					(0xFFu << 16)
#define SCB_SHPR3_PRI_14_Pos					16
	/* Priority of system handler */
#define SCB_SHPR3_PRI_15_Msk					(0xFFu << 24)
#define SCB_SHPR3_PRI_15_Pos					24

	/* 0x24: System handler control and state */
	uint32_t volatile SHCRS;
	/* Memory management fault exception active */
#define SCB_SHCRS_MEMFAULTACT					(1u << 0)
	/* Bus fault exception active */
#define SCB_SHCRS_BUSFAULTACT					(1u << 1)
	/* Usage fault exception active */
#define SCB_SHCRS_USGFAULTACT					(1u << 3)
	/* SVC call active bit */
#define SCB_SHCRS_SVCALLACT					(1u << 7)
	/* Debug monitor active bit */
#define SCB_SHCRS_MONITORACT					(1u << 8)
	/* PendSV exception active */
#define SCB_SHCRS_PENDSVACT					(1u << 10)
	/* SysTick exception active */
#define SCB_SHCRS_SYSTICKACT					(1u << 11)
	/* Usage fault exception pending */
#define SCB_SHCRS_USGFAULTPENDED				(1u << 12)
	/* Memory management fault exception */
#define SCB_SHCRS_MEMFAULTPENDED				(1u << 13)
	/* Bus fault exception pending */
#define SCB_SHCRS_BUSFAULTPENDED				(1u << 14)
	/* SVC call pending bit */
#define SCB_SHCRS_SVCALLPENDED					(1u << 15)
	/* Memory management fault enable */
#define SCB_SHCRS_MEMFAULTENA					(1u << 16)
	/* Bus fault enable bit */
#define SCB_SHCRS_BUSFAULTENA					(1u << 17)
	/* Usage fault enable bit */
#define SCB_SHCRS_USGFAULTENA					(1u << 18)

	/* 0x28: Configurable fault status */
	uint32_t volatile CFSR_UFSR_BFSR_MMFSR;
	/* Instruction access violation */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL			(1u << 1)
	/* Memory manager fault on unstacking for a */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR			(1u << 3)
	/* Memory manager fault on stacking for */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR			(1u << 4)
	/* MLSPERR */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR			(1u << 5)
	/* Memory Management Fault Address Register */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID			(1u << 7)
	/* Instruction bus error */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR			(1u << 8)
	/* Precise data bus error */
#define SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR			(1u << 9)
	/* Imprecise data bus error */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR			(1u << 10)
	/* Bus fault on unstacking for a return */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR			(1u << 11)
	/* Bus fault on stacking for exception */
#define SCB_CFSR_UFSR_BFSR_MMFSR_STKERR				(1u << 12)
	/* Bus fault on floating-point lazy state */
#define SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR				(1u << 13)
	/* Bus Fault Address Register (BFAR) valid */
#define SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID			(1u << 15)
	/* Undefined instruction usage */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR			(1u << 16)
	/* Invalid state usage fault */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE			(1u << 17)
	/* Invalid PC load usage */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVPC				(1u << 18)
	/* No coprocessor usage */
#define SCB_CFSR_UFSR_BFSR_MMFSR_NOCP				(1u << 19)
	/* Unaligned access usage */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED			(1u << 24)
	/* Divide by zero usage fault */
#define SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO			(1u << 25)

	/* 0x2C: Hard fault status register */
	uint32_t volatile HFSR;
	/* Vector table hard fault */
#define SCB_HFSR_VECTTBL					(1u << 1)
	/* Forced hard fault */
#define SCB_HFSR_FORCED						(1u << 30)
	/* Reserved for Debug use */
#define SCB_HFSR_DEBUG_VT					(1u << 31)

	/* 0x30 */
	uint8_t RESERVED0[0x34u-0x30u];

	/* 0x34: Memory management fault address */
	uint32_t volatile MMFAR;
	/* Memory management fault */
#define SCB_MMFAR_MMFAR_Msk					(0xFFFFFFFFu << 0)
#define SCB_MMFAR_MMFAR_Pos					0

	/* 0x38: Bus fault address register */
	uint32_t volatile BFAR;
	/* Bus fault address */
#define SCB_BFAR_BFAR_Msk					(0xFFFFFFFFu << 0)
#define SCB_BFAR_BFAR_Pos					0

	/* 0x3C: Auxiliary fault status */
	uint32_t volatile AFSR;
	/* Implementation defined */
#define SCB_AFSR_IMPDEF_Msk					(0xFFFFFFFFu << 0)
#define SCB_AFSR_IMPDEF_Pos					0

};


#define NVIC_STIR ((struct sdk_nvic_stir *)0xE000EF00)

struct sdk_nvic_stir {

	/* 0x00: Software trigger interrupt */
	uint32_t volatile STIR;
	/* Software generated interrupt */
#define NVIC_STIR_STIR_INTID_Msk				(0x1FFu << 0)
#define NVIC_STIR_STIR_INTID_Pos				0

};


#define FPU_CPACR ((struct sdk_fpu_cpacr *)0xE000ED88)

struct sdk_fpu_cpacr {

	/* 0x00: Coprocessor access control */
	uint32_t volatile CPACR;
	/* CP */
#define FPU_CPACR_CPACR_CP_Msk					(0xFu << 20)
#define FPU_CPACR_CPACR_CP_Pos					20

};


#define SCB_ACTRL ((struct sdk_scb_actrl *)0xE000E008)

struct sdk_scb_actrl {

	/* 0x00: Auxiliary control register */
	uint32_t volatile ACTRL;
	/* DISMCYCINT */
#define SCB_ACTRL_ACTRL_DISMCYCINT				(1u << 0)
	/* DISDEFWBUF */
#define SCB_ACTRL_ACTRL_DISDEFWBUF				(1u << 1)
	/* DISFOLD */
#define SCB_ACTRL_ACTRL_DISFOLD					(1u << 2)
	/* DISFPCA */
#define SCB_ACTRL_ACTRL_DISFPCA					(1u << 8)
	/* DISOOFP */
#define SCB_ACTRL_ACTRL_DISOOFP					(1u << 9)

};

#endif
