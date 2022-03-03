#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define SYSCFG ((struct sdk_syscfg *)0x40013800)

struct sdk_syscfg {
	
	/* 0x00: SYSCFG memory remap register */
	uint32_t volatile MEMRMP;
#define SYSCFG_MEMRMP_MEM_MODE(x)		(1u << 0)

	/* 0x04: SYSCFG peripheral mode configuration register */
	uint32_t volatile PMC;
#define SYSCFG_PMC_ADCxDC2			(1u << 16)

	/* 0x08: SYSCFG external interrupt configuration register */
	uint32_t volatile EXTICR[4];
#define SYSCFG_EXTICR[4]_EXTIx(x)		(1u << 0)

	/* 0x18 */
	uint8_t volatile RESERVED8[0x20-0x18];

	/* 0x20: Compensation cell control register */
	uint32_t volatile CMPCR;
#define SYSCFG_CMPCR_READY			(1u << 8)
#define SYSCFG_CMPCR_CMP_PD			(1u << 0)

};
