#ifndef _QIN2440_VIRT_ADDR_H_
#define _QIN2440_VIRT_ADDR_H_

#define __SZ_16	0x00000010
#define __SZ_32	0x00000020
#define __SZ_64	0x00000040
#define __SZ_128 0x00000080
#define __SZ_256 0x00000100
#define __SZ_512 0x00000200

#define __SZ_1K   0x00000400
#define __SZ_2K   0x00000800
#define __SZ_4K   0x00001000
#define __SZ_8K   0x00002000
#define __SZ_16K  0x00004000
#define __SZ_32K  0x00008000
#define __SZ_64K  0x00010000
#define __SZ_128K 0x00020000
#define __SZ_256K 0x00040000
#define __SZ_512K 0x00080000

#define __SZ_1M   0x00100000
#define __SZ_2M   0x00200000
#define __SZ_4M   0x00400000
#define __SZ_8M   0x00800000
#define __SZ_16M  0x01000000
#define __SZ_32M  0x02000000
#define __SZ_48M  0x03000000
#define __SZ_64M  0x04000000
#define __SZ_128M 0x08000000
#define __SZ_256M 0x10000000
#define __SZ_512M 0x20000000

/*
 * The virtual start address
 */
#define QIN2440_VIRT_ADDR(x)    (0xF6000000 + x * __SZ_512K)

/*
 * Memory Controllers
 */
#define __BWSCON   (QIN2440_VIRT_ADDR(0) + 0x00)
#define __BANKCON0 (QIN2440_VIRT_ADDR(0) + 0x04)
#define __BANKCON1 (QIN2440_VIRT_ADDR(0) + 0x08)
#define __BANKCON2 (QIN2440_VIRT_ADDR(0) + 0x0C)
#define __BANKCON3 (QIN2440_VIRT_ADDR(0) + 0x10)
#define __BANKCON4 (QIN2440_VIRT_ADDR(0) + 0x14)
#define __BANKCON5 (QIN2440_VIRT_ADDR(0) + 0x18)
#define __BANKCON6 (QIN2440_VIRT_ADDR(0) + 0x1C)
#define __BANKCON7 (QIN2440_VIRT_ADDR(0) + 0x20)
#define __REFRESH  (QIN2440_VIRT_ADDR(0) + 0x24)
#define __BANKSIZE (QIN2440_VIRT_ADDR(0) + 0x28)
#define __MRSRB6   (QIN2440_VIRT_ADDR(0) + 0x2C)
#define __MRSRB7   (QIN2440_VIRT_ADDR(0) + 0x30)

/*
 * USB Host Controller
 */
#define __HcRevision         (QIN2440_VIRT_ADDR(1) + 0x00)
#define __HcControl          (QIN2440_VIRT_ADDR(1) + 0x04)
#define __HcCommonStatus     (QIN2440_VIRT_ADDR(1) + 0x08)
#define __HcInterruptStatus  (QIN2440_VIRT_ADDR(1) + 0x0C)
#define __HcInterruptEnable  (QIN2440_VIRT_ADDR(1) + 0x10)
#define __HcInterruptDisable (QIN2440_VIRT_ADDR(1) + 0x14)
#define __HcHCCA             (QIN2440_VIRT_ADDR(1) + 0x18)
#define __HcPeriodCuttentED  (QIN2440_VIRT_ADDR(1) + 0x1C)
#define __HcControlHeadED    (QIN2440_VIRT_ADDR(1) + 0x20)
#define __HcControlCurrentED (QIN2440_VIRT_ADDR(1) + 0x24)
#define __HcBulkHeadED       (QIN2440_VIRT_ADDR(1) + 0x28)
#define __HcBulkCurrentED    (QIN2440_VIRT_ADDR(1) + 0x2C)
#define __HcDoneHead         (QIN2440_VIRT_ADDR(1) + 0x30)
#define __HcRmInterval       (QIN2440_VIRT_ADDR(1) + 0x34)
#define __HcFmRemaining      (QIN2440_VIRT_ADDR(1) + 0x38)
#define __HcFmNumber         (QIN2440_VIRT_ADDR(1) + 0x3C)
#define __HcPeriodicStart    (QIN2440_VIRT_ADDR(1) + 0x40)
#define __HcLSThreshold      (QIN2440_VIRT_ADDR(1) + 0x44)
#define __HcRhDescriptorA    (QIN2440_VIRT_ADDR(1) + 0x48)
#define __HcRhDescriptorB    (QIN2440_VIRT_ADDR(1) + 0x4C)
#define __HcRhStatus         (QIN2440_VIRT_ADDR(1) + 0x50)
#define __HcRhPortStatus1    (QIN2440_VIRT_ADDR(1) + 0x54)
#define __HcRhPortStatus2    (QIN2440_VIRT_ADDR(1) + 0x58)

/*
 * Interrupt Controller
 */
#define __SRCPND    (QIN2440_VIRT_ADDR(2) + 0x00)
#define __INTMOD    (QIN2440_VIRT_ADDR(2) + 0x04)
#define __INTMSK    (QIN2440_VIRT_ADDR(2) + 0x08)
#define __PRIORITY  (QIN2440_VIRT_ADDR(2) + 0x0C)
#define __INTPND    (QIN2440_VIRT_ADDR(2) + 0x10)
#define __INTOFFSET (QIN2440_VIRT_ADDR(2) + 0x14)
#define __SUBSRCPND (QIN2440_VIRT_ADDR(2) + 0x18)
#define __INTSUBMSK (QIN2440_VIRT_ADDR(2) + 0x1C)

/*
 * DMA
 */
#define __DISRC0     (QIN2440_VIRT_ADDR(3) + 0x00)
#define __DISRCC0    (QIN2440_VIRT_ADDR(3) + 0x04)
#define __DIDST0     (QIN2440_VIRT_ADDR(3) + 0x08)
#define __DIDSTC0    (QIN2440_VIRT_ADDR(3) + 0x0C)
#define __DCON0      (QIN2440_VIRT_ADDR(3) + 0x10)
#define __DSTAT0     (QIN2440_VIRT_ADDR(3) + 0x14)
#define __DCSRC0     (QIN2440_VIRT_ADDR(3) + 0x18)
#define __DCDST0     (QIN2440_VIRT_ADDR(3) + 0x1C)
#define __DMASKTRIG0 (QIN2440_VIRT_ADDR(3) + 0x20)
#define __DISRC1     (QIN2440_VIRT_ADDR(3) + 0x40)
#define __DISRCC1    (QIN2440_VIRT_ADDR(3) + 0x44)
#define __DIDST1     (QIN2440_VIRT_ADDR(3) + 0x48)
#define __DIDSTC1    (QIN2440_VIRT_ADDR(3) + 0x4C)
#define __DCON1      (QIN2440_VIRT_ADDR(3) + 0x50)
#define __DSTAT1     (QIN2440_VIRT_ADDR(3) + 0x54)
#define __DCSRC1     (QIN2440_VIRT_ADDR(3) + 0x58)
#define __DCDST1     (QIN2440_VIRT_ADDR(3) + 0x5C)
#define __DMASKTRIG1 (QIN2440_VIRT_ADDR(3) + 0x60)
#define __DISRC2     (QIN2440_VIRT_ADDR(3) + 0x80)
#define __DISRCC2    (QIN2440_VIRT_ADDR(3) + 0x84)
#define __DIDST2     (QIN2440_VIRT_ADDR(3) + 0x88)
#define __DIDSTC2    (QIN2440_VIRT_ADDR(3) + 0x8C)
#define __DCON2      (QIN2440_VIRT_ADDR(3) + 0x90)
#define __DSTAT2     (QIN2440_VIRT_ADDR(3) + 0x94)
#define __DCSRC2     (QIN2440_VIRT_ADDR(3) + 0x98)
#define __DCDST2     (QIN2440_VIRT_ADDR(3) + 0x9C)
#define __DMASKTRIG2 (QIN2440_VIRT_ADDR(3) + 0xA0)
#define __DISRC3     (QIN2440_VIRT_ADDR(3) + 0xC0)
#define __DISRCC3    (QIN2440_VIRT_ADDR(3) + 0xC4)
#define __DIDST3     (QIN2440_VIRT_ADDR(3) + 0xC8)
#define __DIDSTC3    (QIN2440_VIRT_ADDR(3) + 0xCC)
#define __DCON3      (QIN2440_VIRT_ADDR(3) + 0xD0)
#define __DSTAT3     (QIN2440_VIRT_ADDR(3) + 0xD4)
#define __DCSRC3     (QIN2440_VIRT_ADDR(3) + 0xD8)
#define __DCDST3     (QIN2440_VIRT_ADDR(3) + 0xDC)
#define __DMASKTRIG3 (QIN2440_VIRT_ADDR(3) + 0xE0)

/*
 * Clock & Power Management
 */
#define __LOCKTIME (QIN2440_VIRT_ADDR(4) + 0x00)
#define __MPLLCON  (QIN2440_VIRT_ADDR(4) + 0x04)
#define __UPLLCON  (QIN2440_VIRT_ADDR(4) + 0x08)
#define __CLKCON   (QIN2440_VIRT_ADDR(4) + 0x0C)
#define __CLKSLOW  (QIN2440_VIRT_ADDR(4) + 0x10)
#define __CLKDIVN  (QIN2440_VIRT_ADDR(4) + 0x14)
#define __CAMDIVN  (QIN2440_VIRT_ADDR(4) + 0x18)

/*
 * LCD Controller
 */
#define __LCDCON1   (QIN2440_VIRT_ADDR(5) + 0x00)
#define __LCDCON2   (QIN2440_VIRT_ADDR(5) + 0x04)
#define __LCDCON3   (QIN2440_VIRT_ADDR(5) + 0x08)
#define __LCDCON4   (QIN2440_VIRT_ADDR(5) + 0x0C)
#define __LCDCON5   (QIN2440_VIRT_ADDR(5) + 0x10)
#define __LCDSADDR1 (QIN2440_VIRT_ADDR(5) + 0x14)
#define __LCDSADDR2 (QIN2440_VIRT_ADDR(5) + 0x18)
#define __LCDSADDR3 (QIN2440_VIRT_ADDR(5) + 0x1C)
#define __REDLUT    (QIN2440_VIRT_ADDR(5) + 0x20)
#define __GREENLUT  (QIN2440_VIRT_ADDR(5) + 0x24)
#define __BLUELUT   (QIN2440_VIRT_ADDR(5) + 0x28)
#define __DITHMODE  (QIN2440_VIRT_ADDR(5) + 0x4C)
#define __TPAL      (QIN2440_VIRT_ADDR(5) + 0x50)
#define __LCDINTPND (QIN2440_VIRT_ADDR(5) + 0x54)
#define __LCDSRCPND (QIN2440_VIRT_ADDR(5) + 0x58)
#define __LCDINTMSK (QIN2440_VIRT_ADDR(5) + 0x5C)
#define __TCONSEL   (QIN2440_VIRT_ADDR(5) + 0x60)

/*
 * NAND Flash
 */
#define __NFCONF   (QIN2440_VIRT_ADDR(6) + 0x00)
#define __NFCONT   (QIN2440_VIRT_ADDR(6) + 0x04)
#define __NFCMD    (QIN2440_VIRT_ADDR(6) + 0x08)
#define __NFADDR   (QIN2440_VIRT_ADDR(6) + 0x0C)
#define __NFDATA   (QIN2440_VIRT_ADDR(6) + 0x10)
#define __NFMECCD0 (QIN2440_VIRT_ADDR(6) + 0x14)
#define __NFMECCD1 (QIN2440_VIRT_ADDR(6) + 0x18)
#define __NFSECCD  (QIN2440_VIRT_ADDR(6) + 0x1C)
#define __NFSTAT   (QIN2440_VIRT_ADDR(6) + 0x20)
#define __NFESTAT0 (QIN2440_VIRT_ADDR(6) + 0x24)
#define __NFESTAT1 (QIN2440_VIRT_ADDR(6) + 0x28)
#define __NFMECC0  (QIN2440_VIRT_ADDR(6) + 0x2C)
#define __NFMECC1  (QIN2440_VIRT_ADDR(6) + 0x30)
#define __NFSECC   (QIN2440_VIRT_ADDR(6) + 0x34)
#define __NFSBLK   (QIN2440_VIRT_ADDR(6) + 0x38)
#define __NFEBLK   (QIN2440_VIRT_ADDR(6) + 0x3C)

/*
 * Camera Interface
 */
#define __CISRCFMT       (QIN2440_VIRT_ADDR(7) + 0x00)
#define __CIWDOFST       (QIN2440_VIRT_ADDR(7) + 0x04)
#define __CIGCTRL        (QIN2440_VIRT_ADDR(7) + 0x08)
#define __CICOYSA1       (QIN2440_VIRT_ADDR(7) + 0x18)
#define __CICOYSA2       (QIN2440_VIRT_ADDR(7) + 0x1C)
#define __CICOYSA3       (QIN2440_VIRT_ADDR(7) + 0x20)
#define __CICOYSA4       (QIN2440_VIRT_ADDR(7) + 0x24)
#define __CICOCBSA1      (QIN2440_VIRT_ADDR(7) + 0x28)
#define __CICOCBSA2      (QIN2440_VIRT_ADDR(7) + 0x2C)
#define __CICOCBSA3      (QIN2440_VIRT_ADDR(7) + 0x30)
#define __CICOCBSA4      (QIN2440_VIRT_ADDR(7) + 0x34)
#define __CICOCRSA1      (QIN2440_VIRT_ADDR(7) + 0x38)
#define __CICOCRSA2      (QIN2440_VIRT_ADDR(7) + 0x3C)
#define __CICOCRSA3      (QIN2440_VIRT_ADDR(7) + 0x40)
#define __CICOCRSA4      (QIN2440_VIRT_ADDR(7) + 0x44)
#define __CICOTRGFMT     (QIN2440_VIRT_ADDR(7) + 0x48)
#define __CICOCTRL       (QIN2440_VIRT_ADDR(7) + 0x4C)
#define __CICOSCPRERATIO (QIN2440_VIRT_ADDR(7) + 0x50)
#define __CICOSCPREDST   (QIN2440_VIRT_ADDR(7) + 0x54)
#define __CICOSCCTRL     (QIN2440_VIRT_ADDR(7) + 0x58)
#define __CICOTAREA      (QIN2440_VIRT_ADDR(7) + 0x5C)
#define __CICOSTATUS     (QIN2440_VIRT_ADDR(7) + 0x64)
#define __CIPRCLRSA1     (QIN2440_VIRT_ADDR(7) + 0x6C)
#define __CIPRCLRSA2     (QIN2440_VIRT_ADDR(7) + 0x70)
#define __CIPRCLRSA3     (QIN2440_VIRT_ADDR(7) + 0x74)
#define __CIPRCLRSA4     (QIN2440_VIRT_ADDR(7) + 0x78)
#define __CIPRTRGFMT     (QIN2440_VIRT_ADDR(7) + 0x7C)
#define __CIPRCTRL       (QIN2440_VIRT_ADDR(7) + 0x80)
#define __CIPRSCPRERATIO (QIN2440_VIRT_ADDR(7) + 0x84)
#define __CIPRSCPREDST   (QIN2440_VIRT_ADDR(7) + 0x88)
#define __CIPRSCCTRL     (QIN2440_VIRT_ADDR(7) + 0x8C)
#define __CIPRTAREA      (QIN2440_VIRT_ADDR(7) + 0x90)
#define __CIPRSTATUS     (QIN2440_VIRT_ADDR(7) + 0x98)
#define __CIIMGCPT       (QIN2440_VIRT_ADDR(7) + 0xA0)

/*
 * UART
 */
#define __ULCON0   (QIN2440_VIRT_ADDR(8) + 0x0000)
#define __UCON0    (QIN2440_VIRT_ADDR(8) + 0x0004)
#define __UFCON0   (QIN2440_VIRT_ADDR(8) + 0x0008)
#define __UMCON0   (QIN2440_VIRT_ADDR(8) + 0x000C)
#define __UTRSTAT0 (QIN2440_VIRT_ADDR(8) + 0x0010)
#define __UERSTAT0 (QIN2440_VIRT_ADDR(8) + 0x0014)
#define __UFSTAT0  (QIN2440_VIRT_ADDR(8) + 0x0018)
#define __UMSTAT0  (QIN2440_VIRT_ADDR(8) + 0x001C)
#define __UTXH0    (QIN2440_VIRT_ADDR(8) + 0x0020)
#define __URXH0    (QIN2440_VIRT_ADDR(8) + 0x0024)
#define __UBRDIV0  (QIN2440_VIRT_ADDR(8) + 0x0028)
#define __ULCON1   (QIN2440_VIRT_ADDR(8) + 0x4000)
#define __UCON1    (QIN2440_VIRT_ADDR(8) + 0x4004)
#define __UFCON1   (QIN2440_VIRT_ADDR(8) + 0x4008)
#define __UMCON1   (QIN2440_VIRT_ADDR(8) + 0x400C)
#define __UTRSTAT1 (QIN2440_VIRT_ADDR(8) + 0x4010)
#define __UERSTAT1 (QIN2440_VIRT_ADDR(8) + 0x4014)
#define __UFSTAT1  (QIN2440_VIRT_ADDR(8) + 0x4018)
#define __UMSTAT1  (QIN2440_VIRT_ADDR(8) + 0x401C)
#define __UTXH1    (QIN2440_VIRT_ADDR(8) + 0x4020)
#define __URXH1    (QIN2440_VIRT_ADDR(8) + 0x4024)
#define __UBRDIV1  (QIN2440_VIRT_ADDR(8) + 0x4028)
#define __ULCON2   (QIN2440_VIRT_ADDR(8) + 0x8000)
#define __UCON2    (QIN2440_VIRT_ADDR(8) + 0x8004)
#define __UFCON2   (QIN2440_VIRT_ADDR(8) + 0x8008)
#define __UTRSTAT2 (QIN2440_VIRT_ADDR(8) + 0x8010)
#define __UERSTAT2 (QIN2440_VIRT_ADDR(8) + 0x8014)
#define __UFSTAT2  (QIN2440_VIRT_ADDR(8) + 0x8018)
#define __UTXH2    (QIN2440_VIRT_ADDR(8) + 0x8020)
#define __URXH2    (QIN2440_VIRT_ADDR(8) + 0x8024)
#define __UBRDIV2  (QIN2440_VIRT_ADDR(8) + 0x8028)

/*
 * PWM Timer
 */
#define __TCFG0  (QIN2440_VIRT_ADDR(9) + 0x00)
#define __TCFG1  (QIN2440_VIRT_ADDR(9) + 0x04)
#define __TCON   (QIN2440_VIRT_ADDR(9) + 0x08)
#define __TCNTB0 (QIN2440_VIRT_ADDR(9) + 0x0C)
#define __TCMPB0 (QIN2440_VIRT_ADDR(9) + 0x10)
#define __TCNTO0 (QIN2440_VIRT_ADDR(9) + 0x14)
#define __TCNTB1 (QIN2440_VIRT_ADDR(9) + 0x18)
#define __TCMPB1 (QIN2440_VIRT_ADDR(9) + 0x1C)
#define __TCNTO1 (QIN2440_VIRT_ADDR(9) + 0x20)
#define __TCNTB2 (QIN2440_VIRT_ADDR(9) + 0x24)
#define __TCMPB2 (QIN2440_VIRT_ADDR(9) + 0x28)
#define __TCNTO2 (QIN2440_VIRT_ADDR(9) + 0x2C)
#define __TCNTB3 (QIN2440_VIRT_ADDR(9) + 0x30)
#define __TCMPB3 (QIN2440_VIRT_ADDR(9) + 0x34)
#define __TCNTO3 (QIN2440_VIRT_ADDR(9) + 0x38)
#define __TCNTB4 (QIN2440_VIRT_ADDR(9) + 0x3C)
#define __TCNTO4 (QIN2440_VIRT_ADDR(9) + 0x40)

/*
 * USB Device
 */
#define __FUNC_ADDR_REG     (QIN2440_VIRT_ADDR(10) + 0x140)
#define __PWR_REG           (QIN2440_VIRT_ADDR(10) + 0x144)
#define __EP_INT_REG        (QIN2440_VIRT_ADDR(10) + 0x148)
#define __USB_INT_REG       (QIN2440_VIRT_ADDR(10) + 0x158)
#define __EP_INT_EN_REG     (QIN2440_VIRT_ADDR(10) + 0x15C)
#define __USB_INT_EN_REG    (QIN2440_VIRT_ADDR(10) + 0x16C)
#define __FRAME_NUM1_REG    (QIN2440_VIRT_ADDR(10) + 0x170)
#define __FRAME_NUM2_REG    (QIN2440_VIRT_ADDR(10) + 0x174)
#define __INDEX_REG         (QIN2440_VIRT_ADDR(10) + 0x178)
#define __EP0_CSR           (QIN2440_VIRT_ADDR(10) + 0x184)
#define __IN_CSR1_REG       (QIN2440_VIRT_ADDR(10) + 0x184)
#define __IN_CSR2_REG       (QIN2440_VIRT_ADDR(10) + 0x188)
#define __MAXP_REG          (QIN2440_VIRT_ADDR(10) + 0x180)
#define __OUT_CSR1_REG      (QIN2440_VIRT_ADDR(10) + 0x190)
#define __OUT_CSR2_REG      (QIN2440_VIRT_ADDR(10) + 0x194)
#define __OUT_FIFO_CNT1_REG (QIN2440_VIRT_ADDR(10) + 0x198)
#define __OUT_FIFO_CNT2_REG (QIN2440_VIRT_ADDR(10) + 0x19C)
#define __EP0_FIFO          (QIN2440_VIRT_ADDR(10) + 0x1C0)
#define __EP1_FIFO          (QIN2440_VIRT_ADDR(10) + 0x1C4)
#define __EP2_FIFO          (QIN2440_VIRT_ADDR(10) + 0x1C8)
#define __EP3_FIFO          (QIN2440_VIRT_ADDR(10) + 0x1CC)
#define __EP4_FIFO          (QIN2440_VIRT_ADDR(10) + 0x1D0)
#define __EP1_DMA_CON       (QIN2440_VIRT_ADDR(10) + 0x200)
#define __EP1_DMA_UNIT      (QIN2440_VIRT_ADDR(10) + 0x204)
#define __EP1_DMA_FIFO      (QIN2440_VIRT_ADDR(10) + 0x208)
#define __EP1_DMA_TTC_L     (QIN2440_VIRT_ADDR(10) + 0x20C)
#define __EP1_DMA_TTC_M     (QIN2440_VIRT_ADDR(10) + 0x210)
#define __EP1_DMA_TTC_H     (QIN2440_VIRT_ADDR(10) + 0x214)
#define __EP2_DMA_CON       (QIN2440_VIRT_ADDR(10) + 0x218)
#define __EP2_DMA_UNIT      (QIN2440_VIRT_ADDR(10) + 0x21C)
#define __EP2_DMA_FIFO      (QIN2440_VIRT_ADDR(10) + 0x220)
#define __EP2_DMA_TTC_L     (QIN2440_VIRT_ADDR(10) + 0x224)
#define __EP2_DMA_TTC_M     (QIN2440_VIRT_ADDR(10) + 0x228)
#define __EP2_DMA_TTC_H     (QIN2440_VIRT_ADDR(10) + 0x22C)
#define __EP3_DMA_CON       (QIN2440_VIRT_ADDR(10) + 0x240)
#define __EP3_DMA_UNIT      (QIN2440_VIRT_ADDR(10) + 0x244)
#define __EP3_DMA_FIFO      (QIN2440_VIRT_ADDR(10) + 0x248)
#define __EP3_DMA_TTC_L     (QIN2440_VIRT_ADDR(10) + 0x24C)
#define __EP3_DMA_TTC_M     (QIN2440_VIRT_ADDR(10) + 0x250)
#define __EP3_DMA_TTC_H     (QIN2440_VIRT_ADDR(10) + 0x254)
#define __EP4_DMA_CON       (QIN2440_VIRT_ADDR(10) + 0x258)
#define __EP4_DMA_UNIT      (QIN2440_VIRT_ADDR(10) + 0x25C)
#define __EP4_DMA_FIFO      (QIN2440_VIRT_ADDR(10) + 0x260)
#define __EP4_DMA_TTC_L     (QIN2440_VIRT_ADDR(10) + 0x264)
#define __EP4_DMA_TTC_M     (QIN2440_VIRT_ADDR(10) + 0x268)
#define __EP4_DMA_TTC_H     (QIN2440_VIRT_ADDR(10) + 0x26C)

/*
 * Watchdog Timer
 */
#define __WTCON (QIN2440_VIRT_ADDR(11) + 0x0)
#define __WTDAT (QIN2440_VIRT_ADDR(11) + 0x4)
#define __WTCNT (QIN2440_VIRT_ADDR(11) + 0x8)

/*
 * IIC
 */
#define __IICCON  (QIN2440_VIRT_ADDR(12) + 0x00)
#define __IICSTAT (QIN2440_VIRT_ADDR(12) + 0x04)
#define __IICADD  (QIN2440_VIRT_ADDR(12) + 0x08)
#define __IICDS   (QIN2440_VIRT_ADDR(12) + 0x0C)
#define __IICLC   (QIN2440_VIRT_ADDR(12) + 0x10)

/*
 * IIS
 */
#define __IISCON  (QIN2440_VIRT_ADDR(13) + 0x00)
#define __IISMOD  (QIN2440_VIRT_ADDR(13) + 0x04)
#define __IISPSR  (QIN2440_VIRT_ADDR(13) + 0x08)
#define __IISFCON (QIN2440_VIRT_ADDR(13) + 0x0C)
#define __IISFIFO (QIN2440_VIRT_ADDR(13) + 0x10)

/*
 * I/O port
 */
#define __GPACON   (QIN2440_VIRT_ADDR(14) + 0x00)
#define __GPADAT   (QIN2440_VIRT_ADDR(14) + 0x04)
#define __GPBCON   (QIN2440_VIRT_ADDR(14) + 0x10)
#define __GPBDAT   (QIN2440_VIRT_ADDR(14) + 0x14)
#define __GPBUP    (QIN2440_VIRT_ADDR(14) + 0x18)
#define __GPCCON   (QIN2440_VIRT_ADDR(14) + 0x20)
#define __GPCDAT   (QIN2440_VIRT_ADDR(14) + 0x24)
#define __GPCUP    (QIN2440_VIRT_ADDR(14) + 0x28)
#define __GPDCON   (QIN2440_VIRT_ADDR(14) + 0x30)
#define __GPDDA1T  (QIN2440_VIRT_ADDR(14) + 0x34)
#define __GPDUP    (QIN2440_VIRT_ADDR(14) + 0x38)
#define __GPECON   (QIN2440_VIRT_ADDR(14) + 0x40)
#define __GPEDAT   (QIN2440_VIRT_ADDR(14) + 0x44)
#define __GPEUP    (QIN2440_VIRT_ADDR(14) + 0x48)
#define __GPFCON   (QIN2440_VIRT_ADDR(14) + 0x50)
#define __GPFDAT   (QIN2440_VIRT_ADDR(14) + 0x54)
#define __GPFUP    (QIN2440_VIRT_ADDR(14) + 0x58)
#define __GPGCON   (QIN2440_VIRT_ADDR(14) + 0x60)
#define __GPGDAT   (QIN2440_VIRT_ADDR(14) + 0x64)
#define __GPGUP    (QIN2440_VIRT_ADDR(14) + 0x68)
#define __GPHCON   (QIN2440_VIRT_ADDR(14) + 0x70)
#define __GPHDAT   (QIN2440_VIRT_ADDR(14) + 0x74)
#define __GPHUP    (QIN2440_VIRT_ADDR(14) + 0x78)
#define __GPJCON   (QIN2440_VIRT_ADDR(14) + 0xD0)
#define __GPJDAT   (QIN2440_VIRT_ADDR(14) + 0xD4)
#define __GPJUP    (QIN2440_VIRT_ADDR(14) + 0xD8)
#define __MISCCR   (QIN2440_VIRT_ADDR(14) + 0x80)
#define __DCLKCON  (QIN2440_VIRT_ADDR(14) + 0x84)
#define __EXTINT0  (QIN2440_VIRT_ADDR(14) + 0x88)
#define __EXTINT1  (QIN2440_VIRT_ADDR(14) + 0x8C)
#define __EXTINT2  (QIN2440_VIRT_ADDR(14) + 0x90)
#define __EINTFLT0 (QIN2440_VIRT_ADDR(14) + 0x94)
#define __EINTFLT1 (QIN2440_VIRT_ADDR(14) + 0x98)
#define __EINTFLT2 (QIN2440_VIRT_ADDR(14) + 0x9C)
#define __EINTFLT3 (QIN2440_VIRT_ADDR(14) + 0xA0)
#define __EINTMASK (QIN2440_VIRT_ADDR(14) + 0xA4)
#define __EINTPEND (QIN2440_VIRT_ADDR(14) + 0xA8)
#define __GSTATUS0 (QIN2440_VIRT_ADDR(14) + 0xAC)
#define __GSTATUS1 (QIN2440_VIRT_ADDR(14) + 0xB0)
#define __GSTATUS2 (QIN2440_VIRT_ADDR(14) + 0xB4)
#define __GSTATUS3 (QIN2440_VIRT_ADDR(14) + 0xB8)
#define __GSTATUS4 (QIN2440_VIRT_ADDR(14) + 0xBC)
#define __MSLCON   (QIN2440_VIRT_ADDR(14) + 0xCC)

/*
 * RTC
 */
#define __RTCCON  (QIN2440_VIRT_ADDR(15) + 0x40)
#define __TICNT   (QIN2440_VIRT_ADDR(15) + 0x44)
#define __RTCALM  (QIN2440_VIRT_ADDR(15) + 0x50)
#define __ALMSEC  (QIN2440_VIRT_ADDR(15) + 0x54)
#define __ALMMIN  (QIN2440_VIRT_ADDR(15) + 0x58)
#define __ALMHOUR (QIN2440_VIRT_ADDR(15) + 0x5C)
#define __ALMDATE (QIN2440_VIRT_ADDR(15) + 0x60)
#define __ALMMON  (QIN2440_VIRT_ADDR(15) + 0x64)
#define __ALMYEAR (QIN2440_VIRT_ADDR(15) + 0x68)
#define __BCDSEC  (QIN2440_VIRT_ADDR(15) + 0x70)
#define __BCDMIN  (QIN2440_VIRT_ADDR(15) + 0x74)
#define __BCDHOUR (QIN2440_VIRT_ADDR(15) + 0x78)
#define __BCDDATE (QIN2440_VIRT_ADDR(15) + 0x7C)
#define __BCDDAY  (QIN2440_VIRT_ADDR(15) + 0x80)
#define __BCDMON  (QIN2440_VIRT_ADDR(15) + 0x84)
#define __BCDYEAR (QIN2440_VIRT_ADDR(15) + 0x88)

/*
 * A/D Converter
 */
#define __ADCCON  (QIN2440_VIRT_ADDR(16) + 0x00)
#define __ADCTSC  (QIN2440_VIRT_ADDR(16) + 0x04)
#define __ADCDLY  (QIN2440_VIRT_ADDR(16) + 0x08)
#define __ADCDAT0 (QIN2440_VIRT_ADDR(16) + 0x0C)
#define __ADCDAT1 (QIN2440_VIRT_ADDR(16) + 0x10)
#define __ADCUPDN (QIN2440_VIRT_ADDR(16) + 0x14)

/*
 * SPI
 */
#define __SPCON0  (QIN2440_VIRT_ADDR(17) + 0x00)
#define __SPSTA0  (QIN2440_VIRT_ADDR(17) + 0x04)
#define __SPPIN0  (QIN2440_VIRT_ADDR(17) + 0x08)
#define __SPPRE0  (QIN2440_VIRT_ADDR(17) + 0x0C)
#define __SPTDAT0 (QIN2440_VIRT_ADDR(17) + 0x10)
#define __SPRDAT0 (QIN2440_VIRT_ADDR(17) + 0x14)
#define __SPCON1  (QIN2440_VIRT_ADDR(17) + 0x20)
#define __SPSTA1  (QIN2440_VIRT_ADDR(17) + 0x24)
#define __SPPIN1  (QIN2440_VIRT_ADDR(17) + 0x28)
#define __SPPRE1  (QIN2440_VIRT_ADDR(17) + 0x2C)
#define __SPTDAT1 (QIN2440_VIRT_ADDR(17) + 0x30)
#define __SPRDAT1 (QIN2440_VIRT_ADDR(17) + 0x34)

/*
 * SD Interface
 */
#define __SDICON    (QIN2440_VIRT_ADDR(18) + 0x00)
#define __SDIPRE    (QIN2440_VIRT_ADDR(18) + 0x04)
#define __SDICARG   (QIN2440_VIRT_ADDR(18) + 0x08)
#define __SDICCON   (QIN2440_VIRT_ADDR(18) + 0x0C)
#define __SDICSTA   (QIN2440_VIRT_ADDR(18) + 0x10)
#define __SDIRSP0   (QIN2440_VIRT_ADDR(18) + 0x14)
#define __SDIRSP1   (QIN2440_VIRT_ADDR(18) + 0x18)
#define __SDIRSP2   (QIN2440_VIRT_ADDR(18) + 0x1C)
#define __SDIRSP3   (QIN2440_VIRT_ADDR(18) + 0x20)
#define __SDIDTIMER (QIN2440_VIRT_ADDR(18) + 0x24)
#define __SDIBSIZE  (QIN2440_VIRT_ADDR(18) + 0x28)
#define __SDIDCON   (QIN2440_VIRT_ADDR(18) + 0x2C)
#define __SDIDCNT   (QIN2440_VIRT_ADDR(18) + 0x30)
#define __SDIDSTA   (QIN2440_VIRT_ADDR(18) + 0x34)
#define __SDIFSTA   (QIN2440_VIRT_ADDR(18) + 0x38)
#define __SDIIMSK   (QIN2440_VIRT_ADDR(18) + 0x3C)
#define __SDIDAT    (QIN2440_VIRT_ADDR(18) + 0x40)

/*
 * AC97 Audio-CODEC Interface
 */
#define __AC_GLBCTRL    (QIN2440_VIRT_ADDR(19) + 0x00)
#define __AC_GLBSTAT    (QIN2440_VIRT_ADDR(19) + 0x04)
#define __AC_CODEC_CMD  (QIN2440_VIRT_ADDR(19) + 0x08)
#define __AC_CODEC_STAT (QIN2440_VIRT_ADDR(19) + 0x0C)
#define __AC_PCMADDR    (QIN2440_VIRT_ADDR(19) + 0x10)
#define __AC_MICADDR    (QIN2440_VIRT_ADDR(19) + 0x14)
#define __AC_PCMDATA    (QIN2440_VIRT_ADDR(19) + 0x18)
#define __AC_MICDATA    (QIN2440_VIRT_ADDR(19) + 0x1C)

#endif
