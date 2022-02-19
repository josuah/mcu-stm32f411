#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define SPI1 ((struct zmcu_spi *)0x40013000)
#define I2S1 ((struct zmcu_spi *)0x40013000)
#define SPI2 ((struct zmcu_spi *)0x40003800)
#define SPI3 ((struct zmcu_spi *)0x40003C00)
#define SPI4 ((struct zmcu_spi *)0x40013400)
#define I2S4 ((struct zmcu_spi *)0x40013400)
#define SPI5 ((struct zmcu_spi *)0x40015000)
#define I2S5 ((struct zmcu_spi *)0x40015000)

struct zmcu_spi {
	
	/* 0x00: SPI control register 1 */
	uint32_t volatile CR1;
#define SPI_CR1_BIDIMODE			(1u << 15)
#define SPI_CR1_BIDIOE				(1u << 14)
#define SPI_CR1_CRCEN				(1u << 13)
#define SPI_CR1_CRCNEXT				(1u << 12)
#define SPI_CR1_DFF				(1u << 11)
#define SPI_CR1_RXONLY				(1u << 10)
#define SPI_CR1_SSM				(1u << 9)
#define SPI_CR1_SSI				(1u << 8)
#define SPI_CR1_LSBFIRST			(1u << 7)
#define SPI_CR1_SPE				(1u << 6)
#define SPI_CR1_BR(x)				(1u << 3)
#define SPI_CR1_MSTR				(1u << 2)
#define SPI_CR1_CPHA				(1u << 0)

	/* 0x04: SPI control register 2 */
	uint32_t volatile CR2;
#define SPI_CR2_TXEIE				(1u << 7)
#define SPI_CR2_RXNEIE				(1u << 6)
#define SPI_CR2_ERRIE				(1u << 5)
#define SPI_CR2_FRF				(1u << 4)
#define SPI_CR2_SSOE				(1u << 2)
#define SPI_CR2_TXDMAEN				(1u << 1)
#define SPI_CR2_RXDMAEN				(1u << 0)

	/* 0x08: SPI status register */
	uint32_t volatile SR;
#define SPI_SR_FRE				(1u << 8)
#define SPI_SR_BSY				(1u << 7)
#define SPI_SR_OVR				(1u << 6)
#define SPI_SR_MODF				(1u << 5)
#define SPI_SR_CRCERR				(1u << 4)
#define SPI_SR_UDR				(1u << 3)
#define SPI_SR_CHSIDE				(1u << 2)
#define SPI_SR_TXE				(1u << 1)
#define SPI_SR_RXNE				(1u << 0)

	/* 0x0C: SPI data register */
	uint32_t volatile DR;
#define SPI_DR_DR(x)				(1u << 0)

	/* 0x10: SPI CRC polynomial register */
	uint32_t volatile CRCPR;
#define SPI_CRCPR_CRCPOLY(x)			(1u << 0)

	/* 0x14: SPI RX CRC register */
	uint32_t volatile RXCRCR;
#define SPI_RXCRCR_RXCRC(x)			(1u << 0)

	/* 0x18: SPI TX CRC register */
	uint32_t volatile TXCRCR;
#define SPI_TXCRCR_TXCRC(x)			(1u << 0)

	/* 0x1C: SPI_I2S configuration register */
	uint32_t volatile I2SCFGR;
#define SPI_I2SCFGR_I2SMOD			(1u << 11)
#define SPI_I2SCFGR_I2SE			(1u << 10)
#define SPI_I2SCFGR_I2SCFG(x)			(1u << 8)
#define SPI_I2SCFGR_PCMSYNC			(1u << 7)
#define SPI_I2SCFGR_I2SSTD(x)			(1u << 4)
#define SPI_I2SCFGR_CKPOL			(1u << 3)
#define SPI_I2SCFGR_DATLEN(x)			(1u << 1)
#define SPI_I2SCFGR_CHLEN			(1u << 0)

	/* 0x20: SPI_I2S prescaler register */
	uint32_t volatile I2SPR;
#define SPI_I2SPR_MCKOE				(1u << 9)
#define SPI_I2SPR_ODD				(1u << 8)
#define SPI_I2SPR_I2SDIV(x)			(1u << 0)

};
