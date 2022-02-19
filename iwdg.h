#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define IWDG ((struct zmcu_iwdg *)0x40003000)

struct zmcu_iwdg {
	
	/* 0x00: Key register */
	uint32_t volatile KR;

	/* 0x04: Prescaler register */
	uint32_t volatile PR;

	/* 0x08: Reload register */
	uint32_t volatile RLR;

	/* 0x0C: Status register */
	uint32_t volatile SR;

};
