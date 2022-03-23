#include "libc.h"
#include "registers.h"
#include "functions.h"

extern int main(void);
extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void
__reset_handler(void)
{
	volatile char *dst, *src = &__data_load_start;

	for (dst = &__data_start; dst < &__data_end; *dst++ = *src++);
	for (dst = &__bss_start; dst < &__bss_end; *dst++ = 0);
	main();
	for (int volatile i = 0 ;; i++);
}

/* so that the debugger can immediately see which fault was triggered */
void __null_handler(void)		{ for (int volatile i = 0;; i++); }
void __isr_hard_fault(void)		{ for (int volatile i = 0;; i++); }
void __isr_memory_management(void)	{ for (int volatile i = 0;; i++); }
void __isr_non_maskable_interrupt(void)	{ for (int volatile i = 0;; i++); }
void __isr_bus_fault(void)		{ for (int volatile i = 0;; i++); }
void __isr_usage_fault(void)		{ for (int volatile i = 0;; i++); }
void __isr_secure_fault(void)		{ for (int volatile i = 0;; i++); }

void *__stack_pointer = &__stack_top;	/* 0x000 */

void (*__vectors[])(void) = {
	&__reset_handler,		/* 0x004 -15 ARM Reset */
	&__isr_non_maskable_interrupt,	/* 0x008 -14 ARM NonMaskableInt */
	&__isr_hard_fault,		/* 0x00C -13 ARM HardFault */
	&__isr_memory_management,	/* 0x010 -12 ARM MemoryManagement */
	&__isr_bus_fault,		/* 0x014 -11 ARM BusFault */
	&__isr_usage_fault,		/* 0x018 -10 ARM UsageFault */
	&__isr_secure_fault,		/* 0x01C -9 ARM SecureFault */
	&__null_handler,		/* 0x020 -8 Reserved */
	&__null_handler,		/* 0x024 -7 Reserved */
	&__null_handler,		/* 0x028 -6 Reserved */
	&__null_handler,		/* 0x02C -5 ARM SVCall */
	&__null_handler,		/* 0x030 -4 ARM DebugMonitor */
	&__null_handler,		/* 0x034 -3 Reserved */
	&__null_handler,		/* 0x038 -2 ARM PendSV */
	&__null_handler,		/* 0x03C -1 ARM SysTick */
	&__null_handler,		/* 0x040 #0 WWDG */
	&__null_handler,		/* 0x044 #1 EXTI16_PVD */
	&__null_handler,		/* 0x048 #2 EXTI21_TAMP_STAMP */
	&__null_handler,		/* 0x04C #3 EXTI22_RTC_WKUP */
	&__null_handler,		/* 0x050 #4 FLASH */
	&__null_handler,		/* 0x054 #5 RCC */
	&__null_handler,		/* 0x058 #6 EXTI0 */
	&__null_handler,		/* 0x05C #7 EXTI1 */
	&__null_handler,		/* 0x060 #8 EXTI2 */
	&__null_handler,		/* 0x064 #9 EXTI3 */
	&__null_handler,		/* 0x068 #10 EXTI4 */
	&__null_handler,		/* 0x06C #11 DMA1_STREAM0 */
	&__null_handler,		/* 0x070 #12 DMA1_STREAM1 */
	&__null_handler,		/* 0x074 #13 DMA1_STREAM2 */
	&__null_handler,		/* 0x078 #14 DMA1_STREAM3 */
	&__null_handler,		/* 0x07C #15 DMA1_STREAM4 */
	&__null_handler,		/* 0x080 #16 DMA1_STREAM5 */
	&__null_handler,		/* 0x084 #17 DMA1_STREAM6 */
	&__null_handler,		/* 0x088 #18 ADC */
	&__null_handler,		/* 0x08C #19 Reserved */
	&__null_handler,		/* 0x090 #20 Reserved */
	&__null_handler,		/* 0x094 #21 Reserved */
	&__null_handler,		/* 0x098 #22 Reserved */
	&__null_handler,		/* 0x09C #23 EXTI9TO5 */
	&__null_handler,		/* 0x0A0 #24 TIM1_BRK_TIM9 */
	&__null_handler,		/* 0x0A4 #25 TIM1_UP_TIM10 */
	&__null_handler,		/* 0x0A8 #26 TIM1_TRG_COM_TIM1 */
	&__null_handler,		/* 0x0AC #27 TIM1_CC */
	&__null_handler,		/* 0x0B0 #28 TIM2 */
	&__null_handler,		/* 0x0B4 #29 TIM3 */
	&__null_handler,		/* 0x0B8 #30 TIM4 */
	&__null_handler,		/* 0x0BC #31 I2C1_EV */
	&__null_handler,		/* 0x0C0 #32 I2C1_ER */
	&__null_handler,		/* 0x0C4 #33 I2C2_EV */
	&__null_handler,		/* 0x0C8 #34 I2C2_ER */
	&__null_handler,		/* 0x0CC #35 SPI1 */
	&__null_handler,		/* 0x0D0 #36 SPI2 */
	&__null_handler,		/* 0x0D4 #37 USART1 */
	&__null_handler,		/* 0x0D8 #38 USART2 */
	&__null_handler,		/* 0x0DC #39 EXTI15TO10 */
	&__null_handler,		/* 0x0E0 #40 EXTI17_RTC_ALARM */
	&__null_handler,		/* 0x0E4 #41 EXTI18_OTG_FS_WKUP */
	&__null_handler,		/* 0x0E8 #42 DMA1_STREAM7 */
	&__null_handler,		/* 0x0EC #43 SDIO */
	&__null_handler,		/* 0x0F0 #44 TIM5 */
	&__null_handler,		/* 0x0F4 #45 SPI3 */
	&__null_handler,		/* 0x0F8 #46 DMA2_STREAM0 */
	&__null_handler,		/* 0x0FC #47 DMA2_STREAM1 */
	&__null_handler,		/* 0x100 #48 DMA2_STREAM2 */
	&__null_handler,		/* 0x104 #49 DMA2_STREAM3 */
	&__null_handler,		/* 0x108 #50 DMA2_STREAM4 */
	&__null_handler,		/* 0x10C #51 OTG_FS */
	&__null_handler,		/* 0x110 #52 DMA2_STREAM5 */
	&__null_handler,		/* 0x114 #53 DMA2_STREAM6 */
	&__null_handler,		/* 0x118 #54 DMA2_STREAM7 */
	&__null_handler,		/* 0x11C #55 USART6 */
	&__null_handler,		/* 0x120 #56 I2C3_EV */
	&__null_handler,		/* 0x124 #57 I2C3_ER */
	&__null_handler,		/* 0x128 #58 FPU */
	&__null_handler,		/* 0x12C #59 SPI4 */
	&__null_handler,		/* 0x130 #60 SPI5 */
};
