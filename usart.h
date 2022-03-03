#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define USART1 ((struct sdk_usart *)0x40011000)
#define USART2 ((struct sdk_usart *)0x40004400)
#define USART6 ((struct sdk_usart *)0x40011400)

struct sdk_usart {
	
	/* 0x00: Status register */
	uint32_t volatile SR;
#define USART_SR_CTS				(1u << 9)
#define USART_SR_LBD				(1u << 8)
#define USART_SR_TXE				(1u << 7)
#define USART_SR_TC				(1u << 6)
#define USART_SR_RXNE				(1u << 5)
#define USART_SR_IDLE				(1u << 4)
#define USART_SR_ORE				(1u << 3)
#define USART_SR_NF				(1u << 2)
#define USART_SR_FE				(1u << 1)
#define USART_SR_PE				(1u << 0)

	/* 0x04: Data register */
	uint32_t volatile DR;

	/* 0x08: Baud rate register */
	uint32_t volatile BRR;
#define USART_BRR_DIV_Mantissa(x)		(1u << 4)
#define USART_BRR_DIV_Fraction(x)		(1u << 0)

	/* 0x0C: Control register 1 */
	uint32_t volatile CR1;
#define USART_CR1_OVER8				(1u << 15)
#define USART_CR1_UE				(1u << 13)
#define USART_CR1_M				(1u << 12)
#define USART_CR1_WAKE				(1u << 11)
#define USART_CR1_PCE				(1u << 10)
#define USART_CR1_PS				(1u << 9)
#define USART_CR1_PEIE				(1u << 8)
#define USART_CR1_TXEIE				(1u << 7)
#define USART_CR1_TCIE				(1u << 6)
#define USART_CR1_RXNEIE			(1u << 5)
#define USART_CR1_IDLEIE			(1u << 4)
#define USART_CR1_TE				(1u << 3)
#define USART_CR1_RE				(1u << 2)
#define USART_CR1_RWU				(1u << 1)
#define USART_CR1_SBK				(1u << 0)

	/* 0x10: Control register 2 */
	uint32_t volatile CR2;
#define USART_CR2_LINEN				(1u << 14)
#define USART_CR2_STOP(x)			(1u << 12)
#define USART_CR2_CLKEN				(1u << 11)
#define USART_CR2_CPOL				(1u << 10)
#define USART_CR2_CPHA				(1u << 9)
#define USART_CR2_LBCL				(1u << 8)
#define USART_CR2_LBDIE				(1u << 6)
#define USART_CR2_LBDL				(1u << 5)
#define USART_CR2_ADD(x)			(1u << 0)

	/* 0x14: Control register 3 */
	uint32_t volatile CR3;
#define USART_CR3_ONEBIT			(1u << 11)
#define USART_CR3_CTSIE				(1u << 10)
#define USART_CR3_CTSE				(1u << 9)
#define USART_CR3_RTSE				(1u << 8)
#define USART_CR3_DMAT				(1u << 7)
#define USART_CR3_DMAR				(1u << 6)
#define USART_CR3_SCEN				(1u << 5)
#define USART_CR3_NACK				(1u << 4)
#define USART_CR3_HDSEL				(1u << 3)
#define USART_CR3_IRLP				(1u << 2)
#define USART_CR3_IREN				(1u << 1)
#define USART_CR3_EIE				(1u << 0)

	/* 0x18: Guard time and prescaler register */
	uint32_t volatile GTPR;
#define USART_GTPR_GT(x)			(1u << 8)
#define USART_GTPR_PSC(x)			(1u << 0)

};
