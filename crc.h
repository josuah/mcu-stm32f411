#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define CRC ((struct sdk_crc *)0x40023000)
 
struct sdk_crc {

	/* 0x00: Data register */
	uint32_t volatile DR;

	/* 0x04: Independent data register */
	uint32_t volatile IDR;

	/* 0x08: Control register */
	uint32_t volatile CR;
#define CRC_CR_RESET				(1u << 0)

};
