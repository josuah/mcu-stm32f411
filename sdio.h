#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define SDIO ((struct sdk_sdio *)0x40012C00)

struct sdk_sdio {
	
	/* 0x00: SDIO power control register */
	uint32_t volatile POWER;
#define SDIO_POWER_PWRCTRL(x)			(1u << 0)

	/* 0x04: SDI clock control register */
	uint32_t volatile CLKCR;
#define SDIO_CLKCR_HWFC_EN			(1u << 14)
#define SDIO_CLKCR_NEGEDGE			(1u << 13)
#define SDIO_CLKCR_WIDBUS(x)			(1u << 11)
#define SDIO_CLKCR_BYPASS			(1u << 10)
#define SDIO_CLKCR_PWRSAV			(1u << 9)
#define SDIO_CLKCR_CLKEN			(1u << 8)
#define SDIO_CLKCR_CLKDIV(x)			(1u << 0)

	/* 0x08: SDIO argument register */
	uint32_t volatile ARG;
#define SDIO_ARG_CMDARG(x)			(1u << 0)

	/* 0x0C: SDIO command register */
	uint32_t volatile CMD;
#define SDIO_CMD_ATACMD				(1u << 14)
#define SDIO_CMD_nIEN				(1u << 13)
#define SDIO_CMD_ENCMDcompl			(1u << 12)
#define SDIO_CMD_SDIOSuspend			(1u << 11)
#define SDIO_CMD_CPSMEN				(1u << 10)
#define SDIO_CMD_WAITPEND			(1u << 9)
#define SDIO_CMD_WAITINT			(1u << 8)
#define SDIO_CMD_WAITRESP(x)			(1u << 6)
#define SDIO_CMD_CMDINDEX(x)			(1u << 0)

	/* 0x10: SDIO command response register */
	uint32_t volatile RESPCMD;
#define SDIO_RESPCMD_RESPCMD(x)			(1u << 0)

	/* 0x14: SDIO response 1..4 register */
	uint32_t volatile RESP[4];
#define SDIO_RESP[4]_CARDSTATUSx(x)		(1u << 0)

	/* 0x24: SDIO data timer register */
	uint32_t volatile DTIMER;
#define SDIO_DTIMER_DATATIME(x)			(1u << 0)

	/* 0x28: SDIO data length register */
	uint32_t volatile DLEN;
#define SDIO_DLEN_DATALENGTH(x)			(1u << 0)

	/* 0x2C: SDIO data control register */
	uint32_t volatile DCTRL;
#define SDIO_DCTRL_SDIOEN			(1u << 11)
#define SDIO_DCTRL_RWMOD			(1u << 10)
#define SDIO_DCTRL_RWSTOP			(1u << 9)
#define SDIO_DCTRL_RWSTART			(1u << 8)
#define SDIO_DCTRL_DBLOCKSIZE(x)		(1u << 4)
#define SDIO_DCTRL_DMAEN			(1u << 3)
#define SDIO_DCTRL_DTMODE			(1u << 2)
#define SDIO_DCTRL_DTDIR			(1u << 1)
#define SDIO_DCTRL_DTEN				(1u << 0)

	/* 0x30: SDIO data counter register */
	uint32_t volatile DCOUNT;
#define SDIO_DCOUNT_DATACOUNT(x)		(1u << 0)

	/* 0x34: SDIO status register */
	uint32_t volatile STA;
#define SDIO_STA_CEATAEND			(1u << 23)
#define SDIO_STA_SDIOIT				(1u << 22)
#define SDIO_STA_RXDAVL				(1u << 21)
#define SDIO_STA_TXDAVL				(1u << 20)
#define SDIO_STA_RXFIFOE			(1u << 19)
#define SDIO_STA_TXFIFOE			(1u << 18)
#define SDIO_STA_RXFIFOF			(1u << 17)
#define SDIO_STA_TXFIFOF			(1u << 16)
#define SDIO_STA_RXFIFOHF			(1u << 15)
#define SDIO_STA_TXFIFOHE			(1u << 14)
#define SDIO_STA_RXACT				(1u << 13)
#define SDIO_STA_TXACT				(1u << 12)
#define SDIO_STA_CMDACT				(1u << 11)
#define SDIO_STA_DBCKEND			(1u << 10)
#define SDIO_STA_STBITERR			(1u << 9)
#define SDIO_STA_DATAEND			(1u << 8)
#define SDIO_STA_CMDSENT			(1u << 7)
#define SDIO_STA_CMDREND			(1u << 6)
#define SDIO_STA_RXOVERR			(1u << 5)
#define SDIO_STA_TXUNDERR			(1u << 4)
#define SDIO_STA_DTIMEOUT			(1u << 3)
#define SDIO_STA_CTIMEOUT			(1u << 2)
#define SDIO_STA_DCRCFAIL			(1u << 1)
#define SDIO_STA_CCRCFAIL			(1u << 0)

	/* 0x38: SDIO interrupt clear register */
	uint32_t volatile ICR;
#define SDIO_ICR_CEATAENDC			(1u << 23)
#define SDIO_ICR_SDIOITC			(1u << 22)
#define SDIO_ICR_DBCKENDC			(1u << 10)
#define SDIO_ICR_STBITERRC			(1u << 9)
#define SDIO_ICR_DATAENDC			(1u << 8)
#define SDIO_ICR_CMDSENTC			(1u << 7)
#define SDIO_ICR_CMDRENDC			(1u << 6)
#define SDIO_ICR_RXOVERRC			(1u << 5)
#define SDIO_ICR_TXUNDERRC			(1u << 4)
#define SDIO_ICR_DTIMEOUTC			(1u << 3)
#define SDIO_ICR_CTIMEOUTC			(1u << 2)
#define SDIO_ICR_DCRCFAILC			(1u << 1)
#define SDIO_ICR_CCRCFAILC			(1u << 0)

	/* 0x3C: SDIO mask register */
	uint32_t volatile MASK;
#define SDIO_MASK_CEATAENDIE			(1u << 23)
#define SDIO_MASK_SDIOITIE			(1u << 22)
#define SDIO_MASK_RXDAVLIE			(1u << 21)
#define SDIO_MASK_TXDAVLIE			(1u << 20)
#define SDIO_MASK_RXFIFOEIE			(1u << 19)
#define SDIO_MASK_TXFIFOEIE			(1u << 18)
#define SDIO_MASK_RXFIFOFIE			(1u << 17)
#define SDIO_MASK_TXFIFOFIE			(1u << 16)
#define SDIO_MASK_RXFIFOHFIE			(1u << 15)
#define SDIO_MASK_TXFIFOHEIE			(1u << 14)
#define SDIO_MASK_RXACTIE			(1u << 13)
#define SDIO_MASK_TXACTIE			(1u << 12)
#define SDIO_MASK_CMDACTIE			(1u << 11)
#define SDIO_MASK_DBCKENDIE			(1u << 10)
#define SDIO_MASK_STBITERRIE			(1u << 9)
#define SDIO_MASK_DATAENDIE			(1u << 8)
#define SDIO_MASK_CMDSENTIE			(1u << 7)
#define SDIO_MASK_CMDRENDIE			(1u << 6)
#define SDIO_MASK_RXOVERRIE			(1u << 5)
#define SDIO_MASK_TXUNDERRIE			(1u << 4)
#define SDIO_MASK_DTIMEOUTIE			(1u << 3)
#define SDIO_MASK_CTIMEOUTIE			(1u << 2)
#define SDIO_MASK_DCRCFAILIE			(1u << 1)
#define SDIO_MASK_CCRCFAILIE			(1u << 0)

	/* 0x40 */
	uint8_t volatile RESERVED22[0x48-0x40];

	/* 0x48: SDIO FIFO counter register */
	uint32_t volatile FIFOCNT;
#define SDIO_FIFOCNT_FIFOCOUNT(x)		(1u << 0)

	/* 0x4C */
	uint8_t volatile RESERVED23[0x80-0x4C];

	/* 0x80: SDIO data FIFO register */
	uint32_t volatile FIFO;

};
