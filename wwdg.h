#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define WWDG ((struct sdk_wwdg *)0x40002C00)

struct sdk_wwdg {

	/* 0x00: Control register */
	uint32_t volatile CR;
#define WWDG_CR_WDGA				(1u << 7)
#define WWDG_CR_T(x)				(1u << 0)

	/* 0x04: Configuration register */
	uint32_t volatile CFR;
#define WWDG_CFR_EWI				(1u << 9)
#define WWDG_CFR_WDGTB(x)			(1u << 7)
#define WWDG_CFR_W(x)				(1u << 0)

	/* 0x08: Status register */
	uint32_t volatile SR;
#define WWDG_SR_EWIF				(1u << 0)

};
