#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define EXTI ((struct zmcu_exti *)0x40013C00)

struct zmcu_exti {
	
	/* 0x00: Interrupt mask register */
	uint32_t volatile IMR;
#define EXTI_IMR_MRx(x)				(1u << 0)

	/* 0x04: Event mask register */
	uint32_t volatile EMR;
#define EXTI_EMR_MRx(x)				(1u << 0)

	/* 0x08: Rising trigger selection register */
	uint32_t volatile RTSR;
#define EXTI_RTSR_TRx(x)			(1u << 0)

	/* 0x0C: Falling trigger selection register */
	uint32_t volatile FTSR;
#define EXTI_FTSR_TRx(x)			(1u << 0)

	/* 0x10: Software interrupt event register */
	uint32_t volatile SWIER;
#define EXTI_SWIER_SWIERx(x)			(1u << 0)

	/* 0x14: Pending register */
	uint32_t volatile PR;
#define EXTI_PR_PRx(x)				(1u << 0)

};
