#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define TIM1 ((struct sdk_tim *)0x40010000)
#define TIM2 ((struct sdk_tim *)0x40000000)
#define TIM3 ((struct sdk_tim *)0x40000400)
#define TIM4 ((struct sdk_tim *)0x40000800)
#define TIM5 ((struct sdk_tim *)0x40000C00)
#define TIM9 ((struct sdk_tim *)0x40014000)
#define TIM10 ((struct sdk_tim *)0x40014400)
#define TIM11 ((struct sdk_tim *)0x40014800)

struct sdk_tim {

	/* 0x00: TIMx control register 1 */
	uint32_t volatile CR1;
#define TIM_CR1_CKD(x)				(1u << 8)
#define TIM_CR1_ARPE				(1u << 7)
#define TIM_CR1_CMS(x)				(1u << 5)
#define TIM_CR1_DIR				(1u << 4)
#define TIM_CR1_OPM				(1u << 3)
#define TIM_CR1_URS				(1u << 2)
#define TIM_CR1_UDIS				(1u << 1)
#define TIM_CR1_CEN				(1u << 0)

	/* 0x04: TIMx control register 2 */
	uint32_t volatile CR2;
#define TIM_CR2_TI1S				(1u << 7)
#define TIM_CR2_MMS(x)				(1u << 4)
#define TIM_CR2_CCDS				(1u << 3)

	/* 0x08: TIMx slave mode control register */
	uint32_t volatile SMCR;
#define TIM_SMCR_ETP				(1u << 15)
#define TIM_SMCR_ECE				(1u << 14)
#define TIM_SMCR_ETPS(x)			(1u << 12)
#define TIM_SMCR_ETF(x)				(1u << 8)
#define TIM_SMCR_MSM				(1u << 7)
#define TIM_SMCR_TS(x)				(1u << 4)
#define TIM_SMCR_SMS(x)				(1u << 0)

	/* 0x0C: TIMx DMA/Interrupt enable register */
	uint32_t volatile DIER;
#define TIM_DIER_TDE				(1u << 14)
#define TIM_DIER_CC4DE				(1u << 12)
#define TIM_DIER_CC3DE				(1u << 11)
#define TIM_DIER_CC2DE				(1u << 10)
#define TIM_DIER_CC1DE				(1u << 9)
#define TIM_DIER_UDE				(1u << 8)
#define TIM_DIER_TIE				(1u << 6)
#define TIM_DIER_CC4IE				(1u << 4)

	/* 0x10: TIMx status register */
	uint32_t volatile SR;
#define TIM_SR_CC2IE				(1u << 2)
#define TIM_SR_CC1IE				(1u << 1)
#define TIM_SR_UIE				(1u << 0)
#define TIM_SR_CC4OF				(1u << 12)
#define TIM_SR_CC3OF				(1u << 11)
#define TIM_SR_CC2OF				(1u << 10)
#define TIM_SR_CC1OF				(1u << 9)
#define TIM_SR_TIF				(1u << 6)
#define TIM_SR_CC4IF				(1u << 4)
#define TIM_SR_CC3IF				(1u << 3)
#define TIM_SR_CC2IF				(1u << 2)
#define TIM_SR_CC1IF				(1u << 1)
#define TIM_SR_UIF				(1u << 0)

	/* 0x14: TIMx event generation register */
	uint32_t volatile EGR;
#define TIM_EGR_TG				(1u << 6)
#define TIM_EGR_CC4G				(1u << 4)
#define TIM_EGR_CC3G				(1u << 3)
#define TIM_EGR_CC2G				(1u << 2)
#define TIM_EGR_CC1G				(1u << 1)
#define TIM_EGR_UG				(1u << 0)

	/* 0x18: TIMx capture/compare mode register 1 */
	uint32_t volatile CCMR1;
#define TIM_CCMR1_OC2CE				(1u << 15)
#define TIM_CCMR1_OC2M(x)			(1u << 12)
#define TIM_CCMR1_OC2PE				(1u << 11)
#define TIM_CCMR1_OC2FE				(1u << 10)
#define TIM_CCMR1_CC2S(x)			(1u << 8)
#define TIM_CCMR1_OC1CE				(1u << 7)
#define TIM_CCMR1_OC1M(x)			(1u << 4)
#define TIM_CCMR1_OC1PE				(1u << 3)
#define TIM_CCMR1_OC1FE				(1u << 2)
#define TIM_CCMR1_CC1S(x)			(1u << 0)
#define TIM_CCMR1_IC2F(x)			(1u << 12)
#define TIM_CCMR1_IC2PSC(x)			(1u << 10)
#define TIM_CCMR1_CC2S(x)			(1u << 8)
#define TIM_CCMR1_IC1F(x)			(1u << 4)
#define TIM_CCMR1_IC1PSC(x)			(1u << 2)
#define TIM_CCMR1_CC1S(x)			(1u << 0)

	/* 0x1C: TIMx capture/compare mode register 2 */
	uint32_t volatile CCMR2;
#define TIM_CCMR2_OC4CE				(1u << 15)
#define TIM_CCMR2_OC4M(x)			(1u << 12)
#define TIM_CCMR2_OC4PE				(1u << 11)
#define TIM_CCMR2_OC4FE				(1u << 10)
#define TIM_CCMR2_CC4S(x)			(1u << 8)
#define TIM_CCMR2_OC3CE				(1u << 7)
#define TIM_CCMR2_OC3M(x)			(1u << 4)
#define TIM_CCMR2_OC3PE				(1u << 3)
#define TIM_CCMR2_OC3FE				(1u << 2)
#define TIM_CCMR2_CC3S(x)			(1u << 0)
#define TIM_CCMR2_IC4F(x)			(1u << 12)
#define TIM_CCMR2_IC4PSC(x)			(1u << 10)
#define TIM_CCMR2_CC4S(x)			(1u << 8)
#define TIM_CCMR2_IC3F(x)			(1u << 4)
#define TIM_CCMR2_IC3PSC(x)			(1u << 2)
#define TIM_CCMR2_CC3S(x)			(1u << 0)

	/* 0x20: TIMx capture/compare enable register */
	uint32_t volatile CCER;
#define TIM_CCER_CC4NP				(1u << 15)
#define TIM_CCER_CC4P				(1u << 13)
#define TIM_CCER_CC4E				(1u << 12)
#define TIM_CCER_CC3NP				(1u << 11)
#define TIM_CCER_CC3P				(1u << 9)
#define TIM_CCER_CC3E				(1u << 8)
#define TIM_CCER_CC2NP				(1u << 7)
#define TIM_CCER_CC2P				(1u << 5)
#define TIM_CCER_CC2E				(1u << 4)
#define TIM_CCER_CC1NP				(1u << 3)
#define TIM_CCER_CC1P				(1u << 1)
#define TIM_CCER_CC1E				(1u << 0)

	/* 0x24: TIMx counter */
	uint32_t volatile CNT;

	/* 0x28: TIMx prescaler */
	uint32_t volatile PSC;

	/* 0x2C: TIMx auto-reload register */
	uint32_t volatile ARR;

	/* 0x30 */
	uint8_t volatile RESERVED11[0x34-0x30];

	/* 0x34: TIMx capture/compare register */
	uint32_t volatile CCR[4];

	/* 0x44 */
	uint8_t volatile RESERVED12[0x48-0x44];

	/* 0x48: TIMx DMA control register */
	uint32_t volatile DCR;
#define TIM_DCR_DBL(x)				(1u << 8)
#define TIM_DCR_DBA(x)				(1u << 0)

	/* 0x4C: TIMx DMA address for full transfer */
	uint32_t volatile DMAR;
#define TIM_DMAR_DMAB(x)			(1u << 0)

	/* 0x50: TIM2/TIM5 option register */
	uint32_t volatile OR;
#define TIM_OR_ITR1_RMP(x)			(1u << 10)
#define TIM_OR_TI4_RMP(x)			(1u << 6)

};
