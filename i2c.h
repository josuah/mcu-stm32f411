#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define I2C1 ((struct sdk_i2c *)0x40005400)
#define I2C2 ((struct sdk_i2c *)0x40005800)
#define I2C3 ((struct sdk_i2c *)0x40005C00)
#define I2S2 ((struct sdk_i2c *)0x40003400)
#define I2S3 ((struct sdk_i2c *)0x40004000)

struct sdk_i2c {
	
	/* 0x00: I2C Control register 1 */
	uint32_t volatile CR1;
#define I2C_CR1_SWRST				(1u << 15)
#define I2C_CR1_ALERT				(1u << 13)
#define I2C_CR1_PEC				(1u << 12)
#define I2C_CR1_POS				(1u << 11)
#define I2C_CR1_ACK				(1u << 10)
#define I2C_CR1_STOP				(1u << 9)
#define I2C_CR1_START				(1u << 8)
#define I2C_CR1_NOSTRETCH			(1u << 7)
#define I2C_CR1_ENGC				(1u << 6)
#define I2C_CR1_ENPEC				(1u << 5)
#define I2C_CR1_ENARP				(1u << 4)
#define I2C_CR1_SMBTYPE				(1u << 3)
#define I2C_CR1_SMBUS				(1u << 1)
#define I2C_CR1_PE				(1u << 0)

	/* 0x04: I2C Control register 2 */
	uint32_t volatile CR2;
#define I2C_CR2_LAST				(1u << 12)
#define I2C_CR2_DMAEN				(1u << 11)
#define I2C_CR2_ITBUFEN				(1u << 10)
#define I2C_CR2_ITEVTEN				(1u << 9)
#define I2C_CR2_ITERREN				(1u << 8)
#define I2C_CR2_FREQ(x)				(1u << 0)

	/* 0x08: I2C Own address register 1 */
	uint32_t volatile OAR1;
#define I2C_OAR1_ADDMODE			(1u << 15)
#define I2C_OAR1_Should				(1u << 14)
#define I2C_OAR1_ADD(x)				(1u << 8)
#define I2C_OAR1_ADD(x)				(1u << 1)
#define I2C_OAR1_ADD0				(1u << 0)

	/* 0x0C: I2C Own address register 2 */
	uint32_t volatile OAR2;
#define I2C_OAR2_ADD2(x)			(1u << 1)
#define I2C_OAR2_ENDUAL				(1u << 0)

	/* 0x10: I2C Data register */
	uint32_t volatile DR;

	/* 0x14: I2C Status register 1 */
	uint32_t volatile SR1;
#define I2C_SR1_DR(x)				(1u << 0)
#define I2C_SR1_SMBALERT			(1u << 15)
#define I2C_SR1_TIMEOUT				(1u << 14)
#define I2C_SR1_PECERR				(1u << 12)
#define I2C_SR1_OVR				(1u << 11)
#define I2C_SR1_AF				(1u << 10)
#define I2C_SR1_ARLO				(1u << 9)
#define I2C_SR1_BERR				(1u << 8)
#define I2C_SR1_TxE				(1u << 7)
#define I2C_SR1_RxNE				(1u << 6)
#define I2C_SR1_STOPF				(1u << 4)
#define I2C_SR1_ADD10				(1u << 3)
#define I2C_SR1_BTF				(1u << 2)
#define I2C_SR1_ADDR				(1u << 1)
#define I2C_SR1_SB				(1u << 0)

	/* 0x18: I2C Status register 2 */
	uint32_t volatile SR2;
#define I2C_SR2_PEC(x)				(1u << 8)
#define I2C_SR2_DUALF				(1u << 7)
#define I2C_SR2_SMBHOST				(1u << 6)
#define I2C_SR2_SMBDEFAULT			(1u << 5)
#define I2C_SR2_GENCALL				(1u << 4)
#define I2C_SR2_TRA				(1u << 2)
#define I2C_SR2_BUSY				(1u << 1)
#define I2C_SR2_MSL				(1u << 0)

	/* 0x1C: I2C Clock control register */
	uint32_t volatile CCR;
#define I2C_CCR_F_S				(1u << 15)
#define I2C_CCR_DUTY				(1u << 14)
#define I2C_CCR_CCR(x)				(1u << 0)

	/* 0x20: I2C TRISE register */
	uint32_t volatile TRISE;
#define I2C_TRISE_TRISE(x)			(1u << 0)

	/* 0x24: I2C FLTR register */
	uint32_t volatile FLTR;
#define I2C_FLTR_ANOFF				(1u << 4)
#define I2C_FLTR_DNF(x)				(1u << 0)

};
