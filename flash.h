#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define FLASH ((struct sdk_flash *)0x40023C00)

struct sdk_flash {
	
	/* 0x00: Flash access control register */
	uint32_t volatile ACR;
#define FLASH_ACR_DCRST				(1u << 12)
#define FLASH_ACR_ICRST				(1u << 11)
#define FLASH_ACR_DCEN				(1u << 10)
#define FLASH_ACR_ICEN				(1u << 9)
#define FLASH_ACR_PRFTEN			(1u << 8)
#define FLASH_ACR_LATENCY(x)			(1u << 0)

	/* 0x04: Flash key register */
	uint32_t volatile KEYR;
#define FLASH_KEYR_FKEYR(x)			(1u << 0)

	/* 0x08: Flash option key register */
	uint32_t volatile OPTKEYR;
#define FLASH_OPTKEYR_OPTKEYR(x)		(1u << 0)

	/* 0x0C: Flash status register */
	uint32_t volatile SR;
#define FLASH_SR_BSY				(1u << 16)
#define FLASH_SR_RDERR				(1u << 8)
#define FLASH_SR_PGSERR				(1u << 7)
#define FLASH_SR_PGPERR				(1u << 6)
#define FLASH_SR_PGAERR				(1u << 5)
#define FLASH_SR_WRPERR				(1u << 4)
#define FLASH_SR_OPERR				(1u << 1)
#define FLASH_SR_EOP				(1u << 0)

	/* 0x10: Flash control register */
	uint32_t volatile CR;
#define FLASH_CR_LOCK				(1u << 31)
#define FLASH_CR_ERRIE				(1u << 25)
#define FLASH_CR_EOPIE				(1u << 24)
#define FLASH_CR_STRT				(1u << 16)
#define FLASH_CR_PSIZE(x)			(1u << 8)
#define FLASH_CR_SNB(x)				(1u << 3)
#define FLASH_CR_MER				(1u << 2)
#define FLASH_CR_SER				(1u << 1)
#define FLASH_CR_PG				(1u << 0)

	/* 0x14: Flash option control register */
	uint32_t volatile OPTCR;
#define FLASH_OPTCR_SPRMOD			(1u << 31)
#define FLASH_OPTCR_nWRP(x)			(1u << 16)
#define FLASH_OPTCR_RDP(x)			(1u << 8)
#define FLASH_OPTCR_USER(x)			(1u << 5)
#define FLASH_OPTCR_nRST_STDBY(x)		(1u << )
#define FLASH_OPTCR_nRST_STOP(x)		(1u << )
#define FLASH_OPTCR_WDG_SW(x)			(1u << )
#define FLASH_OPTCR_BOR_LEV(x)			(1u << 2)
#define FLASH_OPTCR_OPTSTRT			(1u << 1)
#define FLASH_OPTCR_OPTLOCK			(1u << 0)

};
