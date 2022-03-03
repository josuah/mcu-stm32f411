#include <main.h>

extern int main(void);
extern void __reset_handler(void);

extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void *__stack_pointer = &__stack_top;	/* 0x00 */

void (*__vectors[])(void) = {
	&__reset_handler,		/* 0x04 -15 ARM Reset */
	&__stop_program,		/* 0x08 -14 ARM NonMaskableInt */
	&__stop_program,		/* 0x0C -13 ARM HardFault */
	&__stop_program,		/* 0x10 -12 ARM MemoryManagement */
	&__stop_program,		/* 0x14 -11 ARM BusFault */
	&__stop_program,		/* 0x18 -10 ARM UsageFault */
	&__stop_program,		/* 0x1C -9 ARM SecureFault */
	&__stop_program,		/* 0x20 -8 Reserved */
	&__stop_program,		/* 0x24 -7 Reserved */
	&__stop_program,		/* 0x28 -6 Reserved */
	&__stop_program,		/* 0x2C -5 ARM SVCall */
	&__stop_program,		/* 0x30 -4 ARM DebugMonitor */
	&__stop_program,		/* 0x34 -2 ARM PendSV */
	&__stop_program,		/* 0x38 -1 ARM SysTick */
	&__stop_program,		/* 0x3C #0 PM */
	&__stop_program,		/* 0x40 #1 SYSCTRL */
	&__stop_program,		/* 0x44 #2 WDT */
	&__stop_program,		/* 0x48 #3 RTC */
	&__stop_program,		/* 0x4C #4 EIC */
	&__stop_program,		/* 0x50 #5 NVMCTRL */
	&__stop_program,		/* 0x54 #6 DMAC */
	&__stop_program,		/* 0x58 #7 USB */
	&__stop_program,		/* 0x5C #8 EVSYS */
	&__stop_program,		/* 0x60 #9 SERCOM0 */
	&__stop_program,		/* 0x64 #10 SERCOM1 */
	&__stop_program,		/* 0x68 #11 SERCOM2 */
	&__stop_program,		/* 0x6C #12 SERCOM3 */
	&__stop_program,		/* 0x70 #13 SERCOM4 */
	&__stop_program,		/* 0x74 #14 SERCOM5 */
	&__stop_program,		/* 0x78 #15 TCC0 */
	&__stop_program,		/* 0x7C #16 TCC1 */
	&__stop_program,		/* 0x80 #17 TCC2 */
	&__stop_program,		/* 0x84 #18 TC3 */
	&__stop_program,		/* 0x88 #19 TC4 */
	&__stop_program,		/* 0x8C #20 TC5 */
	&__stop_program,		/* 0x90 #21 TC6 */
	&__stop_program,		/* 0x94 #22 TC7 */
	&__stop_program,		/* 0x98 #23 ADC */
	&__stop_program,		/* 0x9C #24 AC */
	&__stop_program,		/* 0xA0 #25 DAC */
	&__stop_program,		/* 0xA4 #26 PTC */
	&__stop_program,		/* 0xA8 #27 I2S */
	&__stop_program,		/* 0xAC #28 AC1 */
	&__stop_program,		/* 0xB0 #29 TCC3 */
};

void
__reset_handler(void)
{
	volatile char *src, *dst;

	/* fill initialised and uninitialised variables */
	src = &__data_load_start;
	for (dst = &__data_start; dst < &__data_end; *dst++ = *src++);
	for (dst = &__bss_start; dst < &__bss_end; *dst++ = 0);

	main();
	__stop_program();
}

void
__stop_program(void)
{
	for (int volatile i = 0 ;; i++);
}
