#include <stddef.h>
#include <stdint.h>
#include <binary.h>

#define RTC ((struct zmcu_rtc *)0x40002800)

struct zmcu_rtc {
	
	/* 0x00: RTC time register */
	uint32_t volatile TR;
#define RTC_TR_PM				(1u << 22)
#define RTC_TR_HT(x)				(1u << 20)
#define RTC_TR_HU(x)				(1u << 16)
#define RTC_TR_MNT(x)				(1u << 12)
#define RTC_TR_MNU(x)				(1u << 8)
#define RTC_TR_ST(x)				(1u << 4)
#define RTC_TR_SU(x)				(1u << 0)

	/* 0x04: RTC date register */
	uint32_t volatile DR;
#define RTC_DR_YT(x)				(1u << 20)
#define RTC_DR_YU(x)				(1u << 16)
#define RTC_DR_WDU(x)				(1u << 13)
#define RTC_DR_MT				(1u << 12)
#define RTC_DR_MU(x)				(1u << 8)
#define RTC_DR_DT(x)				(1u << 4)
#define RTC_DR_DU(x)				(1u << 0)

	/* 0x08: RTC control register */
	uint32_t volatile CR;
#define RTC_CR_COE				(1u << 23)
#define RTC_CR_OSEL(x)				(1u << 21)
#define RTC_CR_POL				(1u << 20)
#define RTC_CR_COSEL				(1u << 19)
#define RTC_CR_BKP				(1u << 18)
#define RTC_CR_SUB1H				(1u << 17)
#define RTC_CR_ADD1H				(1u << 16)
#define RTC_CR_TSIE				(1u << 15)
#define RTC_CR_WUTIE				(1u << 14)
#define RTC_CR_ALRBIE				(1u << 13)
#define RTC_CR_ALRAIE				(1u << 12)
#define RTC_CR_TSE				(1u << 11)
#define RTC_CR_WUTE				(1u << 10)
#define RTC_CR_ALRBE				(1u << 9)
#define RTC_CR_ALRAE				(1u << 8)
#define RTC_CR_DCE				(1u << 7)
#define RTC_CR_FMT				(1u << 6)
#define RTC_CR_BYPSHAD				(1u << 5)
#define RTC_CR_REFCKON				(1u << 4)
#define RTC_CR_TSEDGE				(1u << 3)
#define RTC_CR_WUCKSEL(x)			(1u << 0)

	/* 0x0C: RTC initialization and status register */
	uint32_t volatile ISR;
#define RTC_ISR_RECALPF				(1u << 16)
#define RTC_ISR_TAMP1F				(1u << 13)
#define RTC_ISR_TSOVF				(1u << 12)
#define RTC_ISR_TSF				(1u << 11)
#define RTC_ISR_WUTF				(1u << 10)
#define RTC_ISR_ALRBF				(1u << 9)
#define RTC_ISR_ALRAF				(1u << 8)
#define RTC_ISR_INIT				(1u << 7)
#define RTC_ISR_INITF				(1u << 6)
#define RTC_ISR_RSF				(1u << 5)
#define RTC_ISR_INITS				(1u << 4)
#define RTC_ISR_SHPF				(1u << 3)
#define RTC_ISR_WUTWF				(1u << 2)
#define RTC_ISR_ALRBWF				(1u << 1)
#define RTC_ISR_ALRAWF				(1u << 0)

	/* 0x10: RTC prescaler register */
	uint32_t volatile PRER;
#define RTC_PRER_PREDIV_A(x)			(1u << 16)
#define RTC_PRER_PREDIV_S(x)			(1u << 0)

	/* 0x14: RTC wakeup timer register */
	uint32_t volatile WUTR;
#define RTC_WUTR_WUT(x)				(1u << 0)

	/* 0x18: RTC calibration register */
	uint32_t volatile CALIBR;
#define RTC_CALIBR_DCS				(1u << 7)
#define RTC_CALIBR_DC(x)			(1u << 0)

	/* 0x1C: RTC alarm A register */
	uint32_t volatile ALRMAR;
#define RTC_ALRMAR_MSK4				(1u << 31)
#define RTC_ALRMAR_WDSEL			(1u << 30)
#define RTC_ALRMAR_DT(x)			(1u << 28)
#define RTC_ALRMAR_DU(x)			(1u << 24)
#define RTC_ALRMAR_MSK3				(1u << 23)
#define RTC_ALRMAR_PM				(1u << 22)
#define RTC_ALRMAR_HT(x)			(1u << 20)
#define RTC_ALRMAR_HU(x)			(1u << 16)
#define RTC_ALRMAR_MSK2				(1u << 15)
#define RTC_ALRMAR_MNT(x)			(1u << 12)
#define RTC_ALRMAR_MNU(x)			(1u << 8)
#define RTC_ALRMAR_MSK1				(1u << 7)
#define RTC_ALRMAR_ST(x)			(1u << 4)
#define RTC_ALRMAR_SU(x)			(1u << 0)

	/* 0x20: RTC alarm B register */
	uint32_t volatile ALRMBR;
#define RTC_ALRMBR_MSK4				(1u << 31)
#define RTC_ALRMBR_WDSEL			(1u << 30)
#define RTC_ALRMBR_DT(x)			(1u << 28)
#define RTC_ALRMBR_DU(x)			(1u << 24)
#define RTC_ALRMBR_MSK3				(1u << 23)
#define RTC_ALRMBR_PM				(1u << 22)
#define RTC_ALRMBR_HT(x)			(1u << 20)
#define RTC_ALRMBR_HU(x)			(1u << 16)
#define RTC_ALRMBR_MSK2				(1u << 15)
#define RTC_ALRMBR_MNT(x)			(1u << 12)
#define RTC_ALRMBR_MNU(x)			(1u << 8)
#define RTC_ALRMBR_MSK1				(1u << 7)
#define RTC_ALRMBR_ST(x)			(1u << 4)
#define RTC_ALRMBR_SU(x)			(1u << 0)

	/* 0x24: RTC write protection register */
	uint32_t volatile WPR;
#define RTC_WPR_KEY(x)				(1u << 0)

	/* 0x28: RTC sub second register */
	uint32_t volatile SSR;
#define RTC_SSR_SS(x)				(1u << 0)

	/* 0x2C: RTC shift control register */
	uint32_t volatile SHIFTR;
#define RTC_SHIFTR_ADD1S			(1u << 31)
#define RTC_SHIFTR_SUBFS(x)			(1u << 0)

	/* 0x30: RTC time stamp time register */
	uint32_t volatile TSTR;
#define RTC_TSTR_PM				(1u << 22)
#define RTC_TSTR_HT(x)				(1u << 20)
#define RTC_TSTR_HU(x)				(1u << 16)
#define RTC_TSTR_MNT(x)				(1u << 12)
#define RTC_TSTR_MNU(x)				(1u << 8)
#define RTC_TSTR_ST(x)				(1u << 4)
#define RTC_TSTR_SU(x)				(1u << 0)

	/* 0x34: RTC time stamp date register */
	uint32_t volatile TSDR;
#define RTC_TSDR_WDU(x)				(1u << 13)
#define RTC_TSDR_MT				(1u << 12)
#define RTC_TSDR_MU(x)				(1u << 8)
#define RTC_TSDR_DT(x)				(1u << 4)
#define RTC_TSDR_DU(x)				(1u << 0)

	/* 0x38: RTC timestamp sub second register */
	uint32_t volatile TSSSR;
#define RTC_TSSSR_SS(x)				(1u << 0)

	/* 0x3C: RTC calibration register */
	uint32_t volatile CALR;
#define RTC_CALR_CALP				(1u << 15)
#define RTC_CALR_CALW8				(1u << 14)
#define RTC_CALR_CALW16				(1u << 13)
#define RTC_CALR_CALM(x)			(1u << 0)

	/* 0x40: RTC tamper and alternate function configuration register */
	uint32_t volatile TAFCR;
#define RTC_TAFCR_ALARMOUTTYPE			(1u << 18)
#define RTC_TAFCR_TSINSEL			(1u << 17)
#define RTC_TAFCR_TAMP1INSEL			(1u << 16)
#define RTC_TAFCR_TAMPPUDIS			(1u << 15)
#define RTC_TAFCR_TAMPPRCH(x)			(1u << 13)
#define RTC_TAFCR_TAMPFLT(x)			(1u << 11)
#define RTC_TAFCR_TAMPFREQ(x)			(1u << 8)
#define RTC_TAFCR_TAMPTS			(1u << 7)
#define RTC_TAFCR_TAMPIE			(1u << 2)
#define RTC_TAFCR_TAMP1TRG			(1u << 1)
#define RTC_TAFCR_TAMP1E			(1u << 0)

	/* 0x44: RTC alarm A sub second register */
	uint32_t volatile ALRMASSR;
#define RTC_ALRMASSR_MASKSS(x)			(1u << 24)
#define RTC_ALRMASSR_SS(x)			(1u << 0)

	/* 0x48: RTC alarm B sub second register */
	uint32_t volatile ALRMBSSR;
#define RTC_ALRMBSSR_MASKSS(x)			(1u << 24)
#define RTC_ALRMBSSR_SS(x)			(1u << 0)

	/* 0x4C */
	uint8_t volatile RESERVED20[0x50-0x4C];

	/* 0x50: RTC backup registers */
	uint32_t volatile BKPR[20];

};
