#ifndef __33FJ256GP710_H
#define __33FJ256GP710_H

extern volatile unsigned int  WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  SPLIM __attribute__((__sfr__));
extern volatile unsigned int  ACCAL __attribute__((__sfr__));
extern volatile unsigned int  ACCAH __attribute__((__sfr__));
extern volatile unsigned char ACCAU __attribute__((__sfr__));
extern volatile unsigned int  ACCBL __attribute__((__sfr__));
extern volatile unsigned int  ACCBH __attribute__((__sfr__));
extern volatile unsigned char ACCBU __attribute__((__sfr__));
extern volatile unsigned int  PCL __attribute__((__sfr__));
extern volatile unsigned char PCH __attribute__((__sfr__));
extern volatile unsigned char TBLPAG __attribute__((__sfr__));
extern volatile unsigned char PSVPAG __attribute__((__sfr__));
extern volatile unsigned int  RCOUNT __attribute__((__sfr__));
extern volatile unsigned int  DCOUNT __attribute__((__sfr__));
extern volatile unsigned int  DOSTARTL __attribute__((__sfr__));
extern volatile unsigned int  DOSTARTH __attribute__((__sfr__));
extern volatile unsigned int  DOENDL __attribute__((__sfr__));
extern volatile unsigned int  DOENDH __attribute__((__sfr__));
extern volatile unsigned int  SR __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned C:1;
    unsigned Z:1;
    unsigned OV:1;
    unsigned N:1;
    unsigned RA:1;
    unsigned IPL:3;
    unsigned DC:1;
    unsigned DA:1;
    unsigned SAB:1;
    unsigned OAB:1;
    unsigned SB:1;
    unsigned SA:1;
    unsigned OB:1;
    unsigned OA:1;
  };
  struct {
    unsigned :5;
    unsigned IPL0:1;
    unsigned IPL1:1;
    unsigned IPL2:1;
  };
} SRbits __attribute__((__sfr__));

extern volatile unsigned int  CORCON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IF:1;
    unsigned RND:1;
    unsigned PSV:1;
    unsigned IPL3:1;
    unsigned ACCSAT:1;
    unsigned SATDW:1;
    unsigned SATB:1;
    unsigned SATA:1;
    unsigned DL:3;
    unsigned EDT:1;
    unsigned US:1;
  };
  struct {
    unsigned :8;
    unsigned DL0:1;
    unsigned DL1:1;
    unsigned DL2:1;
  };
} CORCONbits __attribute__((__sfr__));

extern volatile unsigned int  MODCON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned XWM:4;
    unsigned YWM:4;
    unsigned BWM:4;
    unsigned :2;
    unsigned YMODEN:1;
    unsigned XMODEN:1;
  };
  struct {
    unsigned XWM0:1;
    unsigned XWM1:1;
    unsigned XWM2:1;
    unsigned XWM3:1;
    unsigned YWM0:1;
    unsigned YWM1:1;
    unsigned YWM2:1;
    unsigned YWM3:1;
    unsigned BWM0:1;
    unsigned BWM1:1;
    unsigned BWM2:1;
    unsigned BWM3:1;
  };
} MODCONbits __attribute__((__sfr__));

extern volatile unsigned int  XMODSRT __attribute__((__sfr__));
extern volatile unsigned int  XMODEND __attribute__((__sfr__));
extern volatile unsigned int  YMODSRT __attribute__((__sfr__));
extern volatile unsigned int  YMODEND __attribute__((__sfr__));
extern volatile unsigned int  XBREV __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned XB:15;
    unsigned BREN:1;
  };
  struct {
    unsigned XB0:1;
    unsigned XB1:1;
    unsigned XB2:1;
    unsigned XB3:1;
    unsigned XB4:1;
    unsigned XB5:1;
    unsigned XB6:1;
    unsigned XB7:1;
    unsigned XB8:1;
    unsigned XB9:1;
    unsigned XB10:1;
    unsigned XB11:1;
    unsigned XB12:1;
    unsigned XB13:1;
    unsigned XB14:1;
  };
} XBREVbits __attribute__((__sfr__));

extern volatile unsigned int  DISICNT __attribute__((__sfr__));
extern volatile unsigned int  CNEN1 __attribute__((__sfr__));
extern volatile struct {
  unsigned CN0IE:1;
  unsigned CN1IE:1;
  unsigned CN2IE:1;
  unsigned CN3IE:1;
  unsigned CN4IE:1;
  unsigned CN5IE:1;
  unsigned CN6IE:1;
  unsigned CN7IE:1;
  unsigned CN8IE:1;
  unsigned CN9IE:1;
  unsigned CN10IE:1;
  unsigned CN11IE:1;
  unsigned CN12IE:1;
  unsigned CN13IE:1;
  unsigned CN14IE:1;
  unsigned CN15IE:1;
} CNEN1bits __attribute__((__sfr__));

extern volatile unsigned int  CNEN2 __attribute__((__sfr__));
extern volatile struct {
  unsigned CN16IE:1;
  unsigned CN17IE:1;
  unsigned CN18IE:1;
  unsigned CN19IE:1;
  unsigned CN20IE:1;
  unsigned CN21IE:1;
  unsigned CN22IE:1;
  unsigned CN23IE:1;
} CNEN2bits __attribute__((__sfr__));

extern volatile unsigned int  CNPU1 __attribute__((__sfr__));
extern volatile struct {
  unsigned CN0PUE:1;
  unsigned CN1PUE:1;
  unsigned CN2PUE:1;
  unsigned CN3PUE:1;
  unsigned CN4PUE:1;
  unsigned CN5PUE:1;
  unsigned CN6PUE:1;
  unsigned CN7PUE:1;
  unsigned CN8PUE:1;
  unsigned CN9PUE:1;
  unsigned CN10PUE:1;
  unsigned CN11PUE:1;
  unsigned CN12PUE:1;
  unsigned CN13PUE:1;
  unsigned CN14PUE:1;
  unsigned CN15PUE:1;
} CNPU1bits __attribute__((__sfr__));

extern volatile unsigned int  CNPU2 __attribute__((__sfr__));
extern volatile struct {
  unsigned CN16PUE:1;
  unsigned CN17PUE:1;
  unsigned CN18PUE:1;
  unsigned CN19PUE:1;
  unsigned CN20PUE:1;
  unsigned CN21PUE:1;
  unsigned CN22PUE:1;
  unsigned CN23PUE:1;
} CNPU2bits __attribute__((__sfr__));

extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned DMACERR:1;
  unsigned DIV0ERR:1;
  unsigned SFTACERR:1;
  unsigned COVTE:1;
  unsigned OVBTE:1;
  unsigned OVATE:1;
  unsigned COVBERR:1;
  unsigned COVAERR:1;
  unsigned OVBERR:1;
  unsigned OVAERR:1;
  unsigned NSTDIS:1;
} INTCON1bits __attribute__((__sfr__));

extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
extern volatile struct {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned INT3EP:1;
  unsigned INT4EP:1;
  unsigned :9;
  unsigned DISI:1;
  unsigned ALTIVT:1;
} INTCON2bits __attribute__((__sfr__));

extern volatile unsigned int  IFS0 __attribute__((__sfr__));
extern volatile struct {
  unsigned INT0IF:1;
  unsigned IC1IF:1;
  unsigned OC1IF:1;
  unsigned T1IF:1;
  unsigned DMA0IF:1;
  unsigned IC2IF:1;
  unsigned OC2IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned SPI1EIF:1;
  unsigned SPI1IF:1;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned AD1IF:1;
  unsigned DMA1IF:1;
} IFS0bits __attribute__((__sfr__));

extern volatile unsigned int  IFS1 __attribute__((__sfr__));
extern volatile struct {
  unsigned SI2C1IF:1;
  unsigned MI2C1IF:1;
  unsigned :1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned AD2IF:1;
  unsigned IC7IF:1;
  unsigned IC8IF:1;
  unsigned DMA2IF:1;
  unsigned OC3IF:1;
  unsigned OC4IF:1;
  unsigned T4IF:1;
  unsigned T5IF:1;
  unsigned INT2IF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
} IFS1bits __attribute__((__sfr__));

extern volatile unsigned int  IFS2 __attribute__((__sfr__));
extern volatile struct {
  unsigned SPI2EIF:1;
  unsigned SPI2IF:1;
  unsigned C1RXIF:1;
  unsigned C1IF:1;
  unsigned DMA3IF:1;
  unsigned IC3IF:1;
  unsigned IC4IF:1;
  unsigned IC5IF:1;
  unsigned IC6IF:1;
  unsigned OC5IF:1;
  unsigned OC6IF:1;
  unsigned OC7IF:1;
  unsigned OC8IF:1;
  unsigned :1;
  unsigned DMA4IF:1;
  unsigned T6IF:1;
} IFS2bits __attribute__((__sfr__));

extern volatile unsigned int  IFS3 __attribute__((__sfr__));
extern volatile struct {
  unsigned T7IF:1;
  unsigned SI2C2IF:1;
  unsigned MI2C2IF:1;
  unsigned T8IF:1;
  unsigned T9IF:1;
  unsigned INT3IF:1;
  unsigned INT4IF:1;
  unsigned C2RXIF:1;
  unsigned C2IF:1;
  unsigned :2;
  unsigned DCIEIF:1;
  unsigned DCIIF:1;
  unsigned DMA5IF:1;
} IFS3bits __attribute__((__sfr__));

extern volatile unsigned int  IFS4 __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned U2EIF:1;
  unsigned :1;
  unsigned DMA6IF:1;
  unsigned DMA7IF:1;
  unsigned C1TXIF:1;
  unsigned C2TXIF:1;
} IFS4bits __attribute__((__sfr__));

extern volatile unsigned int  IEC0 __attribute__((__sfr__));
extern volatile struct {
  unsigned INT0IE:1;
  unsigned IC1IE:1;
  unsigned OC1IE:1;
  unsigned T1IE:1;
  unsigned DMA0IE:1;
  unsigned IC2IE:1;
  unsigned OC2IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned SPI1EIE:1;
  unsigned SPI1IE:1;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned AD1IE:1;
  unsigned DMA1IE:1;
} IEC0bits __attribute__((__sfr__));

extern volatile unsigned int  IEC1 __attribute__((__sfr__));
extern volatile struct {
  unsigned SI2C1IE:1;
  unsigned MI2C1IE:1;
  unsigned :1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned AD2IE:1;
  unsigned IC7IE:1;
  unsigned IC8IE:1;
  unsigned DMA2IE:1;
  unsigned OC3IE:1;
  unsigned OC4IE:1;
  unsigned T4IE:1;
  unsigned T5IE:1;
  unsigned INT2IE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
} IEC1bits __attribute__((__sfr__));

extern volatile unsigned int  IEC2 __attribute__((__sfr__));
extern volatile struct {
  unsigned SPI2EIE:1;
  unsigned SPI2IE:1;
  unsigned C1RXIE:1;
  unsigned C1IE:1;
  unsigned DMA3IE:1;
  unsigned IC3IE:1;
  unsigned IC4IE:1;
  unsigned IC5IE:1;
  unsigned IC6IE:1;
  unsigned OC5IE:1;
  unsigned OC6IE:1;
  unsigned OC7IE:1;
  unsigned OC8IE:1;
  unsigned :1;
  unsigned DMA4IE:1;
  unsigned T6IE:1;
} IEC2bits __attribute__((__sfr__));

extern volatile unsigned int  IEC3 __attribute__((__sfr__));
extern volatile struct {
  unsigned T7IE:1;
  unsigned SI2C2IE:1;
  unsigned MI2C2IE:1;
  unsigned T8IE:1;
  unsigned T9IE:1;
  unsigned INT3IE:1;
  unsigned INT4IE:1;
  unsigned C2RXIE:1;
  unsigned C2IE:1;
  unsigned :2;
  unsigned DCIEIE:1;
  unsigned DCIIE:1;
  unsigned DMA5IE:1;
} IEC3bits __attribute__((__sfr__));

extern volatile unsigned int  IEC4 __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned U2EIE:1;
  unsigned :1;
  unsigned DMA6IE:1;
  unsigned DMA7IE:1;
  unsigned C1TXIE:1;
  unsigned C2TXIE:1;
} IEC4bits __attribute__((__sfr__));

extern volatile unsigned int  IPC0 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned INT0IP:3;
    unsigned :1;
    unsigned IC1IP:3;
    unsigned :1;
    unsigned OC1IP:3;
    unsigned :1;
    unsigned T1IP:3;
  };
  struct {
    unsigned INT0IP0:1;
    unsigned INT0IP1:1;
    unsigned INT0IP2:1;
    unsigned :1;
    unsigned IC1IP0:1;
    unsigned IC1IP1:1;
    unsigned IC1IP2:1;
    unsigned :1;
    unsigned OC1IP0:1;
    unsigned OC1IP1:1;
    unsigned OC1IP2:1;
    unsigned :1;
    unsigned T1IP0:1;
    unsigned T1IP1:1;
    unsigned T1IP2:1;
  };
} IPC0bits __attribute__((__sfr__));

extern volatile unsigned int  IPC1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMA0IP:3;
    unsigned :1;
    unsigned IC2IP:3;
    unsigned :1;
    unsigned OC2IP:3;
    unsigned :1;
    unsigned T2IP:3;
  };
  struct {
    unsigned DMA0IP0:1;
    unsigned DMA0IP1:1;
    unsigned DMA0IP2:1;
    unsigned :1;
    unsigned IC2IP0:1;
    unsigned IC2IP1:1;
    unsigned IC2IP2:1;
    unsigned :1;
    unsigned OC2IP0:1;
    unsigned OC2IP1:1;
    unsigned OC2IP2:1;
    unsigned :1;
    unsigned T2IP0:1;
    unsigned T2IP1:1;
    unsigned T2IP2:1;
  };
} IPC1bits __attribute__((__sfr__));

extern volatile unsigned int  IPC2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned T3IP:3;
    unsigned :1;
    unsigned SPI1EIP:3;
    unsigned :1;
    unsigned SPI1IP:3;
    unsigned :1;
    unsigned U1RXIP:3;
  };
  struct {
    unsigned T3IP0:1;
    unsigned T3IP1:1;
    unsigned T3IP2:1;
    unsigned :1;
    unsigned SPI1EIP0:1;
    unsigned SPI1EIP1:1;
    unsigned SPI1EIP2:1;
    unsigned :1;
    unsigned SPI1IP0:1;
    unsigned SPI1IP1:1;
    unsigned SPI1IP2:1;
    unsigned :1;
    unsigned U1RXIP0:1;
    unsigned U1RXIP1:1;
    unsigned U1RXIP2:1;
  };
} IPC2bits __attribute__((__sfr__));

extern volatile unsigned int  IPC3 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned U1TXIP:3;
    unsigned :1;
    unsigned AD1IP:3;
    unsigned :1;
    unsigned DMA1IP:3;
  };
  struct {
    unsigned U1TXIP0:1;
    unsigned U1TXIP1:1;
    unsigned U1TXIP2:1;
    unsigned :1;
    unsigned AD1IP0:1;
    unsigned AD1IP1:1;
    unsigned AD1IP2:1;
    unsigned :1;
    unsigned DMA1IP0:1;
    unsigned DMA1IP1:1;
    unsigned DMA1IP2:1;
  };
} IPC3bits __attribute__((__sfr__));

extern volatile unsigned int  IPC4 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned SI2C1IP:3;
    unsigned :1;
    unsigned MI2C1IP:3;
    unsigned :5;
    unsigned CNIP:3;
  };
  struct {
    unsigned SI2C1IP0:1;
    unsigned SI2C1IP1:1;
    unsigned SI2C1IP2:1;
    unsigned :1;
    unsigned MI2C1IP0:1;
    unsigned MI2C1IP1:1;
    unsigned MI2C1IP2:1;
    unsigned :5;
    unsigned CNIP0:1;
    unsigned CNIP1:1;
    unsigned CNIP2:1;
  };
} IPC4bits __attribute__((__sfr__));

extern volatile unsigned int  IPC5 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned INT1IP:3;
    unsigned :1;
    unsigned AD2IP:3;
    unsigned :1;
    unsigned IC7IP:3;
    unsigned :1;
    unsigned IC8IP:3;
  };
  struct {
    unsigned INT1IP0:1;
    unsigned INT1IP1:1;
    unsigned INT1IP2:1;
    unsigned :1;
    unsigned AD2IP0:1;
    unsigned AD2IP1:1;
    unsigned AD2IP2:1;
    unsigned :1;
    unsigned IC7IP0:1;
    unsigned IC7IP1:1;
    unsigned IC7IP2:1;
    unsigned :1;
    unsigned IC8IP0:1;
    unsigned IC8IP1:1;
    unsigned IC8IP2:1;
  };
} IPC5bits __attribute__((__sfr__));

extern volatile unsigned int  IPC6 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMA2IP:3;
    unsigned :1;
    unsigned OC3IP:3;
    unsigned :1;
    unsigned OC4IP:3;
    unsigned :1;
    unsigned T4IP:3;
  };
  struct {
    unsigned DMA2IP0:1;
    unsigned DMA2IP1:1;
    unsigned DMA2IP2:1;
    unsigned :1;
    unsigned OC3IP0:1;
    unsigned OC3IP1:1;
    unsigned OC3IP2:1;
    unsigned :1;
    unsigned OC4IP0:1;
    unsigned OC4IP1:1;
    unsigned OC4IP2:1;
    unsigned :1;
    unsigned T4IP0:1;
    unsigned T4IP1:1;
    unsigned T4IP2:1;
  };
} IPC6bits __attribute__((__sfr__));

extern volatile unsigned int  IPC7 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned T5IP:3;
    unsigned :1;
    unsigned INT2IP:3;
    unsigned :1;
    unsigned U2RXIP:3;
    unsigned :1;
    unsigned U2TXIP:3;
  };
  struct {
    unsigned T5IP0:1;
    unsigned T5IP1:1;
    unsigned T5IP2:1;
    unsigned :1;
    unsigned INT2IP0:1;
    unsigned INT2IP1:1;
    unsigned INT2IP2:1;
    unsigned :1;
    unsigned U2RXIP0:1;
    unsigned U2RXIP1:1;
    unsigned U2RXIP2:1;
    unsigned :1;
    unsigned U2TXIP0:1;
    unsigned U2TXIP1:1;
    unsigned U2TXIP2:1;
  };
} IPC7bits __attribute__((__sfr__));

extern volatile unsigned int  IPC8 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned SPI2EIP:3;
    unsigned :1;
    unsigned SPI2IP:3;
    unsigned :1;
    unsigned C1RXIP:3;
    unsigned :1;
    unsigned C1IP:3;
  };
  struct {
    unsigned SPI2EIP0:1;
    unsigned SPI2EIP1:1;
    unsigned SPI2EIP2:1;
    unsigned :1;
    unsigned SPI2IP0:1;
    unsigned SPI2IP1:1;
    unsigned SPI2IP2:1;
    unsigned :1;
    unsigned C1RXIP0:1;
    unsigned C1RXIP1:1;
    unsigned C1RXIP2:1;
    unsigned :1;
    unsigned C1IP0:1;
    unsigned C1IP1:1;
    unsigned C1IP2:1;
  };
} IPC8bits __attribute__((__sfr__));

extern volatile unsigned int  IPC9 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMA3IP:3;
    unsigned :1;
    unsigned IC3IP:3;
    unsigned :1;
    unsigned IC4IP:3;
    unsigned :1;
    unsigned IC5IP:3;
  };
  struct {
    unsigned DMA3IP0:1;
    unsigned DMA3IP1:1;
    unsigned DMA3IP2:1;
    unsigned :1;
    unsigned IC3IP0:1;
    unsigned IC3IP1:1;
    unsigned IC3IP2:1;
    unsigned :1;
    unsigned IC4IP0:1;
    unsigned IC4IP1:1;
    unsigned IC4IP2:1;
    unsigned :1;
    unsigned IC5IP0:1;
    unsigned IC5IP1:1;
    unsigned IC5IP2:1;
  };
} IPC9bits __attribute__((__sfr__));

extern volatile unsigned int  IPC10 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IC6IP:3;
    unsigned :1;
    unsigned OC5IP:3;
    unsigned :1;
    unsigned OC6IP:3;
    unsigned :1;
    unsigned OC7IP:3;
  };
  struct {
    unsigned IC6IP0:1;
    unsigned IC6IP1:1;
    unsigned IC6IP2:1;
    unsigned :1;
    unsigned OC5IP0:1;
    unsigned OC5IP1:1;
    unsigned OC5IP2:1;
    unsigned :1;
    unsigned OC6IP0:1;
    unsigned OC6IP1:1;
    unsigned OC6IP2:1;
    unsigned :1;
    unsigned OC7IP0:1;
    unsigned OC7IP1:1;
    unsigned OC7IP2:1;
  };
} IPC10bits __attribute__((__sfr__));

extern volatile unsigned int  IPC11 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OC8IP:3;
    unsigned :5;
    unsigned DMA4IP:3;
    unsigned :1;
    unsigned T6IP:3;
  };
  struct {
    unsigned OC8IP0:1;
    unsigned OC8IP1:1;
    unsigned OC8IP2:1;
    unsigned :5;
    unsigned DMA4IP0:1;
    unsigned DMA4IP1:1;
    unsigned DMA4IP2:1;
    unsigned :1;
    unsigned T6IP0:1;
    unsigned T6IP1:1;
    unsigned T6IP2:1;
  };
} IPC11bits __attribute__((__sfr__));

extern volatile unsigned int  IPC12 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned T7IP:3;
    unsigned :1;
    unsigned SI2C2IP:3;
    unsigned :1;
    unsigned MI2C2IP:3;
    unsigned :1;
    unsigned T8IP:3;
  };
  struct {
    unsigned T7IP0:1;
    unsigned T7IP1:1;
    unsigned T7IP2:1;
    unsigned :1;
    unsigned SI2C2IP0:1;
    unsigned SI2C2IP1:1;
    unsigned SI2C2IP2:1;
    unsigned :1;
    unsigned MI2C2IP0:1;
    unsigned MI2C2IP1:1;
    unsigned MI2C2IP2:1;
    unsigned :1;
    unsigned T8IP0:1;
    unsigned T8IP1:1;
    unsigned T8IP2:1;
  };
} IPC12bits __attribute__((__sfr__));

extern volatile unsigned int  IPC13 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned T9IP:3;
    unsigned :1;
    unsigned INT3IP:3;
    unsigned :1;
    unsigned INT4IP:3;
    unsigned :1;
    unsigned C2RXIP:3;
  };
  struct {
    unsigned T9IP0:1;
    unsigned T9IP1:1;
    unsigned T9IP2:1;
    unsigned :1;
    unsigned INT3IP0:1;
    unsigned INT3IP1:1;
    unsigned INT3IP2:1;
    unsigned :1;
    unsigned INT4IP0:1;
    unsigned INT4IP1:1;
    unsigned INT4IP2:1;
    unsigned :1;
    unsigned C2RXIP0:1;
    unsigned C2RXIP1:1;
    unsigned C2RXIP2:1;
  };
} IPC13bits __attribute__((__sfr__));

extern volatile unsigned int  IPC14 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned C2IP:3;
    unsigned :9;
    unsigned DCIEIP:3;
  };
  struct {
    unsigned C2IP0:1;
    unsigned C2IP1:1;
    unsigned C2IP2:1;
    unsigned :9;
    unsigned DCIEIP0:1;
    unsigned DCIEIP1:1;
    unsigned DCIEIP2:1;
  };
} IPC14bits __attribute__((__sfr__));

extern volatile unsigned int  IPC15 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DCIIP:3;
    unsigned :1;
    unsigned DMA5IP:3;
  };
  struct {
    unsigned DCIIP0:1;
    unsigned DCIIP1:1;
    unsigned DCIIP2:1;
    unsigned :1;
    unsigned DMA5IP0:1;
    unsigned DMA5IP1:1;
    unsigned DMA5IP2:1;
  };
} IPC15bits __attribute__((__sfr__));

extern volatile unsigned int  IPC16 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :4;
    unsigned U1EIP:3;
    unsigned :1;
    unsigned U2EIP:3;
  };
  struct {
    unsigned :4;
    unsigned U1EIP0:1;
    unsigned U1EIP1:1;
    unsigned U1EIP2:1;
    unsigned :1;
    unsigned U2EIP0:1;
    unsigned U2EIP1:1;
    unsigned U2EIP2:1;
  };
} IPC16bits __attribute__((__sfr__));

extern volatile unsigned int  IPC17 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMA6IP:3;
    unsigned :1;
    unsigned DMA7IP:3;
    unsigned :1;
    unsigned C1TXIP:3;
    unsigned :1;
    unsigned C2TXIP:3;
  };
  struct {
    unsigned DMA6IP0:1;
    unsigned DMA6IP1:1;
    unsigned DMA6IP2:1;
    unsigned :1;
    unsigned DMA7IP0:1;
    unsigned DMA7IP1:1;
    unsigned DMA7IP2:1;
    unsigned :1;
    unsigned C1TXIP0:1;
    unsigned C1TXIP1:1;
    unsigned C1TXIP2:1;
    unsigned :1;
    unsigned C2TXIP0:1;
    unsigned C2TXIP1:1;
    unsigned C2TXIP2:1;
  };
} IPC17bits __attribute__((__sfr__));

extern volatile unsigned int  INTTREG __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned VECNUM:7;
    unsigned :1;
    unsigned ILR:4;
    unsigned :2;
    unsigned TMODE:1;
    unsigned IRQTOCPU:1;
  };
  struct {
    unsigned VECNUM0:1;
    unsigned VECNUM1:1;
    unsigned VECNUM2:1;
    unsigned VECNUM3:1;
    unsigned VECNUM4:1;
    unsigned VECNUM5:1;
    unsigned VECNUM6:1;
    unsigned :1;
    unsigned ILR0:1;
    unsigned ILR1:1;
    unsigned ILR2:1;
    unsigned ILR3:1;
  };
} INTTREGbits __attribute__((__sfr__));

extern volatile unsigned int  TMR1 __attribute__((__sfr__));
extern volatile unsigned int  PR1 __attribute__((__sfr__));
extern volatile unsigned int  T1CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T1CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR2 __attribute__((__sfr__));
extern volatile unsigned int  TMR3HLD __attribute__((__sfr__));
extern volatile unsigned int  TMR3 __attribute__((__sfr__));
extern volatile unsigned int  PR2 __attribute__((__sfr__));
extern volatile unsigned int  PR3 __attribute__((__sfr__));
extern volatile unsigned int  T2CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T2CONbits __attribute__((__sfr__));

extern volatile unsigned int  T3CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T3CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR4 __attribute__((__sfr__));
extern volatile unsigned int  TMR5HLD __attribute__((__sfr__));
extern volatile unsigned int  TMR5 __attribute__((__sfr__));
extern volatile unsigned int  PR4 __attribute__((__sfr__));
extern volatile unsigned int  PR5 __attribute__((__sfr__));
extern volatile unsigned int  T4CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T4CONbits __attribute__((__sfr__));

extern volatile unsigned int  T5CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T5CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR6 __attribute__((__sfr__));
extern volatile unsigned int  TMR7HLD __attribute__((__sfr__));
extern volatile unsigned int  TMR7 __attribute__((__sfr__));
extern volatile unsigned int  PR6 __attribute__((__sfr__));
extern volatile unsigned int  PR7 __attribute__((__sfr__));
extern volatile unsigned int  T6CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T6CONbits __attribute__((__sfr__));

extern volatile unsigned int  T7CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T7CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR8 __attribute__((__sfr__));
extern volatile unsigned int  TMR9HLD __attribute__((__sfr__));
extern volatile unsigned int  TMR9 __attribute__((__sfr__));
extern volatile unsigned int  PR8 __attribute__((__sfr__));
extern volatile unsigned int  PR9 __attribute__((__sfr__));
extern volatile unsigned int  T8CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T8CONbits __attribute__((__sfr__));

extern volatile unsigned int  T9CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:2;
    unsigned TGATE:1;
    unsigned :6;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
} T9CONbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each Input Capture module */
typedef struct tagIC {
        unsigned int icxbuf;
        unsigned int icxcon;
} IC, *PIC;

/* SFR blocks for each Input Capture module */
extern volatile IC IC1 __attribute__((__sfr__));
extern volatile IC IC2 __attribute__((__sfr__));
extern volatile IC IC3 __attribute__((__sfr__));
extern volatile IC IC4 __attribute__((__sfr__));
extern volatile IC IC5 __attribute__((__sfr__));
extern volatile IC IC6 __attribute__((__sfr__));
extern volatile IC IC7 __attribute__((__sfr__));
extern volatile IC IC8 __attribute__((__sfr__));

extern volatile unsigned int  IC1BUF __attribute__((__sfr__));
extern volatile unsigned int  IC1CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC1CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC2BUF __attribute__((__sfr__));
extern volatile unsigned int  IC2CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC2CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC3BUF __attribute__((__sfr__));
extern volatile unsigned int  IC3CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC3CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC4BUF __attribute__((__sfr__));
extern volatile unsigned int  IC4CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC4CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC5BUF __attribute__((__sfr__));
extern volatile unsigned int  IC5CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC5CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC6BUF __attribute__((__sfr__));
extern volatile unsigned int  IC6CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC6CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC7BUF __attribute__((__sfr__));
extern volatile unsigned int  IC7CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC7CONbits __attribute__((__sfr__));

extern volatile unsigned int  IC8BUF __attribute__((__sfr__));
extern volatile unsigned int  IC8CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned :5;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
} IC8CONbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each Output Compare module */
typedef struct tagOC {
        unsigned int ocxrs;
        unsigned int ocxr;
        unsigned int ocxcon;
} OC, *POC;

/* SFR blocks for each Output Compare module */
extern volatile OC OC1 __attribute__((__sfr__));
extern volatile OC OC2 __attribute__((__sfr__));
extern volatile OC OC3 __attribute__((__sfr__));
extern volatile OC OC4 __attribute__((__sfr__));
extern volatile OC OC5 __attribute__((__sfr__));
extern volatile OC OC6 __attribute__((__sfr__));
extern volatile OC OC7 __attribute__((__sfr__));
extern volatile OC OC8 __attribute__((__sfr__));

extern volatile unsigned int  OC1RS __attribute__((__sfr__));
extern volatile unsigned int  OC1R __attribute__((__sfr__));
extern volatile unsigned int  OC1CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC1CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC2RS __attribute__((__sfr__));
extern volatile unsigned int  OC2R __attribute__((__sfr__));
extern volatile unsigned int  OC2CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC2CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC3RS __attribute__((__sfr__));
extern volatile unsigned int  OC3R __attribute__((__sfr__));
extern volatile unsigned int  OC3CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC3CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC4RS __attribute__((__sfr__));
extern volatile unsigned int  OC4R __attribute__((__sfr__));
extern volatile unsigned int  OC4CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC4CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC5RS __attribute__((__sfr__));
extern volatile unsigned int  OC5R __attribute__((__sfr__));
extern volatile unsigned int  OC5CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC5CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC6RS __attribute__((__sfr__));
extern volatile unsigned int  OC6R __attribute__((__sfr__));
extern volatile unsigned int  OC6CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC6CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC7RS __attribute__((__sfr__));
extern volatile unsigned int  OC7R __attribute__((__sfr__));
extern volatile unsigned int  OC7CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC7CONbits __attribute__((__sfr__));

extern volatile unsigned int  OC8RS __attribute__((__sfr__));
extern volatile unsigned int  OC8R __attribute__((__sfr__));
extern volatile unsigned int  OC8CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned :8;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
} OC8CONbits __attribute__((__sfr__));

extern volatile unsigned int  I2C1RCV __attribute__((__sfr__));
extern volatile unsigned int  I2C1TRN __attribute__((__sfr__));
extern volatile unsigned int  I2C1BRG __attribute__((__sfr__));
extern volatile unsigned int  I2C1CON __attribute__((__sfr__));
extern volatile struct {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned IPMIEN:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C1CONbits __attribute__((__sfr__));

extern volatile unsigned int  I2C1STAT __attribute__((__sfr__));
extern volatile struct {
  unsigned TBF:1;
  unsigned RBF:1;
  unsigned R_W:1;
  unsigned S:1;
  unsigned P:1;
  unsigned D_A:1;
  unsigned I2COV:1;
  unsigned IWCOL:1;
  unsigned ADD10:1;
  unsigned GCSTAT:1;
  unsigned BCL:1;
  unsigned :3;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C1STATbits __attribute__((__sfr__));

extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
extern volatile unsigned int  I2C2RCV __attribute__((__sfr__));
extern volatile unsigned int  I2C2TRN __attribute__((__sfr__));
extern volatile unsigned int  I2C2BRG __attribute__((__sfr__));
extern volatile unsigned int  I2C2CON __attribute__((__sfr__));
extern volatile struct {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned IPMIEN:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C2CONbits __attribute__((__sfr__));

extern volatile unsigned int  I2C2STAT __attribute__((__sfr__));
extern volatile struct {
  unsigned TBF:1;
  unsigned RBF:1;
  unsigned R_W:1;
  unsigned S:1;
  unsigned P:1;
  unsigned D_A:1;
  unsigned I2COV:1;
  unsigned IWCOL:1;
  unsigned ADD10:1;
  unsigned GCSTAT:1;
  unsigned BCL:1;
  unsigned :3;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C2STATbits __attribute__((__sfr__));

extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));

/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        unsigned int uxmode;
        unsigned int uxsta;
        unsigned int uxtxreg;
        unsigned int uxrxreg;
        unsigned int uxbrg;
} UART, *PUART;

/* SFR blocks for each UART module */
extern volatile UART UART1 __attribute__((__sfr__));
extern volatile UART UART2 __attribute__((__sfr__));

extern volatile unsigned int  U1MODE __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned URXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned ALTIO:1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
} U1MODEbits __attribute__((__sfr__));

extern volatile unsigned int  U1STA __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned :1;
    unsigned UTXISEL0:1;
    unsigned UTXINV:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
  };
} U1STAbits __attribute__((__sfr__));

extern volatile unsigned int  U1TXREG __attribute__((__sfr__));
extern volatile struct {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTX8:1;
} U1TXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U1RXREG __attribute__((__sfr__));
extern volatile struct {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URX8:1;
} U1RXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U1BRG __attribute__((__sfr__));
extern volatile unsigned int  U2MODE __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned URXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned ALTIO:1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
} U2MODEbits __attribute__((__sfr__));

extern volatile unsigned int  U2STA __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned :1;
    unsigned UTXISEL0:1;
    unsigned UTXINV:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
  };
} U2STAbits __attribute__((__sfr__));

extern volatile unsigned int  U2TXREG __attribute__((__sfr__));
extern volatile struct {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTX8:1;
} U2TXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U2RXREG __attribute__((__sfr__));
extern volatile struct {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URX8:1;
} U2RXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U2BRG __attribute__((__sfr__));

/* Generic structure of entire SFR area for each SPI module */
typedef struct tagSPI {
        unsigned int spixstat;
        unsigned int spixcon;
        unsigned int spixbuf;
} SPI, *PSPI;

/* SFR blocks for each SPI module */
extern volatile SPI SPI1 __attribute__((__sfr__));
extern volatile SPI SPI2 __attribute__((__sfr__));

extern volatile unsigned int  SPI1STAT __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :4;
    unsigned SPIROV:1;
    unsigned :1;
    unsigned BUFELM:3;
    unsigned :2;
    unsigned SPISIDL:1;
    unsigned :1;
    unsigned SPIEN:1;
  };
  struct {
    unsigned :8;
    unsigned BUFELM0:1;
    unsigned BUFELM1:1;
    unsigned BUFELM2:1;
  };
} SPI1STATbits __attribute__((__sfr__));

extern volatile unsigned int  SPI1CON1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PPRE:2;
    unsigned SPRE:3;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned DISSDO:1;
    unsigned DISSCK:1;
  };
  struct {
    unsigned PPRE0:1;
    unsigned PPRE1:1;
    unsigned SPRE0:1;
    unsigned SPRE1:1;
    unsigned SPRE2:1;
  };
} SPI1CON1bits __attribute__((__sfr__));

extern volatile unsigned int  SPI1CON2 __attribute__((__sfr__));
extern volatile struct {
  unsigned ENHBUF:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI1CON2bits __attribute__((__sfr__));

extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
extern volatile unsigned int  SPI2STAT __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :4;
    unsigned SPIROV:1;
    unsigned :1;
    unsigned BUFELM:3;
    unsigned :2;
    unsigned SPISIDL:1;
    unsigned :1;
    unsigned SPIEN:1;
  };
  struct {
    unsigned :8;
    unsigned BUFELM0:1;
    unsigned BUFELM1:1;
    unsigned BUFELM2:1;
  };
} SPI2STATbits __attribute__((__sfr__));

extern volatile unsigned int  SPI2CON1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PPRE:2;
    unsigned SPRE:3;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned DISSDO:1;
    unsigned DISSCK:1;
  };
  struct {
    unsigned PPRE0:1;
    unsigned PPRE1:1;
    unsigned SPRE0:1;
    unsigned SPRE1:1;
    unsigned SPRE2:1;
  };
} SPI2CON1bits __attribute__((__sfr__));

extern volatile unsigned int  SPI2CON2 __attribute__((__sfr__));
extern volatile struct {
  unsigned ENHBUF:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI2CON2bits __attribute__((__sfr__));

extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
extern volatile unsigned int  DCICON1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned COFSM:2;
    unsigned :3;
    unsigned DJST:1;
    unsigned CSDOM:1;
    unsigned UNFM:1;
    unsigned COFSD:1;
    unsigned CSCKE:1;
    unsigned CSCKD:1;
    unsigned DLOOP:1;
    unsigned :1;
    unsigned DCISIDL:1;
    unsigned :1;
    unsigned DCIEN:1;
  };
  struct {
    unsigned COFSM0:1;
    unsigned COFSM1:1;
  };
} DCICON1bits __attribute__((__sfr__));

extern volatile unsigned int  DCICON2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned WS:4;
    unsigned :1;
    unsigned COFSG:4;
    unsigned :1;
    unsigned BLEN:2;
  };
  struct {
    unsigned WS0:1;
    unsigned WS1:1;
    unsigned WS2:1;
    unsigned WS3:1;
    unsigned :1;
    unsigned COFSG0:1;
    unsigned COFSG1:1;
    unsigned COFSG2:1;
    unsigned COFSG3:1;
    unsigned :1;
    unsigned BLEN0:1;
    unsigned BLEN1:1;
  };
} DCICON2bits __attribute__((__sfr__));

extern volatile unsigned int  DCICON3 __attribute__((__sfr__));
extern volatile struct {
  unsigned BCG:12;
} DCICON3bits __attribute__((__sfr__));

extern volatile unsigned int  DCISTAT __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TMPTY:1;
    unsigned TUNF:1;
    unsigned RFUL:1;
    unsigned ROV:1;
    unsigned :4;
    unsigned SLOT:4;
  };
  struct {
    unsigned :8;
    unsigned SLOT0:1;
    unsigned SLOT1:1;
    unsigned SLOT2:1;
    unsigned SLOT3:1;
  };
} DCISTATbits __attribute__((__sfr__));

extern volatile unsigned int  TSCON __attribute__((__sfr__));
extern volatile struct {
  unsigned TSE0:1;
  unsigned TSE1:1;
  unsigned TSE2:1;
  unsigned TSE3:1;
  unsigned TSE4:1;
  unsigned TSE5:1;
  unsigned TSE6:1;
  unsigned TSE7:1;
  unsigned TSE8:1;
  unsigned TSE9:1;
  unsigned TSE10:1;
  unsigned TSE11:1;
  unsigned TSE12:1;
  unsigned TSE13:1;
  unsigned TSE14:1;
  unsigned TSE15:1;
} TSCONbits __attribute__((__sfr__));

extern volatile unsigned int  RSCON __attribute__((__sfr__));
extern volatile struct {
  unsigned RSE0:1;
  unsigned RSE1:1;
  unsigned RSE2:1;
  unsigned RSE3:1;
  unsigned RSE4:1;
  unsigned RSE5:1;
  unsigned RSE6:1;
  unsigned RSE7:1;
  unsigned RSE8:1;
  unsigned RSE9:1;
  unsigned RSE10:1;
  unsigned RSE11:1;
  unsigned RSE12:1;
  unsigned RSE13:1;
  unsigned RSE14:1;
  unsigned RSE15:1;
} RSCONbits __attribute__((__sfr__));

extern volatile unsigned int  RXBUF0 __attribute__((__sfr__));
extern volatile unsigned int  RXBUF1 __attribute__((__sfr__));
extern volatile unsigned int  RXBUF2 __attribute__((__sfr__));
extern volatile unsigned int  RXBUF3 __attribute__((__sfr__));
extern volatile unsigned int  TXBUF0 __attribute__((__sfr__));
extern volatile unsigned int  TXBUF1 __attribute__((__sfr__));
extern volatile unsigned int  TXBUF2 __attribute__((__sfr__));
extern volatile unsigned int  TXBUF3 __attribute__((__sfr__));
extern volatile unsigned int  TRISA __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned TRISA5:1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
  unsigned :1;
  unsigned TRISA9:1;
  unsigned TRISA10:1;
  unsigned :1;
  unsigned TRISA12:1;
  unsigned TRISA13:1;
  unsigned TRISA14:1;
  unsigned TRISA15:1;
} TRISAbits __attribute__((__sfr__));

extern volatile unsigned int  PORTA __attribute__((__sfr__));
extern volatile struct {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
  unsigned :1;
  unsigned RA9:1;
  unsigned RA10:1;
  unsigned :1;
  unsigned RA12:1;
  unsigned RA13:1;
  unsigned RA14:1;
  unsigned RA15:1;
} PORTAbits __attribute__((__sfr__));

extern volatile unsigned int  LATA __attribute__((__sfr__));
extern volatile struct {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned LATA5:1;
  unsigned LATA6:1;
  unsigned LATA7:1;
  unsigned :1;
  unsigned LATA9:1;
  unsigned LATA10:1;
  unsigned :1;
  unsigned LATA12:1;
  unsigned LATA13:1;
  unsigned LATA14:1;
  unsigned LATA15:1;
} LATAbits __attribute__((__sfr__));

extern volatile unsigned int  TRISB __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
  unsigned TRISB8:1;
  unsigned TRISB9:1;
  unsigned TRISB10:1;
  unsigned TRISB11:1;
  unsigned TRISB12:1;
  unsigned TRISB13:1;
  unsigned TRISB14:1;
  unsigned TRISB15:1;
} TRISBbits __attribute__((__sfr__));

extern volatile unsigned int  PORTB __attribute__((__sfr__));
extern volatile struct {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
  unsigned RB8:1;
  unsigned RB9:1;
  unsigned RB10:1;
  unsigned RB11:1;
  unsigned RB12:1;
  unsigned RB13:1;
  unsigned RB14:1;
  unsigned RB15:1;
} PORTBbits __attribute__((__sfr__));

extern volatile unsigned int  LATB __attribute__((__sfr__));
extern volatile struct {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
  unsigned LATB8:1;
  unsigned LATB9:1;
  unsigned LATB10:1;
  unsigned LATB11:1;
  unsigned LATB12:1;
  unsigned LATB13:1;
  unsigned LATB14:1;
  unsigned LATB15:1;
} LATBbits __attribute__((__sfr__));

extern volatile unsigned int  TRISC __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned :7;
  unsigned TRISC12:1;
  unsigned TRISC13:1;
  unsigned TRISC14:1;
  unsigned TRISC15:1;
} TRISCbits __attribute__((__sfr__));

extern volatile unsigned int  PORTC __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned RC3:1;
  unsigned RC4:1;
  unsigned :7;
  unsigned RC12:1;
  unsigned RC13:1;
  unsigned RC14:1;
  unsigned RC15:1;
} PORTCbits __attribute__((__sfr__));

extern volatile unsigned int  LATC __attribute__((__sfr__));
extern volatile struct {
  unsigned :1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned :7;
  unsigned LATC12:1;
  unsigned LATC13:1;
  unsigned LATC14:1;
  unsigned LATC15:1;
} LATCbits __attribute__((__sfr__));

extern volatile unsigned int  TRISD __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
  unsigned TRISD8:1;
  unsigned TRISD9:1;
  unsigned TRISD10:1;
  unsigned TRISD11:1;
  unsigned TRISD12:1;
  unsigned TRISD13:1;
  unsigned TRISD14:1;
  unsigned TRISD15:1;
} TRISDbits __attribute__((__sfr__));

extern volatile unsigned int  PORTD __attribute__((__sfr__));
extern volatile struct {
  unsigned RD0:1;
  unsigned RD1:1;
  unsigned RD2:1;
  unsigned RD3:1;
  unsigned RD4:1;
  unsigned RD5:1;
  unsigned RD6:1;
  unsigned RD7:1;
  unsigned RD8:1;
  unsigned RD9:1;
  unsigned RD10:1;
  unsigned RD11:1;
  unsigned RD12:1;
  unsigned RD13:1;
  unsigned RD14:1;
  unsigned RD15:1;
} PORTDbits __attribute__((__sfr__));

extern volatile unsigned int  LATD __attribute__((__sfr__));
extern volatile struct {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
  unsigned LATD8:1;
  unsigned LATD9:1;
  unsigned LATD10:1;
  unsigned LATD11:1;
  unsigned LATD12:1;
  unsigned LATD13:1;
  unsigned LATD14:1;
  unsigned LATD15:1;
} LATDbits __attribute__((__sfr__));

extern volatile unsigned int  TRISE __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISE0:1;
  unsigned TRISE1:1;
  unsigned TRISE2:1;
  unsigned TRISE3:1;
  unsigned TRISE4:1;
  unsigned TRISE5:1;
  unsigned TRISE6:1;
  unsigned TRISE7:1;
} TRISEbits __attribute__((__sfr__));

extern volatile unsigned int  PORTE __attribute__((__sfr__));
extern volatile struct {
  unsigned RE0:1;
  unsigned RE1:1;
  unsigned RE2:1;
  unsigned RE3:1;
  unsigned RE4:1;
  unsigned RE5:1;
  unsigned RE6:1;
  unsigned RE7:1;
} PORTEbits __attribute__((__sfr__));

extern volatile unsigned int  LATE __attribute__((__sfr__));
extern volatile struct {
  unsigned LATE0:1;
  unsigned LATE1:1;
  unsigned LATE2:1;
  unsigned LATE3:1;
  unsigned LATE4:1;
  unsigned LATE5:1;
  unsigned LATE6:1;
  unsigned LATE7:1;
} LATEbits __attribute__((__sfr__));

extern volatile unsigned int  TRISF __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISF0:1;
  unsigned TRISF1:1;
  unsigned TRISF2:1;
  unsigned TRISF3:1;
  unsigned TRISF4:1;
  unsigned TRISF5:1;
  unsigned TRISF6:1;
  unsigned TRISF7:1;
  unsigned TRISF8:1;
  unsigned :3;
  unsigned TRISF12:1;
  unsigned TRISF13:1;
} TRISFbits __attribute__((__sfr__));

extern volatile unsigned int  PORTF __attribute__((__sfr__));
extern volatile struct {
  unsigned RF0:1;
  unsigned RF1:1;
  unsigned RF2:1;
  unsigned RF3:1;
  unsigned RF4:1;
  unsigned RF5:1;
  unsigned RF6:1;
  unsigned RF7:1;
  unsigned RF8:1;
  unsigned :3;
  unsigned RF12:1;
  unsigned RF13:1;
} PORTFbits __attribute__((__sfr__));

extern volatile unsigned int  LATF __attribute__((__sfr__));
extern volatile struct {
  unsigned LATF0:1;
  unsigned LATF1:1;
  unsigned LATF2:1;
  unsigned LATF3:1;
  unsigned LATF4:1;
  unsigned LATF5:1;
  unsigned LATF6:1;
  unsigned LATF7:1;
  unsigned LATF8:1;
  unsigned :3;
  unsigned LATF12:1;
  unsigned LATF13:1;
} LATFbits __attribute__((__sfr__));

extern volatile unsigned int  TRISG __attribute__((__sfr__));
extern volatile struct {
  unsigned TRISG0:1;
  unsigned TRISG1:1;
  unsigned TRISG2:1;
  unsigned TRISG3:1;
  unsigned :2;
  unsigned TRISG6:1;
  unsigned TRISG7:1;
  unsigned TRISG8:1;
  unsigned TRISG9:1;
  unsigned :2;
  unsigned TRISG12:1;
  unsigned TRISG13:1;
  unsigned TRISG14:1;
  unsigned TRISG15:1;
} TRISGbits __attribute__((__sfr__));

extern volatile unsigned int  PORTG __attribute__((__sfr__));
extern volatile struct {
  unsigned RG0:1;
  unsigned RG1:1;
  unsigned RG2:1;
  unsigned RG3:1;
  unsigned :2;
  unsigned RG6:1;
  unsigned RG7:1;
  unsigned RG8:1;
  unsigned RG9:1;
  unsigned :2;
  unsigned RG12:1;
  unsigned RG13:1;
  unsigned RG14:1;
  unsigned RG15:1;
} PORTGbits __attribute__((__sfr__));

extern volatile unsigned int  LATG __attribute__((__sfr__));
extern volatile struct {
  unsigned LATG0:1;
  unsigned LATG1:1;
  unsigned LATG2:1;
  unsigned LATG3:1;
  unsigned :2;
  unsigned LATG6:1;
  unsigned LATG7:1;
  unsigned LATG8:1;
  unsigned LATG9:1;
  unsigned :2;
  unsigned LATG12:1;
  unsigned LATG13:1;
  unsigned LATG14:1;
  unsigned LATG15:1;
} LATGbits __attribute__((__sfr__));

extern volatile unsigned int  ADC1BUF0 __attribute__((__sfr__));
extern volatile unsigned int  AD1CON1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned SIMSAM:1;
    unsigned :1;
    unsigned SSRC:3;
    unsigned FORM:2;
    unsigned AD12B:1;
    unsigned :1;
    unsigned ADDMABM:1;
    unsigned ADSIDL:1;
    unsigned :1;
    unsigned ADON:1;
  };
  struct {
    unsigned :5;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned FORM0:1;
    unsigned FORM1:1;
  };
} AD1CON1bits __attribute__((__sfr__));

extern volatile unsigned int  AD1CON2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ALTS:1;
    unsigned BUFM:1;
    unsigned SMPI:4;
    unsigned :1;
    unsigned BUFS:1;
    unsigned CHPS:2;
    unsigned CSCNA:1;
    unsigned :2;
    unsigned VCFG:3;
  };
  struct {
    unsigned :2;
    unsigned SMPI0:1;
    unsigned SMPI1:1;
    unsigned SMPI2:1;
    unsigned SMPI3:1;
    unsigned :2;
    unsigned CHPS0:1;
    unsigned CHPS1:1;
    unsigned :3;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned VCFG2:1;
  };
} AD1CON2bits __attribute__((__sfr__));

extern volatile unsigned int  AD1CON3 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ADCS:8;
    unsigned SAMC:5;
    unsigned :2;
    unsigned ADRC:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ADCS3:1;
    unsigned ADCS4:1;
    unsigned ADCS5:1;
    unsigned :2;
    unsigned SAMC0:1;
    unsigned SAMC1:1;
    unsigned SAMC2:1;
    unsigned SAMC3:1;
    unsigned SAMC4:1;
  };
} AD1CON3bits __attribute__((__sfr__));

extern volatile unsigned int  AD1CHS123 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned CH123SA:1;
    unsigned CH123NA:2;
    unsigned :5;
    unsigned CH123SB:1;
    unsigned CH123NB:2;
  };
  struct {
    unsigned :1;
    unsigned CH123NA0:1;
    unsigned CH123NA1:1;
    unsigned :6;
    unsigned CH123NB0:1;
    unsigned CH123NB1:1;
  };
} AD1CHS123bits __attribute__((__sfr__));

extern volatile unsigned int  AD1CHS0 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned CH0SA:5;
    unsigned :2;
    unsigned CH0NA:1;
    unsigned CH0SB:5;
    unsigned :2;
    unsigned CH0NB:1;
  };
  struct {
    unsigned CH0SA0:1;
    unsigned CH0SA1:1;
    unsigned CH0SA2:1;
    unsigned CH0SA3:1;
    unsigned CH0SA4:1;
    unsigned :3;
    unsigned CH0SB0:1;
    unsigned CH0SB1:1;
    unsigned CH0SB2:1;
    unsigned CH0SB3:1;
    unsigned CH0SB4:1;
  };
} AD1CHS0bits __attribute__((__sfr__));

extern volatile unsigned int  AD1PCFGH __attribute__((__sfr__));
extern volatile struct {
  unsigned PCFG16:1;
  unsigned PCFG17:1;
  unsigned PCFG18:1;
  unsigned PCFG19:1;
  unsigned PCFG20:1;
  unsigned PCFG21:1;
  unsigned PCFG22:1;
  unsigned PCFG23:1;
  unsigned PCFG24:1;
  unsigned PCFG25:1;
  unsigned PCFG26:1;
  unsigned PCFG27:1;
  unsigned PCFG28:1;
  unsigned PCFG29:1;
  unsigned PCFG30:1;
  unsigned PCFG31:1;
} AD1PCFGHbits __attribute__((__sfr__));

extern volatile unsigned int  AD1PCFGL __attribute__((__sfr__));
extern volatile struct {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
  unsigned PCFG4:1;
  unsigned PCFG5:1;
  unsigned PCFG6:1;
  unsigned PCFG7:1;
  unsigned PCFG8:1;
  unsigned PCFG9:1;
  unsigned PCFG10:1;
  unsigned PCFG11:1;
  unsigned PCFG12:1;
  unsigned PCFG13:1;
  unsigned PCFG14:1;
  unsigned PCFG15:1;
} AD1PCFGLbits __attribute__((__sfr__));

extern volatile unsigned int  AD1CSSH __attribute__((__sfr__));
extern volatile struct {
  unsigned CSS16:1;
  unsigned CSS17:1;
  unsigned CSS18:1;
  unsigned CSS19:1;
  unsigned CSS20:1;
  unsigned CSS21:1;
  unsigned CSS22:1;
  unsigned CSS23:1;
  unsigned CSS24:1;
  unsigned CSS25:1;
  unsigned CSS26:1;
  unsigned CSS27:1;
  unsigned CSS28:1;
  unsigned CSS29:1;
  unsigned CSS30:1;
  unsigned CSS31:1;
} AD1CSSHbits __attribute__((__sfr__));

extern volatile unsigned int  AD1CSSL __attribute__((__sfr__));
extern volatile struct {
  unsigned CSS0:1;
  unsigned CSS1:1;
  unsigned CSS2:1;
  unsigned CSS3:1;
  unsigned CSS4:1;
  unsigned CSS5:1;
  unsigned CSS6:1;
  unsigned CSS7:1;
  unsigned CSS8:1;
  unsigned CSS9:1;
  unsigned CSS10:1;
  unsigned CSS11:1;
  unsigned CSS12:1;
  unsigned CSS13:1;
  unsigned CSS14:1;
  unsigned CSS15:1;
} AD1CSSLbits __attribute__((__sfr__));

extern volatile unsigned int  AD1CON4 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMABL:3;
  };
  struct {
    unsigned DMABL0:1;
    unsigned DMABL1:1;
    unsigned DMABL2:1;
  };
} AD1CON4bits __attribute__((__sfr__));

extern volatile unsigned int  ADC2BUF0 __attribute__((__sfr__));
extern volatile unsigned int  AD2CON1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned SIMSAM:1;
    unsigned :1;
    unsigned SSRC:3;
    unsigned FORM:2;
    unsigned AD12B:1;
    unsigned :1;
    unsigned ADDMABM:1;
    unsigned ADSIDL:1;
    unsigned :1;
    unsigned ADON:1;
  };
  struct {
    unsigned :5;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned FORM0:1;
    unsigned FORM1:1;
  };
} AD2CON1bits __attribute__((__sfr__));

extern volatile unsigned int  AD2CON2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ALTS:1;
    unsigned BUFM:1;
    unsigned SMPI:4;
    unsigned :1;
    unsigned BUFS:1;
    unsigned CHPS:2;
    unsigned CSCNA:1;
    unsigned :2;
    unsigned VCFG:3;
  };
  struct {
    unsigned :2;
    unsigned SMPI0:1;
    unsigned SMPI1:1;
    unsigned SMPI2:1;
    unsigned SMPI3:1;
    unsigned :2;
    unsigned CHPS0:1;
    unsigned CHPS1:1;
    unsigned :3;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned VCFG2:1;
  };
} AD2CON2bits __attribute__((__sfr__));

extern volatile unsigned int  AD2CON3 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ADCS:8;
    unsigned SAMC:5;
    unsigned :2;
    unsigned ADRC:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ADCS3:1;
    unsigned ADCS4:1;
    unsigned ADCS5:1;
    unsigned :2;
    unsigned SAMC0:1;
    unsigned SAMC1:1;
    unsigned SAMC2:1;
    unsigned SAMC3:1;
    unsigned SAMC4:1;
  };
} AD2CON3bits __attribute__((__sfr__));

extern volatile unsigned int  AD2CHS123 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned CH123SA:1;
    unsigned CH123NA:2;
    unsigned :5;
    unsigned CH123SB:1;
    unsigned CH123NB:2;
  };
  struct {
    unsigned :1;
    unsigned CH123NA0:1;
    unsigned CH123NA1:1;
    unsigned :6;
    unsigned CH123NB0:1;
    unsigned CH123NB1:1;
  };
} AD2CHS123bits __attribute__((__sfr__));

extern volatile unsigned int  AD2CHS0 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned CH0SA:5;
    unsigned :2;
    unsigned CH0NA:1;
    unsigned CH0SB:5;
    unsigned :2;
    unsigned CH0NB:1;
  };
  struct {
    unsigned CH0SA0:1;
    unsigned CH0SA1:1;
    unsigned CH0SA2:1;
    unsigned CH0SA3:1;
    unsigned CH0SA4:1;
    unsigned :3;
    unsigned CH0SB0:1;
    unsigned CH0SB1:1;
    unsigned CH0SB2:1;
    unsigned CH0SB3:1;
    unsigned CH0SB4:1;
  };
} AD2CHS0bits __attribute__((__sfr__));

extern volatile unsigned int  AD2PCFGL __attribute__((__sfr__));
extern volatile struct {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
  unsigned PCFG4:1;
  unsigned PCFG5:1;
  unsigned PCFG6:1;
  unsigned PCFG7:1;
  unsigned PCFG8:1;
  unsigned PCFG9:1;
  unsigned PCFG10:1;
  unsigned PCFG11:1;
  unsigned PCFG12:1;
  unsigned PCFG13:1;
  unsigned PCFG14:1;
  unsigned PCFG15:1;
} AD2PCFGLbits __attribute__((__sfr__));

extern volatile unsigned int  AD2CSSL __attribute__((__sfr__));
extern volatile struct {
  unsigned CSS0:1;
  unsigned CSS1:1;
  unsigned CSS2:1;
  unsigned CSS3:1;
  unsigned CSS4:1;
  unsigned CSS5:1;
  unsigned CSS6:1;
  unsigned CSS7:1;
  unsigned CSS8:1;
  unsigned CSS9:1;
  unsigned CSS10:1;
  unsigned CSS11:1;
  unsigned CSS12:1;
  unsigned CSS13:1;
  unsigned CSS14:1;
  unsigned CSS15:1;
} AD2CSSLbits __attribute__((__sfr__));

extern volatile unsigned int  AD2CON4 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DMABL:3;
  };
  struct {
    unsigned DMABL0:1;
    unsigned DMABL1:1;
    unsigned DMABL2:1;
  };
} AD2CON4bits __attribute__((__sfr__));

extern volatile unsigned int  DMA0CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA0CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA0REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA0REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA0STA __attribute__((__sfr__));
extern volatile unsigned int  DMA0STB __attribute__((__sfr__));
extern volatile unsigned int  DMA0PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA0CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA1CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA1CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA1REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA1REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA1STA __attribute__((__sfr__));
extern volatile unsigned int  DMA1STB __attribute__((__sfr__));
extern volatile unsigned int  DMA1PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA1CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA2CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA2CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA2REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA2REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA2STA __attribute__((__sfr__));
extern volatile unsigned int  DMA2STB __attribute__((__sfr__));
extern volatile unsigned int  DMA2PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA2CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA3CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA3CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA3REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA3REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA3STA __attribute__((__sfr__));
extern volatile unsigned int  DMA3STB __attribute__((__sfr__));
extern volatile unsigned int  DMA3PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA3CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA4CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA4CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA4REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA4REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA4STA __attribute__((__sfr__));
extern volatile unsigned int  DMA4STB __attribute__((__sfr__));
extern volatile unsigned int  DMA4PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA4CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA5CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA5CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA5REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA5REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA5STA __attribute__((__sfr__));
extern volatile unsigned int  DMA5STB __attribute__((__sfr__));
extern volatile unsigned int  DMA5PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA5CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA6CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA6CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA6REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA6REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA6STA __attribute__((__sfr__));
extern volatile unsigned int  DMA6STB __attribute__((__sfr__));
extern volatile unsigned int  DMA6PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA6CNT __attribute__((__sfr__));
extern volatile unsigned int  DMA7CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned MODE:2;
    unsigned :2;
    unsigned AMODE:2;
    unsigned :5;
    unsigned NULLW:1;
    unsigned HALF:1;
    unsigned DIR:1;
    unsigned SIZE:1;
    unsigned CHEN:1;
  };
  struct {
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :2;
    unsigned AMODE0:1;
    unsigned AMODE1:1;
  };
} DMA7CONbits __attribute__((__sfr__));

extern volatile unsigned int  DMA7REQ __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned IRQSEL:7;
    unsigned :8;
    unsigned FORCE:1;
  };
  struct {
    unsigned IRQSEL0:1;
    unsigned IRQSEL1:1;
    unsigned IRQSEL2:1;
    unsigned IRQSEL3:1;
    unsigned IRQSEL4:1;
    unsigned IRQSEL5:1;
    unsigned IRQSEL6:1;
  };
} DMA7REQbits __attribute__((__sfr__));

extern volatile unsigned int  DMA7STA __attribute__((__sfr__));
extern volatile unsigned int  DMA7STB __attribute__((__sfr__));
extern volatile unsigned int  DMA7PAD __attribute__((__sfr__));
extern volatile unsigned int  DMA7CNT __attribute__((__sfr__));
extern volatile unsigned int  DMACS0 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned XWCOL:8;
    unsigned PWCOL:8;
  };
  struct {
    unsigned XWCOL0:1;
    unsigned XWCOL1:1;
    unsigned XWCOL2:1;
    unsigned XWCOL3:1;
    unsigned XWCOL4:1;
    unsigned XWCOL5:1;
    unsigned XWCOL6:1;
    unsigned XWCOL7:1;
    unsigned PWCOL0:1;
    unsigned PWCOL1:1;
    unsigned PWCOL2:1;
    unsigned PWCOL3:1;
    unsigned PWCOL4:1;
    unsigned PWCOL5:1;
    unsigned PWCOL6:1;
    unsigned PWCOL7:1;
  };
} DMACS0bits __attribute__((__sfr__));

extern volatile unsigned int  DMACS1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PPST:8;
    unsigned LSTCH:4;
  };
  struct {
    unsigned PPST0:1;
    unsigned PPST1:1;
    unsigned PPST2:1;
    unsigned PPST3:1;
    unsigned PPST4:1;
    unsigned PPST5:1;
    unsigned PPST6:1;
    unsigned PPST7:1;
    unsigned LSTCH0:1;
    unsigned LSTCH1:1;
    unsigned LSTCH2:1;
    unsigned LSTCH3:1;
  };
} DMACS1bits __attribute__((__sfr__));

extern volatile unsigned int  DSADR __attribute__((__sfr__));
extern volatile unsigned int  C1CTRL1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned WIN:1;
    unsigned :2;
    unsigned CANCAP:1;
    unsigned :1;
    unsigned OPMODE:3;
    unsigned REQOP:3;
    unsigned CANCKS:1;
    unsigned ABAT:1;
    unsigned CSIDL:1;
  };
  struct {
    unsigned :5;
    unsigned OPMODE0:1;
    unsigned OPMODE1:1;
    unsigned OPMODE2:1;
    unsigned REQOP0:1;
    unsigned REQOP1:1;
    unsigned REQOP2:1;
  };
} C1CTRL1bits __attribute__((__sfr__));

extern volatile unsigned int  C1CTRL2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DNCNT:5;
  };
  struct {
    unsigned DNCNT0:1;
    unsigned DNCNT1:1;
    unsigned DNCNT2:1;
    unsigned DNCNT3:1;
    unsigned DNCNT4:1;
  };
} C1CTRL2bits __attribute__((__sfr__));

extern volatile unsigned int  C1VEC __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICODE:7;
    unsigned :1;
    unsigned FILHIT:5;
  };
  struct {
    unsigned ICODE0:1;
    unsigned ICODE1:1;
    unsigned ICODE2:1;
    unsigned ICODE3:1;
    unsigned ICODE4:1;
    unsigned ICODE5:1;
    unsigned ICODE6:1;
    unsigned :1;
    unsigned FILHIT0:1;
    unsigned FILHIT1:1;
    unsigned FILHIT2:1;
    unsigned FILHIT3:1;
    unsigned FILHIT4:1;
  };
} C1VECbits __attribute__((__sfr__));

extern volatile unsigned int  C1FCTRL __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FSA:5;
    unsigned :8;
    unsigned DMABS:3;
  };
  struct {
    unsigned FSA0:1;
    unsigned FSA1:1;
    unsigned FSA2:1;
    unsigned FSA3:1;
    unsigned FSA4:1;
    unsigned :8;
    unsigned DMABS0:1;
    unsigned DMABS1:1;
    unsigned DMABS2:1;
  };
} C1FCTRLbits __attribute__((__sfr__));

extern volatile unsigned int  C1FIFO __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FNRB:6;
    unsigned :2;
    unsigned FBP:6;
  };
  struct {
    unsigned FNRB0:1;
    unsigned FNRB1:1;
    unsigned FNRB2:1;
    unsigned FNRB3:1;
    unsigned FNRB4:1;
    unsigned FNRB5:1;
    unsigned :2;
    unsigned FBP0:1;
    unsigned FBP1:1;
    unsigned FBP2:1;
    unsigned FBP3:1;
    unsigned FBP4:1;
    unsigned FBP5:1;
  };
} C1FIFObits __attribute__((__sfr__));

extern volatile unsigned int  C1INTF __attribute__((__sfr__));
extern volatile struct {
  unsigned TBIF:1;
  unsigned RBIF:1;
  unsigned RBOVIF:1;
  unsigned FIFOIF:1;
  unsigned :1;
  unsigned ERRIF:1;
  unsigned WAKIF:1;
  unsigned IVRIF:1;
  unsigned EWARN:1;
  unsigned RXWAR:1;
  unsigned TXWAR:1;
  unsigned RXBP:1;
  unsigned TXBP:1;
  unsigned TXBO:1;
} C1INTFbits __attribute__((__sfr__));

extern volatile unsigned int  C1INTE __attribute__((__sfr__));
extern volatile struct {
  unsigned TBIE:1;
  unsigned RBIE:1;
  unsigned RBOVIE:1;
  unsigned FIFOIE:1;
  unsigned :1;
  unsigned ERRIE:1;
  unsigned WAKIE:1;
  unsigned IVRIE:1;
} C1INTEbits __attribute__((__sfr__));

extern volatile unsigned int  C1EC __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned RERRCNT:8;
    unsigned TERRCNT:8;
  };
  struct {
    unsigned RERRCNT0:1;
    unsigned RERRCNT1:1;
    unsigned RERRCNT2:1;
    unsigned RERRCNT3:1;
    unsigned RERRCNT4:1;
    unsigned RERRCNT5:1;
    unsigned RERRCNT6:1;
    unsigned RERRCNT7:1;
    unsigned TERRCNT0:1;
    unsigned TERRCNT1:1;
    unsigned TERRCNT2:1;
    unsigned TERRCNT3:1;
    unsigned TERRCNT4:1;
    unsigned TERRCNT5:1;
    unsigned TERRCNT6:1;
    unsigned TERRCNT7:1;
  };
} C1ECbits __attribute__((__sfr__));

extern volatile unsigned char C1RERRCNT __attribute__((__sfr__));
extern volatile unsigned char C1TERRCNT __attribute__((__sfr__));
extern volatile unsigned int  C1CFG1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned BRP:6;
    unsigned SJW:2;
  };
  struct {
    unsigned BRP0:1;
    unsigned BRP1:1;
    unsigned BRP2:1;
    unsigned BRP3:1;
    unsigned BRP4:1;
    unsigned BRP5:1;
    unsigned SJW0:1;
    unsigned SJW1:1;
  };
} C1CFG1bits __attribute__((__sfr__));

extern volatile unsigned int  C1CFG2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PRSEG:3;
    unsigned SEG1PH:3;
    unsigned SAM:1;
    unsigned SEG2PHTS:1;
    unsigned SEG2PH:3;
    unsigned :3;
    unsigned WAKFIL:1;
  };
  struct {
    unsigned PRSEG0:1;
    unsigned PRSEG1:1;
    unsigned PRSEG2:1;
    unsigned SEG1PH0:1;
    unsigned SEG1PH1:1;
    unsigned SEG1PH2:1;
    unsigned :2;
    unsigned SEG2PH0:1;
    unsigned SEG2PH1:1;
    unsigned SEG2PH2:1;
  };
} C1CFG2bits __attribute__((__sfr__));

extern volatile unsigned int  C1FEN1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FLTEN:16;
  };
  struct {
    unsigned FLTEN0:1;
    unsigned FLTEN1:1;
    unsigned FLTEN2:1;
    unsigned FLTEN3:1;
    unsigned FLTEN4:1;
    unsigned FLTEN5:1;
    unsigned FLTEN6:1;
    unsigned FLTEN7:1;
    unsigned FLTEN8:1;
    unsigned FLTEN9:1;
    unsigned FLTEN10:1;
    unsigned FLTEN11:1;
    unsigned FLTEN12:1;
    unsigned FLTEN13:1;
    unsigned FLTEN14:1;
    unsigned FLTEN15:1;
  };
} C1FEN1bits __attribute__((__sfr__));

extern volatile unsigned int  C1FMSKSEL1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F0MSK:2;
    unsigned F1MSK:2;
    unsigned F2MSK:2;
    unsigned F3MSK:2;
    unsigned F4MSK:2;
    unsigned F5MSK:2;
    unsigned F6MSK:2;
    unsigned F7MSK:2;
  };
  struct {
    unsigned F0MSK0:1;
    unsigned F0MSK1:1;
    unsigned F1MSK0:1;
    unsigned F1MSK1:1;
    unsigned F2MSK0:1;
    unsigned F2MSK1:1;
    unsigned F3MSK0:1;
    unsigned F3MSK1:1;
    unsigned F4MSK0:1;
    unsigned F4MSK1:1;
    unsigned F5MSK0:1;
    unsigned F5MSK1:1;
    unsigned F6MSK0:1;
    unsigned F6MSK1:1;
    unsigned F7MSK0:1;
    unsigned F7MSK1:1;
  };
} C1FMSKSEL1bits __attribute__((__sfr__));

extern volatile unsigned int  C1FMSKSEL2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F8MSK:2;
    unsigned F9MSK:2;
    unsigned F10MSK:2;
    unsigned F11MSK:2;
    unsigned F12MSK:2;
    unsigned F13MSK:2;
    unsigned F14MSK:2;
    unsigned F15MSK:2;
  };
  struct {
    unsigned F8MSK0:1;
    unsigned F8MSK1:1;
    unsigned F9MSK0:1;
    unsigned F9MSK1:1;
    unsigned F10MSK0:1;
    unsigned F10MSK1:1;
    unsigned F11MSK0:1;
    unsigned F11MSK1:1;
    unsigned F12MSK0:1;
    unsigned F12MSK1:1;
    unsigned F13MSK0:1;
    unsigned F13MSK1:1;
    unsigned F14MSK0:1;
    unsigned F14MSK1:1;
    unsigned F15MSK0:1;
    unsigned F15MSK1:1;
  };
} C1FMSKSEL2bits __attribute__((__sfr__));

extern volatile unsigned int  C1BUFPNT1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F0BP:4;
    unsigned F1BP:4;
    unsigned F2BP:4;
    unsigned F3BP:4;
  };
  struct {
    unsigned F0BP0:1;
    unsigned F0BP1:1;
    unsigned F0BP2:1;
    unsigned F0BP3:1;
    unsigned F1BP0:1;
    unsigned F1BP1:1;
    unsigned F1BP2:1;
    unsigned F1BP3:1;
    unsigned F2BP0:1;
    unsigned F2BP1:1;
    unsigned F2BP2:1;
    unsigned F2BP3:1;
    unsigned F3BP0:1;
    unsigned F3BP1:1;
    unsigned F3BP2:1;
    unsigned F3BP3:1;
  };
} C1BUFPNT1bits __attribute__((__sfr__));

extern volatile unsigned int  C1RXFUL1 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXFUL0:1;
  unsigned RXFUL1:1;
  unsigned RXFUL2:1;
  unsigned RXFUL3:1;
  unsigned RXFUL4:1;
  unsigned RXFUL5:1;
  unsigned RXFUL6:1;
  unsigned RXFUL7:1;
  unsigned RXFUL8:1;
  unsigned RXFUL9:1;
  unsigned RXFUL10:1;
  unsigned RXFUL11:1;
  unsigned RXFUL12:1;
  unsigned RXFUL13:1;
  unsigned RXFUL14:1;
  unsigned RXFUL15:1;
} C1RXFUL1bits __attribute__((__sfr__));

extern volatile unsigned int  C1BUFPNT2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F4BP:4;
    unsigned F5BP:4;
    unsigned F6BP:4;
    unsigned F7BP:4;
  };
  struct {
    unsigned F4BP0:1;
    unsigned F4BP1:1;
    unsigned F4BP2:1;
    unsigned F4BP3:1;
    unsigned F5BP0:1;
    unsigned F5BP1:1;
    unsigned F5BP2:1;
    unsigned F5BP3:1;
    unsigned F6BP0:1;
    unsigned F6BP1:1;
    unsigned F6BP2:1;
    unsigned F6BP3:1;
    unsigned F7BP0:1;
    unsigned F7BP1:1;
    unsigned F7BP2:1;
    unsigned F7BP3:1;
  };
} C1BUFPNT2bits __attribute__((__sfr__));

extern volatile unsigned int  C1RXFUL2 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXFUL16:1;
  unsigned RXFUL17:1;
  unsigned RXFUL18:1;
  unsigned RXFUL19:1;
  unsigned RXFUL20:1;
  unsigned RXFUL21:1;
  unsigned RXFUL22:1;
  unsigned RXFUL23:1;
  unsigned RXFUL24:1;
  unsigned RXFUL25:1;
  unsigned RXFUL26:1;
  unsigned RXFUL27:1;
  unsigned RXFUL28:1;
  unsigned RXFUL29:1;
  unsigned RXFUL30:1;
  unsigned RXFUL31:1;
} C1RXFUL2bits __attribute__((__sfr__));

extern volatile unsigned int  C1BUFPNT3 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F8BP:4;
    unsigned F9BP:4;
    unsigned F10BP:4;
    unsigned F11BP:4;
  };
  struct {
    unsigned F8BP0:1;
    unsigned F8BP1:1;
    unsigned F8BP2:1;
    unsigned F8BP3:1;
    unsigned F9BP0:1;
    unsigned F9BP1:1;
    unsigned F9BP2:1;
    unsigned F9BP3:1;
    unsigned F10BP0:1;
    unsigned F10BP1:1;
    unsigned F10BP2:1;
    unsigned F10BP3:1;
    unsigned F11BP0:1;
    unsigned F11BP1:1;
    unsigned F11BP2:1;
    unsigned F11BP3:1;
  };
} C1BUFPNT3bits __attribute__((__sfr__));

extern volatile unsigned int  C1BUFPNT4 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F12BP:4;
    unsigned F13BP:4;
    unsigned F14BP:4;
    unsigned F15BP:4;
  };
  struct {
    unsigned F12BP0:1;
    unsigned F12BP1:1;
    unsigned F12BP2:1;
    unsigned F12BP3:1;
    unsigned F13BP0:1;
    unsigned F13BP1:1;
    unsigned F13BP2:1;
    unsigned F13BP3:1;
    unsigned F14BP0:1;
    unsigned F14BP1:1;
    unsigned F14BP2:1;
    unsigned F14BP3:1;
    unsigned F15BP0:1;
    unsigned F15BP1:1;
    unsigned F15BP2:1;
    unsigned F15BP3:1;
  };
} C1BUFPNT4bits __attribute__((__sfr__));

extern volatile unsigned int  C1RXOVF1 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXOVF0:1;
  unsigned RXOVF1:1;
  unsigned RXOVF2:1;
  unsigned RXOVF3:1;
  unsigned RXOVF4:1;
  unsigned RXOVF5:1;
  unsigned RXOVF6:1;
  unsigned RXOVF7:1;
  unsigned RXOVF8:1;
  unsigned RXOVF9:1;
  unsigned RXOVF10:1;
  unsigned RXOVF11:1;
  unsigned RXOVF12:1;
  unsigned RXOVF13:1;
  unsigned RXOVF14:1;
  unsigned RXOVF15:1;
} C1RXOVF1bits __attribute__((__sfr__));

extern volatile unsigned int  C1RXOVF2 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXOVF16:1;
  unsigned RXOVF17:1;
  unsigned RXOVF18:1;
  unsigned RXOVF19:1;
  unsigned RXOVF20:1;
  unsigned RXOVF21:1;
  unsigned RXOVF22:1;
  unsigned RXOVF23:1;
  unsigned RXOVF24:1;
  unsigned RXOVF25:1;
  unsigned RXOVF26:1;
  unsigned RXOVF27:1;
  unsigned RXOVF28:1;
  unsigned RXOVF29:1;
  unsigned RXOVF30:1;
  unsigned RXOVF31:1;
} C1RXOVF2bits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM0SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXM0SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1TR01CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX0PRI:2;
    unsigned RTREN0:1;
    unsigned TXREQ0:1;
    unsigned TXERR0:1;
    unsigned TXLARB0:1;
    unsigned TXABT0:1;
    unsigned TXEN0:1;
    unsigned TX1PRI:2;
    unsigned RTREN1:1;
    unsigned TXREQ1:1;
    unsigned TXERR1:1;
    unsigned TXLARB1:1;
    unsigned TXABT1:1;
    unsigned TXEN1:1;
  };
  struct {
    unsigned TX0PRI0:1;
    unsigned TX0PRI1:1;
    unsigned :6;
    unsigned TX1PRI0:1;
    unsigned TX1PRI1:1;
  };
} C1TR01CONbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM0EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXM0EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1TR23CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX2PRI:2;
    unsigned RTREN2:1;
    unsigned TXREQ2:1;
    unsigned TXERR2:1;
    unsigned TXLARB2:1;
    unsigned TXABT2:1;
    unsigned TXEN2:1;
    unsigned TX3PRI:2;
    unsigned RTREN3:1;
    unsigned TXREQ3:1;
    unsigned TXERR3:1;
    unsigned TXLARB3:1;
    unsigned TXABT3:1;
    unsigned TXEN3:1;
  };
  struct {
    unsigned TX2PRI0:1;
    unsigned TX2PRI1:1;
    unsigned :6;
    unsigned TX3PRI0:1;
    unsigned TX3PRI1:1;
  };
} C1TR23CONbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM1SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXM1SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1TR45CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX4PRI:2;
    unsigned RTREN4:1;
    unsigned TXREQ4:1;
    unsigned TXERR4:1;
    unsigned TXLARB4:1;
    unsigned TXABT4:1;
    unsigned TXEN4:1;
    unsigned TX5PRI:2;
    unsigned RTREN5:1;
    unsigned TXREQ5:1;
    unsigned TXERR5:1;
    unsigned TXLARB5:1;
    unsigned TXABT5:1;
    unsigned TXEN5:1;
  };
  struct {
    unsigned TX4PRI0:1;
    unsigned TX4PRI1:1;
    unsigned :6;
    unsigned TX5PRI0:1;
    unsigned TX5PRI1:1;
  };
} C1TR45CONbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM1EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXM1EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1TR67CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX6PRI:2;
    unsigned RTREN6:1;
    unsigned TXREQ6:1;
    unsigned TXERR6:1;
    unsigned TXLARB6:1;
    unsigned TXABT6:1;
    unsigned TXEN6:1;
    unsigned TX7PRI:2;
    unsigned RTREN7:1;
    unsigned TXREQ7:1;
    unsigned TXERR7:1;
    unsigned TXLARB7:1;
    unsigned TXABT7:1;
    unsigned TXEN7:1;
  };
  struct {
    unsigned TX6PRI0:1;
    unsigned TX6PRI1:1;
    unsigned :6;
    unsigned TX7PRI0:1;
    unsigned TX7PRI1:1;
  };
} C1TR67CONbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM2SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXM2SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXM2EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXM2EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXD __attribute__((__sfr__));

/* Generic structure of entire SFR area for each CAN module */
typedef struct tagCAN {
        unsigned int cxrxf0sid;
        unsigned int cxrxf0eidh;
        unsigned int cxrxf0eidl;
        unsigned int reserved0;
        unsigned int cxrxf1sid;
        unsigned int cxrxf1eidh;
        unsigned int cxrxf1eidl;
        unsigned int reserved1;
        unsigned int cxrxf2sid;
        unsigned int cxrxf2eidh;
        unsigned int cxrxf2eidl;
        unsigned int reserved2;
        unsigned int cxrxf3sid;
        unsigned int cxrxf3eidh;
        unsigned int cxrxf3eidl;
        unsigned int reserved3;
        unsigned int cxrxf4sid;
        unsigned int cxrxf4eidh;
        unsigned int cxrxf4eidl;
        unsigned int reserved4;
        unsigned int cxrxf5sid;
        unsigned int cxrxf5eidh;
        unsigned int cxrxf5eidl;
        unsigned int reserved5;
        unsigned int cxrxm0sid;
        unsigned int cxrxm0eidh;
        unsigned int cxrxm0eidl;
        unsigned int reserved6;
        unsigned int cxrxm1sid;
        unsigned int cxrxm1eidl;
        unsigned int reserved7;
        unsigned int cxtx2sid;
        unsigned int cxtx2eid;
        unsigned int cxtx2dlc;
        unsigned int cxtx2b1;
        unsigned int cxtx2b2;
        unsigned int cxtx2b3;
        unsigned int cxtx2b4;
        unsigned int cxtx2con;
        unsigned int cxtx1sid;
        unsigned int cxtx1eid;
        unsigned int cxtx1dlc;
        unsigned int cxtx1b1;
        unsigned int cxtx1b2;
        unsigned int cxtx1b3;
        unsigned int cxtx1b4;
        unsigned int cxtx1con;
        unsigned int cxtx0sid;
        unsigned int cxtx0eid;
        unsigned int cxtx0dlc;
        unsigned int cxtx0b1;
        unsigned int cxtx0b2;
        unsigned int cxtx0b3;
        unsigned int cxtx0b4;
        unsigned int cxtx0con;
        unsigned int cxrx1sid;
        unsigned int cxrx1eid;
        unsigned int cxrx1dlc;
        unsigned int cxrx1b1;
        unsigned int cxrx1b2;
        unsigned int cxrx1b3;
        unsigned int cxrx1b4;
        unsigned int cxrx1con;
        unsigned int cxrx0sid;
        unsigned int cxrx0eid;
        unsigned int cxrx0dlc;
        unsigned int cxrx0b1;
        unsigned int cxrx0b2;
        unsigned int cxrx0b3;
        unsigned int cxrx0b4;
        unsigned int cxrx0con;
        unsigned int cxctrl;
        unsigned int cxcfg1;
        unsigned int cxcfg2;
        unsigned int cxintf;
        unsigned int cxinte;
        unsigned int cxec;
        unsigned int reserved8[50];
} CAN, *PCAN;

/* SFR blocks for each CAN module */
extern volatile CAN CAN1 __attribute__((__sfr__));
extern volatile CAN CAN2 __attribute__((__sfr__));

extern volatile unsigned int  C1RXF0SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF0SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF0EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF0EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1TXD __attribute__((__sfr__));
extern volatile unsigned int  C1RXF1SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF1SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF1EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF1EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF2SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF2SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF2EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF2EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF3SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF3SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF3EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF3EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF4SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF4SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF4EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF4EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF5SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF5SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF5EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF5EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF6SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF6SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF6EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF6EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF7SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF7SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF7EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF7EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF8SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF8SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF8EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF8EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF9SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF9SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF9EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF9EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF10SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF10SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF10EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF10EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF11SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF11SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF11EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF11EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF12SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF12SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF12EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF12EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF13SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF13SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF13EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF13EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF14SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF14SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF14EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF14EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF15SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C1RXF15SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C1RXF15EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C1RXF15EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2CTRL1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned WIN:1;
    unsigned :2;
    unsigned CANCAP:1;
    unsigned :1;
    unsigned OPMODE:3;
    unsigned REQOP:3;
    unsigned CANCKS:1;
    unsigned ABAT:1;
    unsigned CANSIDL:1;
    unsigned CANFRZ:1;
  };
  struct {
    unsigned :5;
    unsigned OPMODE0:1;
    unsigned OPMODE1:1;
    unsigned OPMODE2:1;
    unsigned REQOP0:1;
    unsigned REQOP1:1;
    unsigned REQOP2:1;
  };
} C2CTRL1bits __attribute__((__sfr__));

extern volatile unsigned int  C2CTRL2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned DNCNT:5;
  };
  struct {
    unsigned DNCNT0:1;
    unsigned DNCNT1:1;
    unsigned DNCNT2:1;
    unsigned DNCNT3:1;
    unsigned DNCNT4:1;
  };
} C2CTRL2bits __attribute__((__sfr__));

extern volatile unsigned int  C2VEC __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned ICODE:7;
    unsigned :1;
    unsigned FILHIT:5;
  };
  struct {
    unsigned ICODE0:1;
    unsigned ICODE1:1;
    unsigned ICODE2:1;
    unsigned ICODE3:1;
    unsigned ICODE4:1;
    unsigned ICODE5:1;
    unsigned ICODE6:1;
    unsigned :1;
    unsigned FILHIT0:1;
    unsigned FILHIT1:1;
    unsigned FILHIT2:1;
    unsigned FILHIT3:1;
    unsigned FILHIT4:1;
  };
} C2VECbits __attribute__((__sfr__));

extern volatile unsigned int  C2FCTRL __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FSA:5;
    unsigned :8;
    unsigned DMABS:3;
  };
  struct {
    unsigned FSA0:1;
    unsigned FSA1:1;
    unsigned FSA2:1;
    unsigned FSA3:1;
    unsigned FSA4:1;
    unsigned :8;
    unsigned DMABS0:1;
    unsigned DMABS1:1;
    unsigned DMABS2:1;
  };
} C2FCTRLbits __attribute__((__sfr__));

extern volatile unsigned int  C2FIFO __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FNRB:6;
    unsigned :2;
    unsigned FBP:6;
  };
  struct {
    unsigned FNRB0:1;
    unsigned FNRB1:1;
    unsigned FNRB2:1;
    unsigned FNRB3:1;
    unsigned FNRB4:1;
    unsigned FNRB5:1;
    unsigned :2;
    unsigned FBP0:1;
    unsigned FBP1:1;
    unsigned FBP2:1;
    unsigned FBP3:1;
    unsigned FBP4:1;
    unsigned FBP5:1;
  };
} C2FIFObits __attribute__((__sfr__));

extern volatile unsigned int  C2INTF __attribute__((__sfr__));
extern volatile struct {
  unsigned TBIF:1;
  unsigned RBIF:1;
  unsigned RBOVIF:1;
  unsigned FIFOIF:1;
  unsigned :1;
  unsigned ERRIF:1;
  unsigned WAKIF:1;
  unsigned IVRIF:1;
  unsigned EWARN:1;
  unsigned RXWARN:1;
  unsigned TXWARN:1;
  unsigned RXBP:1;
  unsigned TXBP:1;
  unsigned TXBO:1;
} C2INTFbits __attribute__((__sfr__));

extern volatile unsigned int  C2INTE __attribute__((__sfr__));
extern volatile struct {
  unsigned TBIE:1;
  unsigned RBIE:1;
  unsigned RBOVIE:1;
  unsigned FIFOIE:1;
  unsigned :1;
  unsigned ERRIE:1;
  unsigned WAKIE:1;
  unsigned IVRIE:1;
} C2INTEbits __attribute__((__sfr__));

extern volatile unsigned int  C2EC __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned RERRCNT:8;
    unsigned TERRCNT:8;
  };
  struct {
    unsigned RERRCNT0:1;
    unsigned RERRCNT1:1;
    unsigned RERRCNT2:1;
    unsigned RERRCNT3:1;
    unsigned RERRCNT4:1;
    unsigned RERRCNT5:1;
    unsigned RERRCNT6:1;
    unsigned RERRCNT7:1;
    unsigned TERRCNT0:1;
    unsigned TERRCNT1:1;
    unsigned TERRCNT2:1;
    unsigned TERRCNT3:1;
    unsigned TERRCNT4:1;
    unsigned TERRCNT5:1;
    unsigned TERRCNT6:1;
    unsigned TERRCNT7:1;
  };
} C2ECbits __attribute__((__sfr__));

extern volatile unsigned char C2RERRCNT __attribute__((__sfr__));
extern volatile unsigned char C2TERRCNT __attribute__((__sfr__));
extern volatile unsigned int  C2CFG1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned BRP:6;
    unsigned SJW:2;
  };
  struct {
    unsigned BRP0:1;
    unsigned BRP1:1;
    unsigned BRP2:1;
    unsigned BRP3:1;
    unsigned BRP4:1;
    unsigned BRP5:1;
    unsigned SJW0:1;
    unsigned SJW1:1;
  };
} C2CFG1bits __attribute__((__sfr__));

extern volatile unsigned int  C2CFG2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PRSEG:3;
    unsigned SEG1PH:3;
    unsigned SAM:1;
    unsigned SEG2PHTS:1;
    unsigned SEG2PH:3;
    unsigned :3;
    unsigned WAKFIL:1;
  };
  struct {
    unsigned PRSEG0:1;
    unsigned PRSEG1:1;
    unsigned PRSEG2:1;
    unsigned SEG1PH0:1;
    unsigned SEG1PH1:1;
    unsigned SEG1PH2:1;
    unsigned :2;
    unsigned SEG2PH0:1;
    unsigned SEG2PH1:1;
    unsigned SEG2PH2:1;
  };
} C2CFG2bits __attribute__((__sfr__));

extern volatile unsigned int  C2FEN1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned FLTEN:16;
  };
  struct {
    unsigned FLTEN0:1;
    unsigned FLTEN1:1;
    unsigned FLTEN2:1;
    unsigned FLTEN3:1;
    unsigned FLTEN4:1;
    unsigned FLTEN5:1;
    unsigned FLTEN6:1;
    unsigned FLTEN7:1;
    unsigned FLTEN8:1;
    unsigned FLTEN9:1;
    unsigned FLTEN10:1;
    unsigned FLTEN11:1;
    unsigned FLTEN12:1;
    unsigned FLTEN13:1;
    unsigned FLTEN14:1;
    unsigned FLTEN15:1;
  };
} C2FEN1bits __attribute__((__sfr__));

extern volatile unsigned int  C2FMSKSEL1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F0MSK:2;
    unsigned F1MSK:2;
    unsigned F2MSK:2;
    unsigned F3MSK:2;
    unsigned F4MSK:2;
    unsigned F5MSK:2;
    unsigned F6MSK:2;
    unsigned F7MSK:2;
  };
  struct {
    unsigned F0MSK0:1;
    unsigned F0MSK1:1;
    unsigned F1MSK0:1;
    unsigned F1MSK1:1;
    unsigned F2MSK0:1;
    unsigned F2MSK1:1;
    unsigned F3MSK0:1;
    unsigned F3MSK1:1;
    unsigned F4MSK0:1;
    unsigned F4MSK1:1;
    unsigned F5MSK0:1;
    unsigned F5MSK1:1;
    unsigned F6MSK0:1;
    unsigned F6MSK1:1;
    unsigned F7MSK0:1;
    unsigned F7MSK1:1;
  };
} C2FMSKSEL1bits __attribute__((__sfr__));

extern volatile unsigned int  C2FMSKSEL2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F8MSK:2;
    unsigned F9MSK:2;
    unsigned F10MSK:2;
    unsigned F11MSK:2;
    unsigned F12MSK:2;
    unsigned F13MSK:2;
    unsigned F14MSK:2;
    unsigned F15MSK:2;
  };
  struct {
    unsigned F8MSK0:1;
    unsigned F8MSK1:1;
    unsigned F9MSK0:1;
    unsigned F9MSK1:1;
    unsigned F10MSK0:1;
    unsigned F10MSK1:1;
    unsigned F11MSK0:1;
    unsigned F11MSK1:1;
    unsigned F12MSK0:1;
    unsigned F12MSK1:1;
    unsigned F13MSK0:1;
    unsigned F13MSK1:1;
    unsigned F14MSK0:1;
    unsigned F14MSK1:1;
    unsigned F15MSK0:1;
    unsigned F15MSK1:1;
  };
} C2FMSKSEL2bits __attribute__((__sfr__));

extern volatile unsigned int  C2BUFPNT1 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F0BP:4;
    unsigned F1BP:4;
    unsigned F2BP:4;
    unsigned F3BP:4;
  };
  struct {
    unsigned F0BP0:1;
    unsigned F0BP1:1;
    unsigned F0BP2:1;
    unsigned F0BP3:1;
    unsigned F1BP0:1;
    unsigned F1BP1:1;
    unsigned F1BP2:1;
    unsigned F1BP3:1;
    unsigned F2BP0:1;
    unsigned F2BP1:1;
    unsigned F2BP2:1;
    unsigned F2BP3:1;
    unsigned F3BP0:1;
    unsigned F3BP1:1;
    unsigned F3BP2:1;
    unsigned F3BP3:1;
  };
} C2BUFPNT1bits __attribute__((__sfr__));

extern volatile unsigned int  C2RXFUL1 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXFUL0:1;
  unsigned RXFUL1:1;
  unsigned RXFUL2:1;
  unsigned RXFUL3:1;
  unsigned RXFUL4:1;
  unsigned RXFUL5:1;
  unsigned RXFUL6:1;
  unsigned RXFUL7:1;
  unsigned RXFUL8:1;
  unsigned RXFUL9:1;
  unsigned RXFUL10:1;
  unsigned RXFUL11:1;
  unsigned RXFUL12:1;
  unsigned RXFUL13:1;
  unsigned RXFUL14:1;
  unsigned RXFUL15:1;
} C2RXFUL1bits __attribute__((__sfr__));

extern volatile unsigned int  C2BUFPNT2 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F4BP:4;
    unsigned F5BP:4;
    unsigned F6BP:4;
    unsigned F7BP:4;
  };
  struct {
    unsigned F4BP0:1;
    unsigned F4BP1:1;
    unsigned F4BP2:1;
    unsigned F4BP3:1;
    unsigned F5BP0:1;
    unsigned F5BP1:1;
    unsigned F5BP2:1;
    unsigned F5BP3:1;
    unsigned F6BP0:1;
    unsigned F6BP1:1;
    unsigned F6BP2:1;
    unsigned F6BP3:1;
    unsigned F7BP0:1;
    unsigned F7BP1:1;
    unsigned F7BP2:1;
    unsigned F7BP3:1;
  };
} C2BUFPNT2bits __attribute__((__sfr__));

extern volatile unsigned int  C2RXFUL2 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXFUL16:1;
  unsigned RXFUL17:1;
  unsigned RXFUL18:1;
  unsigned RXFUL19:1;
  unsigned RXFUL20:1;
  unsigned RXFUL21:1;
  unsigned RXFUL22:1;
  unsigned RXFUL23:1;
  unsigned RXFUL24:1;
  unsigned RXFUL25:1;
  unsigned RXFUL26:1;
  unsigned RXFUL27:1;
  unsigned RXFUL28:1;
  unsigned RXFUL29:1;
  unsigned RXFUL30:1;
  unsigned RXFUL31:1;
} C2RXFUL2bits __attribute__((__sfr__));

extern volatile unsigned int  C2BUFPNT3 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F8BP:4;
    unsigned F9BP:4;
    unsigned F10BP:4;
    unsigned F11BP:4;
  };
  struct {
    unsigned F8BP0:1;
    unsigned F8BP1:1;
    unsigned F8BP2:1;
    unsigned F8BP3:1;
    unsigned F9BP0:1;
    unsigned F9BP1:1;
    unsigned F9BP2:1;
    unsigned F9BP3:1;
    unsigned F10BP0:1;
    unsigned F10BP1:1;
    unsigned F10BP2:1;
    unsigned F10BP3:1;
    unsigned F11BP0:1;
    unsigned F11BP1:1;
    unsigned F11BP2:1;
    unsigned F11BP3:1;
  };
} C2BUFPNT3bits __attribute__((__sfr__));

extern volatile unsigned int  C2BUFPNT4 __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned F12BP:4;
    unsigned F13BP:4;
    unsigned F14BP:4;
    unsigned F15BP:4;
  };
  struct {
    unsigned F12BP0:1;
    unsigned F12BP1:1;
    unsigned F12BP2:1;
    unsigned F12BP3:1;
    unsigned F13BP0:1;
    unsigned F13BP1:1;
    unsigned F13BP2:1;
    unsigned F13BP3:1;
    unsigned F14BP0:1;
    unsigned F14BP1:1;
    unsigned F14BP2:1;
    unsigned F14BP3:1;
    unsigned F15BP0:1;
    unsigned F15BP1:1;
    unsigned F15BP2:1;
    unsigned F15BP3:1;
  };
} C2BUFPNT4bits __attribute__((__sfr__));

extern volatile unsigned int  C2RXOVF1 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXOVF0:1;
  unsigned RXOVF1:1;
  unsigned RXOVF2:1;
  unsigned RXOVF3:1;
  unsigned RXOVF4:1;
  unsigned RXOVF5:1;
  unsigned RXOVF6:1;
  unsigned RXOVF7:1;
  unsigned RXOVF8:1;
  unsigned RXOVF9:1;
  unsigned RXOVF10:1;
  unsigned RXOVF11:1;
  unsigned RXOVF12:1;
  unsigned RXOVF13:1;
  unsigned RXOVF14:1;
  unsigned RXOVF15:1;
} C2RXOVF1bits __attribute__((__sfr__));

extern volatile unsigned int  C2RXOVF2 __attribute__((__sfr__));
extern volatile struct {
  unsigned RXOVF16:1;
  unsigned RXOVF17:1;
  unsigned RXOVF18:1;
  unsigned RXOVF19:1;
  unsigned RXOVF20:1;
  unsigned RXOVF21:1;
  unsigned RXOVF22:1;
  unsigned RXOVF23:1;
  unsigned RXOVF24:1;
  unsigned RXOVF25:1;
  unsigned RXOVF26:1;
  unsigned RXOVF27:1;
  unsigned RXOVF28:1;
  unsigned RXOVF29:1;
  unsigned RXOVF30:1;
  unsigned RXOVF31:1;
} C2RXOVF2bits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM0SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXM0SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2TR01CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX0PRI:2;
    unsigned RTREN0:1;
    unsigned TXREQ0:1;
    unsigned TXERR0:1;
    unsigned TXLARB0:1;
    unsigned TXABT0:1;
    unsigned TXEN0:1;
    unsigned TX1PRI:2;
    unsigned RTREN1:1;
    unsigned TXREQ1:1;
    unsigned TXERR1:1;
    unsigned TXLARB1:1;
    unsigned TXABT1:1;
    unsigned TXEN1:1;
  };
  struct {
    unsigned TX0PRI0:1;
    unsigned TX0PRI1:1;
    unsigned :6;
    unsigned TX1PRI0:1;
    unsigned TX1PRI1:1;
  };
} C2TR01CONbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM0EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXM0EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2TR23CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX2PRI:2;
    unsigned RTREN2:1;
    unsigned TXREQ2:1;
    unsigned TXERR2:1;
    unsigned TXLARB2:1;
    unsigned TXABT2:1;
    unsigned TXEN2:1;
    unsigned TX3PRI:2;
    unsigned RTREN3:1;
    unsigned TXREQ3:1;
    unsigned TXERR3:1;
    unsigned TXLARB3:1;
    unsigned TXABT3:1;
    unsigned TXEN3:1;
  };
  struct {
    unsigned TX2PRI0:1;
    unsigned TX2PRI1:1;
    unsigned :6;
    unsigned TX3PRI0:1;
    unsigned TX3PRI1:1;
  };
} C2TR23CONbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM1SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXM1SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2TR45CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX4PRI:2;
    unsigned RTREN4:1;
    unsigned TXREQ4:1;
    unsigned TXERR4:1;
    unsigned TXLARB4:1;
    unsigned TXABT4:1;
    unsigned TXEN4:1;
    unsigned TX5PRI:2;
    unsigned RTREN5:1;
    unsigned TXREQ5:1;
    unsigned TXERR5:1;
    unsigned TXLARB5:1;
    unsigned TXABT5:1;
    unsigned TXEN5:1;
  };
  struct {
    unsigned TX4PRI0:1;
    unsigned TX4PRI1:1;
    unsigned :6;
    unsigned TX5PRI0:1;
    unsigned TX5PRI1:1;
  };
} C2TR45CONbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM1EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXM1EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2TR67CON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TX6PRI:2;
    unsigned RTREN6:1;
    unsigned TXREQ6:1;
    unsigned TXERR6:1;
    unsigned TXLARB6:1;
    unsigned TXABT6:1;
    unsigned TXEN6:1;
    unsigned TX7PRI:2;
    unsigned RTREN7:1;
    unsigned TXREQ7:1;
    unsigned TXERR7:1;
    unsigned TXLARB7:1;
    unsigned TXABT7:1;
    unsigned TXEN7:1;
  };
  struct {
    unsigned TX6PRI0:1;
    unsigned TX6PRI1:1;
    unsigned :6;
    unsigned TX7PRI0:1;
    unsigned TX7PRI1:1;
  };
} C2TR67CONbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM2SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXM2SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXM2EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXM2EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXD __attribute__((__sfr__));
extern volatile unsigned int  C2RXF0SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF0SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF0EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF0EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2TXD __attribute__((__sfr__));
extern volatile unsigned int  C2RXF1SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF1SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF1EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF1EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF2SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF2SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF2EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF2EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF3SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF3SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF3EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF3EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF4SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF4SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF4EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF4EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF5SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF5SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF5EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF5EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF6SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF6SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF6EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF6EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF7SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF7SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF7EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF7EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF8SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF8SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF8EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF8EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF9SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF9SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF9EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF9EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF10SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF10SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF10EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF10EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF11SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF11SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF11EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF11EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF12SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF12SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF12EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF12EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF13SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF13SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF13EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF13EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF14SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF14SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF14EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF14EIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF15SID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:2;
    unsigned :1;
    unsigned EXIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned EID16:1;
    unsigned EID17:1;
    unsigned :3;
    unsigned SID0:1;
    unsigned SID1:1;
    unsigned SID2:1;
    unsigned SID3:1;
    unsigned SID4:1;
    unsigned SID5:1;
    unsigned SID6:1;
    unsigned SID7:1;
    unsigned SID8:1;
    unsigned SID9:1;
    unsigned SID10:1;
  };
} C2RXF15SIDbits __attribute__((__sfr__));

extern volatile unsigned int  C2RXF15EID __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned EID:16;
  };
  struct {
    unsigned EID0:1;
    unsigned EID1:1;
    unsigned EID2:1;
    unsigned EID3:1;
    unsigned EID4:1;
    unsigned EID5:1;
    unsigned EID6:1;
    unsigned EID7:1;
    unsigned EID8:1;
    unsigned EID9:1;
    unsigned EID10:1;
    unsigned EID11:1;
    unsigned EID12:1;
    unsigned EID13:1;
    unsigned EID14:1;
    unsigned EID15:1;
  };
} C2RXF15EIDbits __attribute__((__sfr__));

extern volatile unsigned int  ODCA __attribute__((__sfr__));
extern volatile struct {
  unsigned ODCA0:1;
  unsigned ODCA1:1;
  unsigned ODCA2:1;
  unsigned ODCA3:1;
  unsigned ODCA4:1;
  unsigned ODCA5:1;
  unsigned :6;
  unsigned ODCA12:1;
  unsigned ODCA13:1;
  unsigned ODCA14:1;
  unsigned ODCA15:1;
} ODCAbits __attribute__((__sfr__));

extern volatile unsigned int  ODCD __attribute__((__sfr__));
extern volatile struct {
  unsigned ODCD0:1;
  unsigned ODCD1:1;
  unsigned ODCD2:1;
  unsigned ODCD3:1;
  unsigned ODCD4:1;
  unsigned ODCD5:1;
  unsigned ODCD6:1;
  unsigned ODCD7:1;
  unsigned ODCD8:1;
  unsigned ODCD9:1;
  unsigned ODCD10:1;
  unsigned ODCD11:1;
  unsigned ODCD12:1;
  unsigned ODCD13:1;
  unsigned ODCD14:1;
  unsigned ODCD15:1;
} ODCDbits __attribute__((__sfr__));

extern volatile unsigned int  ODCF __attribute__((__sfr__));
extern volatile struct {
  unsigned ODCF0:1;
  unsigned ODCF1:1;
  unsigned ODCF2:1;
  unsigned ODCF3:1;
  unsigned ODCF4:1;
  unsigned ODCF5:1;
  unsigned ODCF6:1;
  unsigned ODCF7:1;
  unsigned ODCF8:1;
  unsigned :3;
  unsigned ODCF12:1;
  unsigned ODCF13:1;
} ODCFbits __attribute__((__sfr__));

extern volatile unsigned int  ODCG __attribute__((__sfr__));
extern volatile struct {
  unsigned ODCG0:1;
  unsigned ODCG1:1;
  unsigned ODCG2:1;
  unsigned ODCG3:1;
  unsigned :2;
  unsigned ODCG6:1;
  unsigned ODCG7:1;
  unsigned ODCG8:1;
  unsigned ODCG9:1;
  unsigned :2;
  unsigned ODCG12:1;
  unsigned ODCG13:1;
  unsigned ODCG14:1;
  unsigned ODCG15:1;
} ODCGbits __attribute__((__sfr__));

extern volatile unsigned int  RCON __attribute__((__sfr__));
extern volatile struct {
  unsigned POR:1;
  unsigned BOR:1;
  unsigned IDLE:1;
  unsigned SLEEP:1;
  unsigned WDTO:1;
  unsigned SWDTEN:1;
  unsigned SWR:1;
  unsigned EXTR:1;
  unsigned VREGS:1;
  unsigned :5;
  unsigned IOPUWR:1;
  unsigned TRAPR:1;
} RCONbits __attribute__((__sfr__));

extern volatile unsigned int  OSCCON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned OSWEN:1;
    unsigned LPOSCEN:1;
    unsigned :1;
    unsigned CF:1;
    unsigned :1;
    unsigned LOCK:1;
    unsigned :1;
    unsigned CLKLOCK:1;
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
  };
  struct {
    unsigned :8;
    unsigned NOSC0:1;
    unsigned NOSC1:1;
    unsigned NOSC2:1;
    unsigned :1;
    unsigned COSC0:1;
    unsigned COSC1:1;
    unsigned COSC2:1;
  };
} OSCCONbits __attribute__((__sfr__));

extern volatile unsigned int  CLKDIV __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PLLPRE:5;
    unsigned :1;
    unsigned PLLPOST:2;
    unsigned FRCDIV:3;
    unsigned DOZEN:1;
    unsigned DOZE:3;
    unsigned ROI:1;
  };
  struct {
    unsigned PLLPRE0:1;
    unsigned PLLPRE1:1;
    unsigned PLLPRE2:1;
    unsigned PLLPRE3:1;
    unsigned PLLPRE4:1;
    unsigned :1;
    unsigned PLLPOST0:1;
    unsigned PLLPOST1:1;
    unsigned FRCDIV0:1;
    unsigned FRCDIV1:1;
    unsigned FRCDIV2:1;
    unsigned :1;
    unsigned DOZE0:1;
    unsigned DOZE1:1;
    unsigned DOZE2:1;
  };
} CLKDIVbits __attribute__((__sfr__));

extern volatile unsigned int  PLLFBD __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned PLLDIV:9;
  };
  struct {
    unsigned PLLDIV0:1;
    unsigned PLLDIV1:1;
    unsigned PLLDIV2:1;
    unsigned PLLDIV3:1;
    unsigned PLLDIV4:1;
    unsigned PLLDIV5:1;
    unsigned PLLDIV6:1;
    unsigned PLLDIV7:1;
    unsigned PLLDIV8:1;
  };
} PLLFBDbits __attribute__((__sfr__));

extern volatile unsigned int  OSCTUN __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned TUN:6;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
} OSCTUNbits __attribute__((__sfr__));

extern volatile unsigned int  BSRAM __attribute__((__sfr__));
extern volatile struct {
  unsigned RL_BSR:1;
  unsigned IR_BSR:1;
  unsigned IW_BSR:1;
} BSRAMbits __attribute__((__sfr__));

extern volatile unsigned int  SSRAM __attribute__((__sfr__));
extern volatile struct {
  unsigned RL_SSR:1;
  unsigned IR_SSR:1;
  unsigned IW_SSR:1;
} SSRAMbits __attribute__((__sfr__));

extern volatile unsigned int  NVMCON __attribute__((__sfr__));
extern volatile union {
  struct {
    unsigned NVMOP:4;
    unsigned :2;
    unsigned ERASE:1;
    unsigned :6;
    unsigned WRERR:1;
    unsigned WREN:1;
    unsigned WR:1;
  };
  struct {
    unsigned NVMOP0:1;
    unsigned NVMOP1:1;
    unsigned NVMOP2:1;
    unsigned NVMOP3:1;
  };
} NVMCONbits __attribute__((__sfr__));

extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
extern volatile struct {
  unsigned AD1MD:1;
  unsigned C1MD:1;
  unsigned C2MD:1;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned I2C1MD:1;
  unsigned DCIMD:1;
  unsigned :2;
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
} PMD1bits __attribute__((__sfr__));

extern volatile unsigned int  PMD2 __attribute__((__sfr__));
extern volatile struct {
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned OC5MD:1;
  unsigned OC6MD:1;
  unsigned OC7MD:1;
  unsigned OC8MD:1;
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
  unsigned IC5MD:1;
  unsigned IC6MD:1;
  unsigned IC7MD:1;
  unsigned IC8MD:1;
} PMD2bits __attribute__((__sfr__));

extern volatile unsigned int  PMD3 __attribute__((__sfr__));
extern volatile struct {
  unsigned AD2MD:1;
  unsigned I2C2MD:1;
  unsigned :10;
  unsigned T6MD:1;
  unsigned T7MD:1;
  unsigned T8MD:1;
  unsigned T9MD:1;
} PMD3bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _DA SRbits.DA
#define _SAB SRbits.SAB
#define _OAB SRbits.OAB
#define _SB SRbits.SB
#define _SA SRbits.SA
#define _OB SRbits.OB
#define _OA SRbits.OA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IF CORCONbits.IF
#define _RND CORCONbits.RND
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3
#define _ACCSAT CORCONbits.ACCSAT
#define _SATDW CORCONbits.SATDW
#define _SATB CORCONbits.SATB
#define _SATA CORCONbits.SATA
#define _DL CORCONbits.DL
#define _EDT CORCONbits.EDT
#define _US CORCONbits.US
#define _DL0 CORCONbits.DL0
#define _DL1 CORCONbits.DL1
#define _DL2 CORCONbits.DL2

/* MODCON */
#define _XWM MODCONbits.XWM
#define _YWM MODCONbits.YWM
#define _BWM MODCONbits.BWM
#define _YMODEN MODCONbits.YMODEN
#define _XMODEN MODCONbits.XMODEN
#define _XWM0 MODCONbits.XWM0
#define _XWM1 MODCONbits.XWM1
#define _XWM2 MODCONbits.XWM2
#define _XWM3 MODCONbits.XWM3
#define _YWM0 MODCONbits.YWM0
#define _YWM1 MODCONbits.YWM1
#define _YWM2 MODCONbits.YWM2
#define _YWM3 MODCONbits.YWM3
#define _BWM0 MODCONbits.BWM0
#define _BWM1 MODCONbits.BWM1
#define _BWM2 MODCONbits.BWM2
#define _BWM3 MODCONbits.BWM3

/* XBREV */
#define _XB XBREVbits.XB
#define _BREN XBREVbits.BREN
#define _XB0 XBREVbits.XB0
#define _XB1 XBREVbits.XB1
#define _XB2 XBREVbits.XB2
#define _XB3 XBREVbits.XB3
#define _XB4 XBREVbits.XB4
#define _XB5 XBREVbits.XB5
#define _XB6 XBREVbits.XB6
#define _XB7 XBREVbits.XB7
#define _XB8 XBREVbits.XB8
#define _XB9 XBREVbits.XB9
#define _XB10 XBREVbits.XB10
#define _XB11 XBREVbits.XB11
#define _XB12 XBREVbits.XB12
#define _XB13 XBREVbits.XB13
#define _XB14 XBREVbits.XB14

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN9IE CNEN1bits.CN9IE
#define _CN10IE CNEN1bits.CN10IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN17IE CNEN2bits.CN17IE
#define _CN18IE CNEN2bits.CN18IE
#define _CN19IE CNEN2bits.CN19IE
#define _CN20IE CNEN2bits.CN20IE
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN9PUE CNPU1bits.CN9PUE
#define _CN10PUE CNPU1bits.CN10PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN17PUE CNPU2bits.CN17PUE
#define _CN18PUE CNPU2bits.CN18PUE
#define _CN19PUE CNPU2bits.CN19PUE
#define _CN20PUE CNPU2bits.CN20PUE
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DMACERR INTCON1bits.DMACERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _SFTACERR INTCON1bits.SFTACERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _COVBERR INTCON1bits.COVBERR
#define _COVAERR INTCON1bits.COVAERR
#define _OVBERR INTCON1bits.OVBERR
#define _OVAERR INTCON1bits.OVAERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT3EP INTCON2bits.INT3EP
#define _INT4EP INTCON2bits.INT4EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _DMA0IF IFS0bits.DMA0IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _DMA1IF IFS0bits.DMA1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _AD2IF IFS1bits.AD2IF
#define _IC7IF IFS1bits.IC7IF
#define _IC8IF IFS1bits.IC8IF
#define _DMA2IF IFS1bits.DMA2IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _C1RXIF IFS2bits.C1RXIF
#define _C1IF IFS2bits.C1IF
#define _DMA3IF IFS2bits.DMA3IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF
#define _IC5IF IFS2bits.IC5IF
#define _IC6IF IFS2bits.IC6IF
#define _OC5IF IFS2bits.OC5IF
#define _OC6IF IFS2bits.OC6IF
#define _OC7IF IFS2bits.OC7IF
#define _OC8IF IFS2bits.OC8IF
#define _DMA4IF IFS2bits.DMA4IF
#define _T6IF IFS2bits.T6IF

/* IFS3 */
#define _T7IF IFS3bits.T7IF
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _T8IF IFS3bits.T8IF
#define _T9IF IFS3bits.T9IF
#define _INT3IF IFS3bits.INT3IF
#define _INT4IF IFS3bits.INT4IF
#define _C2RXIF IFS3bits.C2RXIF
#define _C2IF IFS3bits.C2IF
#define _DCIEIF IFS3bits.DCIEIF
#define _DCIIF IFS3bits.DCIIF
#define _DMA5IF IFS3bits.DMA5IF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _DMA6IF IFS4bits.DMA6IF
#define _DMA7IF IFS4bits.DMA7IF
#define _C1TXIF IFS4bits.C1TXIF
#define _C2TXIF IFS4bits.C2TXIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _DMA0IE IEC0bits.DMA0IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _DMA1IE IEC0bits.DMA1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _AD2IE IEC1bits.AD2IE
#define _IC7IE IEC1bits.IC7IE
#define _IC8IE IEC1bits.IC8IE
#define _DMA2IE IEC1bits.DMA2IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _C1RXIE IEC2bits.C1RXIE
#define _C1IE IEC2bits.C1IE
#define _DMA3IE IEC2bits.DMA3IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE
#define _IC5IE IEC2bits.IC5IE
#define _IC6IE IEC2bits.IC6IE
#define _OC5IE IEC2bits.OC5IE
#define _OC6IE IEC2bits.OC6IE
#define _OC7IE IEC2bits.OC7IE
#define _OC8IE IEC2bits.OC8IE
#define _DMA4IE IEC2bits.DMA4IE
#define _T6IE IEC2bits.T6IE

/* IEC3 */
#define _T7IE IEC3bits.T7IE
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _T8IE IEC3bits.T8IE
#define _T9IE IEC3bits.T9IE
#define _INT3IE IEC3bits.INT3IE
#define _INT4IE IEC3bits.INT4IE
#define _C2RXIE IEC3bits.C2RXIE
#define _C2IE IEC3bits.C2IE
#define _DCIEIE IEC3bits.DCIEIE
#define _DCIIE IEC3bits.DCIIE
#define _DMA5IE IEC3bits.DMA5IE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _DMA6IE IEC4bits.DMA6IE
#define _DMA7IE IEC4bits.DMA7IE
#define _C1TXIE IEC4bits.C1TXIE
#define _C2TXIE IEC4bits.C2TXIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _IC1IP IPC0bits.IC1IP
#define _OC1IP IPC0bits.OC1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _IC1IP0 IPC0bits.IC1IP0
#define _IC1IP1 IPC0bits.IC1IP1
#define _IC1IP2 IPC0bits.IC1IP2
#define _OC1IP0 IPC0bits.OC1IP0
#define _OC1IP1 IPC0bits.OC1IP1
#define _OC1IP2 IPC0bits.OC1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _DMA0IP IPC1bits.DMA0IP
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _DMA0IP0 IPC1bits.DMA0IP0
#define _DMA0IP1 IPC1bits.DMA0IP1
#define _DMA0IP2 IPC1bits.DMA0IP2
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _SPI1EIP IPC2bits.SPI1EIP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPI1EIP0 IPC2bits.SPI1EIP0
#define _SPI1EIP1 IPC2bits.SPI1EIP1
#define _SPI1EIP2 IPC2bits.SPI1EIP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _AD1IP IPC3bits.AD1IP
#define _DMA1IP IPC3bits.DMA1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _DMA1IP0 IPC3bits.DMA1IP0
#define _DMA1IP1 IPC3bits.DMA1IP1
#define _DMA1IP2 IPC3bits.DMA1IP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _AD2IP IPC5bits.AD2IP
#define _IC7IP IPC5bits.IC7IP
#define _IC8IP IPC5bits.IC8IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _AD2IP0 IPC5bits.AD2IP0
#define _AD2IP1 IPC5bits.AD2IP1
#define _AD2IP2 IPC5bits.AD2IP2
#define _IC7IP0 IPC5bits.IC7IP0
#define _IC7IP1 IPC5bits.IC7IP1
#define _IC7IP2 IPC5bits.IC7IP2
#define _IC8IP0 IPC5bits.IC8IP0
#define _IC8IP1 IPC5bits.IC8IP1
#define _IC8IP2 IPC5bits.IC8IP2

/* IPC6 */
#define _DMA2IP IPC6bits.DMA2IP
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _DMA2IP0 IPC6bits.DMA2IP0
#define _DMA2IP1 IPC6bits.DMA2IP1
#define _DMA2IP2 IPC6bits.DMA2IP2
#define _OC3IP0 IPC6bits.OC3IP0
#define _OC3IP1 IPC6bits.OC3IP1
#define _OC3IP2 IPC6bits.OC3IP2
#define _OC4IP0 IPC6bits.OC4IP0
#define _OC4IP1 IPC6bits.OC4IP1
#define _OC4IP2 IPC6bits.OC4IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _T5IP IPC7bits.T5IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _T5IP0 IPC7bits.T5IP0
#define _T5IP1 IPC7bits.T5IP1
#define _T5IP2 IPC7bits.T5IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define _SPI2EIP IPC8bits.SPI2EIP
#define _SPI2IP IPC8bits.SPI2IP
#define _C1RXIP IPC8bits.C1RXIP
#define _C1IP IPC8bits.C1IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2
#define _C1RXIP0 IPC8bits.C1RXIP0
#define _C1RXIP1 IPC8bits.C1RXIP1
#define _C1RXIP2 IPC8bits.C1RXIP2
#define _C1IP0 IPC8bits.C1IP0
#define _C1IP1 IPC8bits.C1IP1
#define _C1IP2 IPC8bits.C1IP2

/* IPC9 */
#define _DMA3IP IPC9bits.DMA3IP
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC5IP IPC9bits.IC5IP
#define _DMA3IP0 IPC9bits.DMA3IP0
#define _DMA3IP1 IPC9bits.DMA3IP1
#define _DMA3IP2 IPC9bits.DMA3IP2
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2
#define _IC5IP0 IPC9bits.IC5IP0
#define _IC5IP1 IPC9bits.IC5IP1
#define _IC5IP2 IPC9bits.IC5IP2

/* IPC10 */
#define _IC6IP IPC10bits.IC6IP
#define _OC5IP IPC10bits.OC5IP
#define _OC6IP IPC10bits.OC6IP
#define _OC7IP IPC10bits.OC7IP
#define _IC6IP0 IPC10bits.IC6IP0
#define _IC6IP1 IPC10bits.IC6IP1
#define _IC6IP2 IPC10bits.IC6IP2
#define _OC5IP0 IPC10bits.OC5IP0
#define _OC5IP1 IPC10bits.OC5IP1
#define _OC5IP2 IPC10bits.OC5IP2
#define _OC6IP0 IPC10bits.OC6IP0
#define _OC6IP1 IPC10bits.OC6IP1
#define _OC6IP2 IPC10bits.OC6IP2
#define _OC7IP0 IPC10bits.OC7IP0
#define _OC7IP1 IPC10bits.OC7IP1
#define _OC7IP2 IPC10bits.OC7IP2

/* IPC11 */
#define _OC8IP IPC11bits.OC8IP
#define _DMA4IP IPC11bits.DMA4IP
#define _T6IP IPC11bits.T6IP
#define _OC8IP0 IPC11bits.OC8IP0
#define _OC8IP1 IPC11bits.OC8IP1
#define _OC8IP2 IPC11bits.OC8IP2
#define _DMA4IP0 IPC11bits.DMA4IP0
#define _DMA4IP1 IPC11bits.DMA4IP1
#define _DMA4IP2 IPC11bits.DMA4IP2
#define _T6IP0 IPC11bits.T6IP0
#define _T6IP1 IPC11bits.T6IP1
#define _T6IP2 IPC11bits.T6IP2

/* IPC12 */
#define _T7IP IPC12bits.T7IP
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _T8IP IPC12bits.T8IP
#define _T7IP0 IPC12bits.T7IP0
#define _T7IP1 IPC12bits.T7IP1
#define _T7IP2 IPC12bits.T7IP2
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2
#define _T8IP0 IPC12bits.T8IP0
#define _T8IP1 IPC12bits.T8IP1
#define _T8IP2 IPC12bits.T8IP2

/* IPC13 */
#define _T9IP IPC13bits.T9IP
#define _INT3IP IPC13bits.INT3IP
#define _INT4IP IPC13bits.INT4IP
#define _C2RXIP IPC13bits.C2RXIP
#define _T9IP0 IPC13bits.T9IP0
#define _T9IP1 IPC13bits.T9IP1
#define _T9IP2 IPC13bits.T9IP2
#define _INT3IP0 IPC13bits.INT3IP0
#define _INT3IP1 IPC13bits.INT3IP1
#define _INT3IP2 IPC13bits.INT3IP2
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2
#define _C2RXIP0 IPC13bits.C2RXIP0
#define _C2RXIP1 IPC13bits.C2RXIP1
#define _C2RXIP2 IPC13bits.C2RXIP2

/* IPC14 */
#define _C2IP IPC14bits.C2IP
#define _DCIEIP IPC14bits.DCIEIP
#define _C2IP0 IPC14bits.C2IP0
#define _C2IP1 IPC14bits.C2IP1
#define _C2IP2 IPC14bits.C2IP2
#define _DCIEIP0 IPC14bits.DCIEIP0
#define _DCIEIP1 IPC14bits.DCIEIP1
#define _DCIEIP2 IPC14bits.DCIEIP2

/* IPC15 */
#define _DCIIP IPC15bits.DCIIP
#define _DMA5IP IPC15bits.DMA5IP
#define _DCIIP0 IPC15bits.DCIIP0
#define _DCIIP1 IPC15bits.DCIIP1
#define _DCIIP2 IPC15bits.DCIIP2
#define _DMA5IP0 IPC15bits.DMA5IP0
#define _DMA5IP1 IPC15bits.DMA5IP1
#define _DMA5IP2 IPC15bits.DMA5IP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2

/* IPC17 */
#define _DMA6IP IPC17bits.DMA6IP
#define _DMA7IP IPC17bits.DMA7IP
#define _C1TXIP IPC17bits.C1TXIP
#define _C2TXIP IPC17bits.C2TXIP
#define _DMA6IP0 IPC17bits.DMA6IP0
#define _DMA6IP1 IPC17bits.DMA6IP1
#define _DMA6IP2 IPC17bits.DMA6IP2
#define _DMA7IP0 IPC17bits.DMA7IP0
#define _DMA7IP1 IPC17bits.DMA7IP1
#define _DMA7IP2 IPC17bits.DMA7IP2
#define _C1TXIP0 IPC17bits.C1TXIP0
#define _C1TXIP1 IPC17bits.C1TXIP1
#define _C1TXIP2 IPC17bits.C1TXIP2
#define _C2TXIP0 IPC17bits.C2TXIP0
#define _C2TXIP1 IPC17bits.C2TXIP1
#define _C2TXIP2 IPC17bits.C2TXIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _TMODE INTTREGbits.TMODE
#define _IRQTOCPU INTTREGbits.IRQTOCPU
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* T1CON */
#define _TSYNC T1CONbits.TSYNC

/* DCICON1 */
#define _COFSM DCICON1bits.COFSM
#define _DJST DCICON1bits.DJST
#define _CSDOM DCICON1bits.CSDOM
#define _UNFM DCICON1bits.UNFM
#define _COFSD DCICON1bits.COFSD
#define _CSCKE DCICON1bits.CSCKE
#define _CSCKD DCICON1bits.CSCKD
#define _DLOOP DCICON1bits.DLOOP
#define _DCISIDL DCICON1bits.DCISIDL
#define _DCIEN DCICON1bits.DCIEN
#define _COFSM0 DCICON1bits.COFSM0
#define _COFSM1 DCICON1bits.COFSM1

/* DCICON2 */
#define _WS DCICON2bits.WS
#define _COFSG DCICON2bits.COFSG
#define _BLEN DCICON2bits.BLEN
#define _WS0 DCICON2bits.WS0
#define _WS1 DCICON2bits.WS1
#define _WS2 DCICON2bits.WS2
#define _WS3 DCICON2bits.WS3
#define _COFSG0 DCICON2bits.COFSG0
#define _COFSG1 DCICON2bits.COFSG1
#define _COFSG2 DCICON2bits.COFSG2
#define _COFSG3 DCICON2bits.COFSG3
#define _BLEN0 DCICON2bits.BLEN0
#define _BLEN1 DCICON2bits.BLEN1

/* DCICON3 */
#define _BCG DCICON3bits.BCG

/* DCISTAT */
#define _TMPTY DCISTATbits.TMPTY
#define _TUNF DCISTATbits.TUNF
#define _RFUL DCISTATbits.RFUL
#define _ROV DCISTATbits.ROV
#define _SLOT DCISTATbits.SLOT
#define _SLOT0 DCISTATbits.SLOT0
#define _SLOT1 DCISTATbits.SLOT1
#define _SLOT2 DCISTATbits.SLOT2
#define _SLOT3 DCISTATbits.SLOT3

/* TSCON */
#define _TSE0 TSCONbits.TSE0
#define _TSE1 TSCONbits.TSE1
#define _TSE2 TSCONbits.TSE2
#define _TSE3 TSCONbits.TSE3
#define _TSE4 TSCONbits.TSE4
#define _TSE5 TSCONbits.TSE5
#define _TSE6 TSCONbits.TSE6
#define _TSE7 TSCONbits.TSE7
#define _TSE8 TSCONbits.TSE8
#define _TSE9 TSCONbits.TSE9
#define _TSE10 TSCONbits.TSE10
#define _TSE11 TSCONbits.TSE11
#define _TSE12 TSCONbits.TSE12
#define _TSE13 TSCONbits.TSE13
#define _TSE14 TSCONbits.TSE14
#define _TSE15 TSCONbits.TSE15

/* RSCON */
#define _RSE0 RSCONbits.RSE0
#define _RSE1 RSCONbits.RSE1
#define _RSE2 RSCONbits.RSE2
#define _RSE3 RSCONbits.RSE3
#define _RSE4 RSCONbits.RSE4
#define _RSE5 RSCONbits.RSE5
#define _RSE6 RSCONbits.RSE6
#define _RSE7 RSCONbits.RSE7
#define _RSE8 RSCONbits.RSE8
#define _RSE9 RSCONbits.RSE9
#define _RSE10 RSCONbits.RSE10
#define _RSE11 RSCONbits.RSE11
#define _RSE12 RSCONbits.RSE12
#define _RSE13 RSCONbits.RSE13
#define _RSE14 RSCONbits.RSE14
#define _RSE15 RSCONbits.RSE15

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA5 TRISAbits.TRISA5
#define _TRISA6 TRISAbits.TRISA6
#define _TRISA7 TRISAbits.TRISA7
#define _TRISA9 TRISAbits.TRISA9
#define _TRISA10 TRISAbits.TRISA10
#define _TRISA12 TRISAbits.TRISA12
#define _TRISA13 TRISAbits.TRISA13
#define _TRISA14 TRISAbits.TRISA14
#define _TRISA15 TRISAbits.TRISA15

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA6 PORTAbits.RA6
#define _RA7 PORTAbits.RA7
#define _RA9 PORTAbits.RA9
#define _RA10 PORTAbits.RA10
#define _RA12 PORTAbits.RA12
#define _RA13 PORTAbits.RA13
#define _RA14 PORTAbits.RA14
#define _RA15 PORTAbits.RA15

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA5 LATAbits.LATA5
#define _LATA6 LATAbits.LATA6
#define _LATA7 LATAbits.LATA7
#define _LATA9 LATAbits.LATA9
#define _LATA10 LATAbits.LATA10
#define _LATA12 LATAbits.LATA12
#define _LATA13 LATAbits.LATA13
#define _LATA14 LATAbits.LATA14
#define _LATA15 LATAbits.LATA15

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* TRISC */
#define _TRISC1 TRISCbits.TRISC1
#define _TRISC2 TRISCbits.TRISC2
#define _TRISC3 TRISCbits.TRISC3
#define _TRISC4 TRISCbits.TRISC4
#define _TRISC12 TRISCbits.TRISC12
#define _TRISC13 TRISCbits.TRISC13
#define _TRISC14 TRISCbits.TRISC14
#define _TRISC15 TRISCbits.TRISC15

/* PORTC */
#define _RC1 PORTCbits.RC1
#define _RC2 PORTCbits.RC2
#define _RC3 PORTCbits.RC3
#define _RC4 PORTCbits.RC4
#define _RC12 PORTCbits.RC12
#define _RC13 PORTCbits.RC13
#define _RC14 PORTCbits.RC14
#define _RC15 PORTCbits.RC15

/* LATC */
#define _LATC1 LATCbits.LATC1
#define _LATC2 LATCbits.LATC2
#define _LATC3 LATCbits.LATC3
#define _LATC4 LATCbits.LATC4
#define _LATC12 LATCbits.LATC12
#define _LATC13 LATCbits.LATC13
#define _LATC14 LATCbits.LATC14
#define _LATC15 LATCbits.LATC15

/* TRISD */
#define _TRISD0 TRISDbits.TRISD0
#define _TRISD1 TRISDbits.TRISD1
#define _TRISD2 TRISDbits.TRISD2
#define _TRISD3 TRISDbits.TRISD3
#define _TRISD4 TRISDbits.TRISD4
#define _TRISD5 TRISDbits.TRISD5
#define _TRISD6 TRISDbits.TRISD6
#define _TRISD7 TRISDbits.TRISD7
#define _TRISD8 TRISDbits.TRISD8
#define _TRISD9 TRISDbits.TRISD9
#define _TRISD10 TRISDbits.TRISD10
#define _TRISD11 TRISDbits.TRISD11
#define _TRISD12 TRISDbits.TRISD12
#define _TRISD13 TRISDbits.TRISD13
#define _TRISD14 TRISDbits.TRISD14
#define _TRISD15 TRISDbits.TRISD15

/* PORTD */
#define _RD0 PORTDbits.RD0
#define _RD1 PORTDbits.RD1
#define _RD2 PORTDbits.RD2
#define _RD3 PORTDbits.RD3
#define _RD4 PORTDbits.RD4
#define _RD5 PORTDbits.RD5
#define _RD6 PORTDbits.RD6
#define _RD7 PORTDbits.RD7
#define _RD8 PORTDbits.RD8
#define _RD9 PORTDbits.RD9
#define _RD10 PORTDbits.RD10
#define _RD11 PORTDbits.RD11
#define _RD12 PORTDbits.RD12
#define _RD13 PORTDbits.RD13
#define _RD14 PORTDbits.RD14
#define _RD15 PORTDbits.RD15

/* LATD */
#define _LATD0 LATDbits.LATD0
#define _LATD1 LATDbits.LATD1
#define _LATD2 LATDbits.LATD2
#define _LATD3 LATDbits.LATD3
#define _LATD4 LATDbits.LATD4
#define _LATD5 LATDbits.LATD5
#define _LATD6 LATDbits.LATD6
#define _LATD7 LATDbits.LATD7
#define _LATD8 LATDbits.LATD8
#define _LATD9 LATDbits.LATD9
#define _LATD10 LATDbits.LATD10
#define _LATD11 LATDbits.LATD11
#define _LATD12 LATDbits.LATD12
#define _LATD13 LATDbits.LATD13
#define _LATD14 LATDbits.LATD14
#define _LATD15 LATDbits.LATD15

/* TRISE */
#define _TRISE0 TRISEbits.TRISE0
#define _TRISE1 TRISEbits.TRISE1
#define _TRISE2 TRISEbits.TRISE2
#define _TRISE3 TRISEbits.TRISE3
#define _TRISE4 TRISEbits.TRISE4
#define _TRISE5 TRISEbits.TRISE5
#define _TRISE6 TRISEbits.TRISE6
#define _TRISE7 TRISEbits.TRISE7

/* PORTE */
#define _RE0 PORTEbits.RE0
#define _RE1 PORTEbits.RE1
#define _RE2 PORTEbits.RE2
#define _RE3 PORTEbits.RE3
#define _RE4 PORTEbits.RE4
#define _RE5 PORTEbits.RE5
#define _RE6 PORTEbits.RE6
#define _RE7 PORTEbits.RE7

/* LATE */
#define _LATE0 LATEbits.LATE0
#define _LATE1 LATEbits.LATE1
#define _LATE2 LATEbits.LATE2
#define _LATE3 LATEbits.LATE3
#define _LATE4 LATEbits.LATE4
#define _LATE5 LATEbits.LATE5
#define _LATE6 LATEbits.LATE6
#define _LATE7 LATEbits.LATE7

/* TRISF */
#define _TRISF0 TRISFbits.TRISF0
#define _TRISF1 TRISFbits.TRISF1
#define _TRISF2 TRISFbits.TRISF2
#define _TRISF3 TRISFbits.TRISF3
#define _TRISF4 TRISFbits.TRISF4
#define _TRISF5 TRISFbits.TRISF5
#define _TRISF6 TRISFbits.TRISF6
#define _TRISF7 TRISFbits.TRISF7
#define _TRISF8 TRISFbits.TRISF8
#define _TRISF12 TRISFbits.TRISF12
#define _TRISF13 TRISFbits.TRISF13

/* PORTF */
#define _RF0 PORTFbits.RF0
#define _RF1 PORTFbits.RF1
#define _RF2 PORTFbits.RF2
#define _RF3 PORTFbits.RF3
#define _RF4 PORTFbits.RF4
#define _RF5 PORTFbits.RF5
#define _RF6 PORTFbits.RF6
#define _RF7 PORTFbits.RF7
#define _RF8 PORTFbits.RF8
#define _RF12 PORTFbits.RF12
#define _RF13 PORTFbits.RF13

/* LATF */
#define _LATF0 LATFbits.LATF0
#define _LATF1 LATFbits.LATF1
#define _LATF2 LATFbits.LATF2
#define _LATF3 LATFbits.LATF3
#define _LATF4 LATFbits.LATF4
#define _LATF5 LATFbits.LATF5
#define _LATF6 LATFbits.LATF6
#define _LATF7 LATFbits.LATF7
#define _LATF8 LATFbits.LATF8
#define _LATF12 LATFbits.LATF12
#define _LATF13 LATFbits.LATF13

/* TRISG */
#define _TRISG0 TRISGbits.TRISG0
#define _TRISG1 TRISGbits.TRISG1
#define _TRISG2 TRISGbits.TRISG2
#define _TRISG3 TRISGbits.TRISG3
#define _TRISG6 TRISGbits.TRISG6
#define _TRISG7 TRISGbits.TRISG7
#define _TRISG8 TRISGbits.TRISG8
#define _TRISG9 TRISGbits.TRISG9
#define _TRISG12 TRISGbits.TRISG12
#define _TRISG13 TRISGbits.TRISG13
#define _TRISG14 TRISGbits.TRISG14
#define _TRISG15 TRISGbits.TRISG15

/* PORTG */
#define _RG0 PORTGbits.RG0
#define _RG1 PORTGbits.RG1
#define _RG2 PORTGbits.RG2
#define _RG3 PORTGbits.RG3
#define _RG6 PORTGbits.RG6
#define _RG7 PORTGbits.RG7
#define _RG8 PORTGbits.RG8
#define _RG9 PORTGbits.RG9
#define _RG12 PORTGbits.RG12
#define _RG13 PORTGbits.RG13
#define _RG14 PORTGbits.RG14
#define _RG15 PORTGbits.RG15

/* LATG */
#define _LATG0 LATGbits.LATG0
#define _LATG1 LATGbits.LATG1
#define _LATG2 LATGbits.LATG2
#define _LATG3 LATGbits.LATG3
#define _LATG6 LATGbits.LATG6
#define _LATG7 LATGbits.LATG7
#define _LATG8 LATGbits.LATG8
#define _LATG9 LATGbits.LATG9
#define _LATG12 LATGbits.LATG12
#define _LATG13 LATGbits.LATG13
#define _LATG14 LATGbits.LATG14
#define _LATG15 LATGbits.LATG15

/* AD1PCFGH */
#define _PCFG16 AD1PCFGHbits.PCFG16
#define _PCFG17 AD1PCFGHbits.PCFG17
#define _PCFG18 AD1PCFGHbits.PCFG18
#define _PCFG19 AD1PCFGHbits.PCFG19
#define _PCFG20 AD1PCFGHbits.PCFG20
#define _PCFG21 AD1PCFGHbits.PCFG21
#define _PCFG22 AD1PCFGHbits.PCFG22
#define _PCFG23 AD1PCFGHbits.PCFG23
#define _PCFG24 AD1PCFGHbits.PCFG24
#define _PCFG25 AD1PCFGHbits.PCFG25
#define _PCFG26 AD1PCFGHbits.PCFG26
#define _PCFG27 AD1PCFGHbits.PCFG27
#define _PCFG28 AD1PCFGHbits.PCFG28
#define _PCFG29 AD1PCFGHbits.PCFG29
#define _PCFG30 AD1PCFGHbits.PCFG30
#define _PCFG31 AD1PCFGHbits.PCFG31

/* AD1CSSH */
#define _CSS16 AD1CSSHbits.CSS16
#define _CSS17 AD1CSSHbits.CSS17
#define _CSS18 AD1CSSHbits.CSS18
#define _CSS19 AD1CSSHbits.CSS19
#define _CSS20 AD1CSSHbits.CSS20
#define _CSS21 AD1CSSHbits.CSS21
#define _CSS22 AD1CSSHbits.CSS22
#define _CSS23 AD1CSSHbits.CSS23
#define _CSS24 AD1CSSHbits.CSS24
#define _CSS25 AD1CSSHbits.CSS25
#define _CSS26 AD1CSSHbits.CSS26
#define _CSS27 AD1CSSHbits.CSS27
#define _CSS28 AD1CSSHbits.CSS28
#define _CSS29 AD1CSSHbits.CSS29
#define _CSS30 AD1CSSHbits.CSS30
#define _CSS31 AD1CSSHbits.CSS31

/* DMACS0 */
#define _XWCOL DMACS0bits.XWCOL
#define _PWCOL DMACS0bits.PWCOL
#define _XWCOL0 DMACS0bits.XWCOL0
#define _XWCOL1 DMACS0bits.XWCOL1
#define _XWCOL2 DMACS0bits.XWCOL2
#define _XWCOL3 DMACS0bits.XWCOL3
#define _XWCOL4 DMACS0bits.XWCOL4
#define _XWCOL5 DMACS0bits.XWCOL5
#define _XWCOL6 DMACS0bits.XWCOL6
#define _XWCOL7 DMACS0bits.XWCOL7
#define _PWCOL0 DMACS0bits.PWCOL0
#define _PWCOL1 DMACS0bits.PWCOL1
#define _PWCOL2 DMACS0bits.PWCOL2
#define _PWCOL3 DMACS0bits.PWCOL3
#define _PWCOL4 DMACS0bits.PWCOL4
#define _PWCOL5 DMACS0bits.PWCOL5
#define _PWCOL6 DMACS0bits.PWCOL6
#define _PWCOL7 DMACS0bits.PWCOL7

/* DMACS1 */
#define _PPST DMACS1bits.PPST
#define _LSTCH DMACS1bits.LSTCH
#define _PPST0 DMACS1bits.PPST0
#define _PPST1 DMACS1bits.PPST1
#define _PPST2 DMACS1bits.PPST2
#define _PPST3 DMACS1bits.PPST3
#define _PPST4 DMACS1bits.PPST4
#define _PPST5 DMACS1bits.PPST5
#define _PPST6 DMACS1bits.PPST6
#define _PPST7 DMACS1bits.PPST7
#define _LSTCH0 DMACS1bits.LSTCH0
#define _LSTCH1 DMACS1bits.LSTCH1
#define _LSTCH2 DMACS1bits.LSTCH2
#define _LSTCH3 DMACS1bits.LSTCH3

/* C1CTRL1 */
#define _CSIDL C1CTRL1bits.CSIDL

/* C1INTF */
#define _RXWAR C1INTFbits.RXWAR
#define _TXWAR C1INTFbits.TXWAR

/* C2CTRL1 */
#define _CANSIDL C2CTRL1bits.CANSIDL
#define _CANFRZ C2CTRL1bits.CANFRZ

/* C2INTF */
#define _RXWARN C2INTFbits.RXWARN
#define _TXWARN C2INTFbits.TXWARN

/* ODCA */
#define _ODCA0 ODCAbits.ODCA0
#define _ODCA1 ODCAbits.ODCA1
#define _ODCA2 ODCAbits.ODCA2
#define _ODCA3 ODCAbits.ODCA3
#define _ODCA4 ODCAbits.ODCA4
#define _ODCA5 ODCAbits.ODCA5
#define _ODCA12 ODCAbits.ODCA12
#define _ODCA13 ODCAbits.ODCA13
#define _ODCA14 ODCAbits.ODCA14
#define _ODCA15 ODCAbits.ODCA15

/* ODCD */
#define _ODCD0 ODCDbits.ODCD0
#define _ODCD1 ODCDbits.ODCD1
#define _ODCD2 ODCDbits.ODCD2
#define _ODCD3 ODCDbits.ODCD3
#define _ODCD4 ODCDbits.ODCD4
#define _ODCD5 ODCDbits.ODCD5
#define _ODCD6 ODCDbits.ODCD6
#define _ODCD7 ODCDbits.ODCD7
#define _ODCD8 ODCDbits.ODCD8
#define _ODCD9 ODCDbits.ODCD9
#define _ODCD10 ODCDbits.ODCD10
#define _ODCD11 ODCDbits.ODCD11
#define _ODCD12 ODCDbits.ODCD12
#define _ODCD13 ODCDbits.ODCD13
#define _ODCD14 ODCDbits.ODCD14
#define _ODCD15 ODCDbits.ODCD15

/* ODCF */
#define _ODCF0 ODCFbits.ODCF0
#define _ODCF1 ODCFbits.ODCF1
#define _ODCF2 ODCFbits.ODCF2
#define _ODCF3 ODCFbits.ODCF3
#define _ODCF4 ODCFbits.ODCF4
#define _ODCF5 ODCFbits.ODCF5
#define _ODCF6 ODCFbits.ODCF6
#define _ODCF7 ODCFbits.ODCF7
#define _ODCF8 ODCFbits.ODCF8
#define _ODCF12 ODCFbits.ODCF12
#define _ODCF13 ODCFbits.ODCF13

/* ODCG */
#define _ODCG0 ODCGbits.ODCG0
#define _ODCG1 ODCGbits.ODCG1
#define _ODCG2 ODCGbits.ODCG2
#define _ODCG3 ODCGbits.ODCG3
#define _ODCG6 ODCGbits.ODCG6
#define _ODCG7 ODCGbits.ODCG7
#define _ODCG8 ODCGbits.ODCG8
#define _ODCG9 ODCGbits.ODCG9
#define _ODCG12 ODCGbits.ODCG12
#define _ODCG13 ODCGbits.ODCG13
#define _ODCG14 ODCGbits.ODCG14
#define _ODCG15 ODCGbits.ODCG15

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _VREGS RCONbits.VREGS
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _PLLPRE CLKDIVbits.PLLPRE
#define _PLLPOST CLKDIVbits.PLLPOST
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _PLLPRE0 CLKDIVbits.PLLPRE0
#define _PLLPRE1 CLKDIVbits.PLLPRE1
#define _PLLPRE2 CLKDIVbits.PLLPRE2
#define _PLLPRE3 CLKDIVbits.PLLPRE3
#define _PLLPRE4 CLKDIVbits.PLLPRE4
#define _PLLPOST0 CLKDIVbits.PLLPOST0
#define _PLLPOST1 CLKDIVbits.PLLPOST1
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define _PLLDIV PLLFBDbits.PLLDIV
#define _PLLDIV0 PLLFBDbits.PLLDIV0
#define _PLLDIV1 PLLFBDbits.PLLDIV1
#define _PLLDIV2 PLLFBDbits.PLLDIV2
#define _PLLDIV3 PLLFBDbits.PLLDIV3
#define _PLLDIV4 PLLFBDbits.PLLDIV4
#define _PLLDIV5 PLLFBDbits.PLLDIV5
#define _PLLDIV6 PLLFBDbits.PLLDIV6
#define _PLLDIV7 PLLFBDbits.PLLDIV7
#define _PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* BSRAM */
#define _RL_BSR BSRAMbits.RL_BSR
#define _IR_BSR BSRAMbits.IR_BSR
#define _IW_BSR BSRAMbits.IW_BSR

/* SSRAM */
#define _RL_SSR SSRAMbits.RL_SSR
#define _IR_SSR SSRAMbits.IR_SSR
#define _IW_SSR SSRAMbits.IW_SSR

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* PMD1 */
#define _AD1MD PMD1bits.AD1MD
#define _C1MD PMD1bits.C1MD
#define _C2MD PMD1bits.C2MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _DCIMD PMD1bits.DCIMD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _T5MD PMD1bits.T5MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _OC3MD PMD2bits.OC3MD
#define _OC4MD PMD2bits.OC4MD
#define _OC5MD PMD2bits.OC5MD
#define _OC6MD PMD2bits.OC6MD
#define _OC7MD PMD2bits.OC7MD
#define _OC8MD PMD2bits.OC8MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD
#define _IC5MD PMD2bits.IC5MD
#define _IC6MD PMD2bits.IC6MD
#define _IC7MD PMD2bits.IC7MD
#define _IC8MD PMD2bits.IC8MD

/* PMD3 */
#define _AD2MD PMD3bits.AD2MD
#define _I2C2MD PMD3bits.I2C2MD
#define _T6MD PMD3bits.T6MD
#define _T7MD PMD3bits.T7MD
#define _T8MD PMD3bits.T8MD
#define _T9MD PMD3bits.T9MD


/* ---------------------------------------------------------- */
/* Some useful macros for inline assembly stuff               */
/* ---------------------------------------------------------- */

#define Nop()    {__asm__ volatile ("nop");}
#define ClrWdt() {__asm__ volatile ("clrwdt");}
#define Sleep()  {__asm__ volatile ("pwrsav #0");}
#define Idle()   {__asm__ volatile ("pwrsav #1");}

#define _XBSS(N)    __attribute__((space(xmemory),aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),aligned(N)))

#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))


#define SET_CPU_IPL(ipl) {       \
  int DISI_save;                 \
                                 \
  DISI_save = DISICNT;           \
  asm volatile ("disi #0x3FFF"); \
  SRbits.IPL = ipl;              \
  DISICNT = DISI_save; } (void) 0;

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)


#define _FBS(x) __attribute__((section("__FBS.sec,code"))) int _FBS = (x);


#define RBS_LARGE_RAM        0xFF3F
#define RBS_MEDIUM_RAM       0xFF7F
#define RBS_SMALL_RAM        0xFFBF
#define RBS_NO_RAM           0xFFFF

#define BSS_LARGE_FLASH_HIGH 0xFFF1
#define BSS_MEDIUM_FLASH_HIGH 0xFFF3
#define BSS_SMALL_FLASH_HIGH 0xFFF5
#define BSS_LARGE_FLASH_STD  0xFFF9
#define BSS_MEDIUM_FLASH_STD 0xFFFB
#define BSS_SMALL_FLASH_STD  0xFFFD
#define BSS_NO_FLASH         0xFFFF

#define BWRP_WRPROTECT_ON    0xFFFE
#define BWRP_WRPROTECT_OFF   0xFFFF

/* Register FSS (0xf80002)                               */

#define _FSS(x) __attribute__((section("__FSS.sec,code"))) int _FSS = (x);


#define RSS_LARGE_RAM        0xFF3F
#define RSS_MEDIUM_RAM       0xFF7F
#define RSS_SMALL_RAM        0xFFBF
#define RSS_NO_RAM           0xFFFF

#define SSS_LARGE_FLASH_HIGH 0xFFF1
#define SSS_MEDIUM_FLASH_HIGH 0xFFF3
#define SSS_SMALL_FLASH_HIGH 0xFFF5
#define SSS_LARGE_FLASH_STD  0xFFF9
#define SSS_MEDIUM_FLASH_STD 0xFFFB
#define SSS_SMALL_FLASH_STD  0xFFFD
#define SSS_NO_FLASH         0xFFFF

#define SWRP_WRPROTECT_ON    0xFFFE
#define SWRP_WRPROTECT_OFF   0xFFFF



#define _FGS(x) __attribute__((section("__FGS.sec,code"))) int _FGS = (x);

#define GSS_HIGH             0xFFFB
#define GSS_STD              0xFFFD
#define GSS_OFF              0xFFFF

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

/* Register FOSCSEL (0xf80006)                               */

#define _FOSCSEL(x) __attribute__((section("__FOSCSEL.sec,code"))) int _FOSCSEL = (x);


#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_SOSC           0xFFFC
#define FNOSC_LPRC           0xFFFD
#define FNOSC_FRCDIV16       0xFFFE
#define FNOSC_LPRCDIVN       0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

#define TEMP_ON              0xFFDF
#define TEMP_OFF             0xFFFF

/* Register FOSC (0xf80008)                               */

#define _FOSC(x) __attribute__((section("__FOSC.sec,code"))) int _FOSC = (x);


#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

/* Register FWDT (0xf8000a)                               */

#define _FWDT(x) __attribute__((section("__FWDT.sec,code"))) int _FWDT = (x);


#define FWDTEN_OFF           0xFF7F
#define FWDTEN_ON            0xFFFF

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

#define WDTPRE_PR32          0xFFEF
#define WDTPRE_PR128         0xFFFF

#define WDTPOST_PS1          0xFFF0
#define WDTPOST_PS2          0xFFF1
#define WDTPOST_PS4          0xFFF2
#define WDTPOST_PS8          0xFFF3
#define WDTPOST_PS16         0xFFF4
#define WDTPOST_PS32         0xFFF5
#define WDTPOST_PS64         0xFFF6
#define WDTPOST_PS128        0xFFF7
#define WDTPOST_PS256        0xFFF8
#define WDTPOST_PS512        0xFFF9
#define WDTPOST_PS1024       0xFFFA
#define WDTPOST_PS2048       0xFFFB
#define WDTPOST_PS4096       0xFFFC
#define WDTPOST_PS8192       0xFFFD
#define WDTPOST_PS16384      0xFFFE
#define WDTPOST_PS32768      0xFFFF

/* Register FPOR (0xf8000c)                               */

#define _FPOR(x) __attribute__((section("__FPOR.sec,code"))) int _FPOR = (x);


#define FPWRT_PWR1           0xFFF8
#define FPWRT_PWR2           0xFFF9
#define FPWRT_PWR4           0xFFFA
#define FPWRT_PWR8           0xFFFB
#define FPWRT_PWR16          0xFFFC
#define FPWRT_PWR32          0xFFFD
#define FPWRT_PWR64          0xFFFE
#define FPWRT_PWR128         0xFFFF

/* Register FUID0 (0xf80010)                               */

#define _FUID0(x) __attribute__((section("__FUID0.sec,code"))) int _FUID0 = (x);


/* Register FUID1 (0xf80012)                               */

#define _FUID1(x) __attribute__((section("__FUID1.sec,code"))) int _FUID1 = (x);


#define _FUID2(x) __attribute__((section("__FUID2.sec,code"))) int _FUID2 = (x);


/* Register FUID3 (0xf80016)                               */

#define _FUID3(x) __attribute__((section("__FUID3.sec,code"))) int _FUID3 = (x);


#endif
