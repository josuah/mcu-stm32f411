#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define DMA1 ((struct zmcu_dma *)0x40026000)
#define DMA2 ((struct zmcu_dma *)0x40026400)

struct zmcu_dma {
	
	/* 0x00: DMA low interrupt status register */
	uint32_t volatile LISR;

	/* 0x04: DMA high interrupt status register */
	uint32_t volatile HISR;

	/* 0x08: DMA low interrupt flag clear register */
	uint32_t volatile LIFCR;

	/* 0x0C: DMA high interrupt flag clear register */
	uint32_t volatile HIFCR;

	/* 0x10: DMA stream x configuration register */
	uint32_t volatile SxCR;
#define DMA_SxCR_CHSEL(x)			(1u << 25)
#define DMA_SxCR_MBURST(x)			(1u << 23)
#define DMA_SxCR_PBURST(x)			(1u << 21)
#define DMA_SxCR_CT				(1u << 19)
#define DMA_SxCR_DBM				(1u << 18)
#define DMA_SxCR_PL(x)				(1u << 16)
#define DMA_SxCR_PINCOS				(1u << 15)
#define DMA_SxCR_MSIZE(x)			(1u << 13)
#define DMA_SxCR_PSIZE(x)			(1u << 11)
#define DMA_SxCR_MINC				(1u << 10)
#define DMA_SxCR_PINC				(1u << 9)
#define DMA_SxCR_CIRC				(1u << 8)
#define DMA_SxCR_DIR(x)				(1u << 6)
#define DMA_SxCR_PFCTRL				(1u << 5)
#define DMA_SxCR_TCIE				(1u << 4)
#define DMA_SxCR_HTIE				(1u << 3)
#define DMA_SxCR_TEIE				(1u << 2)
#define DMA_SxCR_DMEIE				(1u << 1)
#define DMA_SxCR_EN				(1u << 0)

	/* 0x14: DMA stream x number of data register */
	uint32_t volatile SxNDTR;
#define DMA_SxNDTR_NDT(x)			(1u << 0)

	/* 0x18: DMA stream x peripheral address register */
	uint32_t volatile SxPAR;
#define DMA_SxPAR_PAR(x)			(1u << 0)

	/* 0x1C: DMA stream x memory 0 address register */
	uint32_t volatile SxM0AR;
#define DMA_SxM0AR_M0A(x)			(1u << 0)

	/* 0x20: DMA stream x memory 1 address register */
	uint32_t volatile SxM1AR;
#define DMA_SxM1AR_M1A(x)			(1u << 0)

	/* 0x24: DMA stream x FIFO control register */
	uint32_t volatile SxFCR;
#define DMA_SxFCR_FEIE				(1u << 7)
#define DMA_SxFCR_FS(x)				(1u << 3)
#define DMA_SxFCR_DMDIS				(1u << 2)
#define DMA_SxFCR_FTH(x)			(1u << 0)

};
