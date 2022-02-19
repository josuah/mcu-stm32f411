#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define PWR ((struct zmcu_pwr *)0x40007000)

struct zmcu_pwr {
	
	/* 0x00: PWR power control register */
	uint32_t volatile CR;
#define PWR_CR_FISSR				(1u << 21)
#define PWR_CR_FMSSR				(1u << 20)
#define PWR_CR_VOS(x)				(1u << 14)
#define PWR_CR_ADCDC1				(1u << 13)
#define PWR_CR_MRLVDS				(1u << 11)
#define PWR_CR_LPLVDS				(1u << 10)
#define PWR_CR_FPDS				(1u << 9)
#define PWR_CR_DBP				(1u << 8)
#define PWR_CR_PLS(x)				(1u << 5)
#define PWR_CR_PVDE				(1u << 4)
#define PWR_CR_CSBF				(1u << 3)
#define PWR_CR_CWUF				(1u << 2)
#define PWR_CR_PDDS				(1u << 1)
#define PWR_CR_LPDS				(1u << 0)

	/* 0x04: PWR power control/status register */
	uint32_t volatile CSR;
#define PWR_CSR_VOSRDY				(1u << 14)
#define PWR_CSR_BRE				(1u << 9)
#define PWR_CSR_EWUP				(1u << 8)
#define PWR_CSR_BRR				(1u << 3)
#define PWR_CSR_PVDO				(1u << 2)
#define PWR_CSR_SBF				(1u << 1)
#define PWR_CSR_WUF				(1u << 0)

};
