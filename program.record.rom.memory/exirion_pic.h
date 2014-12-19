OUTPUT_ARCH("33FJ256GP710")
EXTERN(__resetPRI)
EXTERN(__resetALT)


/*
** Memory Regions
*/
MEMORY
{
  data  (a!xr) : ORIGIN = 0x800,         LENGTH = 0x7800
  reset        : ORIGIN = 0x0,           LENGTH = 0x4
  ivt          : ORIGIN = 0x4,           LENGTH = 0xFC
  aivt         : ORIGIN = 0x104,         LENGTH = 0xFC
  program (xr) : ORIGIN = 0x200,         LENGTH = 0x2AA00
  FBS          : ORIGIN = 0xF80000,      LENGTH = 0x2
  FSS          : ORIGIN = 0xF80002,      LENGTH = 0x2
  FGS          : ORIGIN = 0xF80004,      LENGTH = 0x2
  FOSCSEL      : ORIGIN = 0xF80006,      LENGTH = 0x2
  FOSC         : ORIGIN = 0xF80008,      LENGTH = 0x2
  FWDT         : ORIGIN = 0xF8000A,      LENGTH = 0x2
  FPOR         : ORIGIN = 0xF8000C,      LENGTH = 0x2
  CONFIG3      : ORIGIN = 0xF8000E,      LENGTH = 0x2
  FUID0        : ORIGIN = 0xF80010,      LENGTH = 0x2
  FUID1        : ORIGIN = 0xF80012,      LENGTH = 0x2
  FUID2        : ORIGIN = 0xF80014,      LENGTH = 0x2
  FUID3        : ORIGIN = 0xF80016,      LENGTH = 0x2
}
__IVT_BASE  = 0x4;
__AIVT_BASE = 0x104;
__DATA_BASE = 0x800;
__YDATA_BASE = 0x4800;
__DMA_BASE = 0x7800;
__DMA_END = 0x7FFF;
__CODE_BASE = 0x200;


/*
** ==================== Section Map ======================
*/
SECTIONS
{
  /*
  ** ========== Program Memory ==========
  */


  /*
  ** Reset Instruction
  */
  .reset :
  {
        SHORT(ABSOLUTE(__reset));
        SHORT(0x04);
        SHORT((ABSOLUTE(__reset) >> 16) & 0x7F);
        SHORT(0);
  } >reset


  /*
  ** Interrupt Vector Tables
  **
  ** The primary and alternate tables are loaded
  ** here, between sections .reset and .text.
  ** Vector table source code appears below.
  */


  /*
  ** User Code and Library Code
  */
  .text __CODE_BASE :
  {
        *(.handle);
        *(.libc) *(.libm) *(.libdsp);  /* keep together in this order */
        *(.lib*);
        *(.text);
  } >program


  /*
  ** Configuration Words
  */
  __FBS :
  { *(__FBS.sec)    } >FBS
  __FSS :
  { *(__FSS.sec)    } >FSS
  __FGS :
  { *(__FGS.sec)    } >FGS
  __FOSCSEL :
  { *(__FOSCSEL.sec)    } >FOSCSEL
  __FOSC :
  { *(__FOSC.sec)    } >FOSC
  __FWDT :
  { *(__FWDT.sec)    } >FWDT
  __FPOR :
  { *(__FPOR.sec)    } >FPOR
  __FUID0 :
  { *(__FUID0.sec)    } >FUID0
  __FUID1 :
  { *(__FUID1.sec)    } >FUID1
  __FUID2 :
  { *(__FUID2.sec)    } >FUID2
  __FUID3 :
  { *(__FUID3.sec)    } >FUID3


  /*
  ** =========== Data Memory ===========
  */


  /*
  ** ICD Debug Exec
  **
  ** This section provides optional storage for
  ** the ICD2 debugger. Define a global symbol
  ** named __ICD2RAM to enable ICD2. This section
  ** must be loaded at data address 0x800.
  */
  .icd __DATA_BASE (NOLOAD):
  {
    . += (DEFINED (__ICD2RAM) ? 0x50 : 0 );
  } > data

  /*
  ** ========== Debug Info ==============
  */

  .comment        0 : { *(.comment) }

  /*
  ** DWARF-2
  */
  .debug_info     0 : { *(.debug_info) *(.gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  .debug_ranges   0 : { *(.debug_ranges) }
  .debug_aranges  0 : { *(.debug_aranges) }

} /* SECTIONS */

/*
** ================= End of Section Map ================
*/

/*
** Section Map for Interrupt Vector Tables
*/
SECTIONS
{

/*
** Interrupt Vector Table
*/
.ivt __IVT_BASE :
  {
    LONG( DEFINED(__ReservedTrap0)    ? ABSOLUTE(__ReservedTrap0)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OscillatorFail)    ? ABSOLUTE(__OscillatorFail)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__AddressError)    ? ABSOLUTE(__AddressError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__StackError)    ? ABSOLUTE(__StackError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MathError)    ? ABSOLUTE(__MathError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMACError)    ? ABSOLUTE(__DMACError)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ReservedTrap6)    ? ABSOLUTE(__ReservedTrap6)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ReservedTrap7)    ? ABSOLUTE(__ReservedTrap7)    :
         ABSOLUTE(__DefaultInterrupt));

    LONG( DEFINED(__INT0Interrupt)    ? ABSOLUTE(__INT0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC1Interrupt)    ? ABSOLUTE(__IC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC1Interrupt)    ? ABSOLUTE(__OC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T1Interrupt)    ? ABSOLUTE(__T1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA0Interrupt)    ? ABSOLUTE(__DMA0Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC2Interrupt)    ? ABSOLUTE(__IC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC2Interrupt)    ? ABSOLUTE(__OC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T2Interrupt)    ? ABSOLUTE(__T2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T3Interrupt)    ? ABSOLUTE(__T3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1ErrInterrupt)    ? ABSOLUTE(__SPI1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI1Interrupt)    ? ABSOLUTE(__SPI1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1RXInterrupt)    ? ABSOLUTE(__U1RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1TXInterrupt)    ? ABSOLUTE(__U1TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADC1Interrupt)    ? ABSOLUTE(__ADC1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA1Interrupt)    ? ABSOLUTE(__DMA1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt15)    ? ABSOLUTE(__Interrupt15)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C1Interrupt)    ? ABSOLUTE(__SI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C1Interrupt)    ? ABSOLUTE(__MI2C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt18)    ? ABSOLUTE(__Interrupt18)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__CNInterrupt)    ? ABSOLUTE(__CNInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT1Interrupt)    ? ABSOLUTE(__INT1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__ADC2Interrupt)    ? ABSOLUTE(__ADC2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC7Interrupt)    ? ABSOLUTE(__IC7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC8Interrupt)    ? ABSOLUTE(__IC8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA2Interrupt)    ? ABSOLUTE(__DMA2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC3Interrupt)    ? ABSOLUTE(__OC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC4Interrupt)    ? ABSOLUTE(__OC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T4Interrupt)    ? ABSOLUTE(__T4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T5Interrupt)    ? ABSOLUTE(__T5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT2Interrupt)    ? ABSOLUTE(__INT2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2RXInterrupt)    ? ABSOLUTE(__U2RXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2TXInterrupt)    ? ABSOLUTE(__U2TXInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2ErrInterrupt)    ? ABSOLUTE(__SPI2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SPI2Interrupt)    ? ABSOLUTE(__SPI2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1RxRdyInterrupt)    ? ABSOLUTE(__C1RxRdyInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1Interrupt)    ? ABSOLUTE(__C1Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA3Interrupt)    ? ABSOLUTE(__DMA3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC3Interrupt)    ? ABSOLUTE(__IC3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC4Interrupt)    ? ABSOLUTE(__IC4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC5Interrupt)    ? ABSOLUTE(__IC5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__IC6Interrupt)    ? ABSOLUTE(__IC6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC5Interrupt)    ? ABSOLUTE(__OC5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC6Interrupt)    ? ABSOLUTE(__OC6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC7Interrupt)    ? ABSOLUTE(__OC7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__OC8Interrupt)    ? ABSOLUTE(__OC8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt45)    ? ABSOLUTE(__Interrupt45)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA4Interrupt)    ? ABSOLUTE(__DMA4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T6Interrupt)    ? ABSOLUTE(__T6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T7Interrupt)    ? ABSOLUTE(__T7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__SI2C2Interrupt)    ? ABSOLUTE(__SI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__MI2C2Interrupt)    ? ABSOLUTE(__MI2C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T8Interrupt)    ? ABSOLUTE(__T8Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__T9Interrupt)    ? ABSOLUTE(__T9Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT3Interrupt)    ? ABSOLUTE(__INT3Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__INT4Interrupt)    ? ABSOLUTE(__INT4Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2RxRdyInterrupt)    ? ABSOLUTE(__C2RxRdyInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2Interrupt)    ? ABSOLUTE(__C2Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt57)    ? ABSOLUTE(__Interrupt57)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt58)    ? ABSOLUTE(__Interrupt58)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DCIErrInterrupt)    ? ABSOLUTE(__DCIErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DCIInterrupt)    ? ABSOLUTE(__DCIInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA5Interrupt)    ? ABSOLUTE(__DMA5Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt62)    ? ABSOLUTE(__Interrupt62)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt63)    ? ABSOLUTE(__Interrupt63)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt64)    ? ABSOLUTE(__Interrupt64)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U1ErrInterrupt)    ? ABSOLUTE(__U1ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__U2ErrInterrupt)    ? ABSOLUTE(__U2ErrInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt68)    ? ABSOLUTE(__Interrupt68)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA6Interrupt)    ? ABSOLUTE(__DMA6Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__DMA7Interrupt)    ? ABSOLUTE(__DMA7Interrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C1TxReqInterrupt)    ? ABSOLUTE(__C1TxReqInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__C2TxReqInterrupt)    ? ABSOLUTE(__C2TxReqInterrupt)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt72)    ? ABSOLUTE(__Interrupt72)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt73)    ? ABSOLUTE(__Interrupt73)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt74)    ? ABSOLUTE(__Interrupt74)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt75)    ? ABSOLUTE(__Interrupt75)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt76)    ? ABSOLUTE(__Interrupt76)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt77)    ? ABSOLUTE(__Interrupt77)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt78)    ? ABSOLUTE(__Interrupt78)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt79)    ? ABSOLUTE(__Interrupt79)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt80)    ? ABSOLUTE(__Interrupt80)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt81)    ? ABSOLUTE(__Interrupt81)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt82)    ? ABSOLUTE(__Interrupt82)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt83)    ? ABSOLUTE(__Interrupt83)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt84)    ? ABSOLUTE(__Interrupt84)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt85)    ? ABSOLUTE(__Interrupt85)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt86)    ? ABSOLUTE(__Interrupt86)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt87)    ? ABSOLUTE(__Interrupt87)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt88)    ? ABSOLUTE(__Interrupt88)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt89)    ? ABSOLUTE(__Interrupt89)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt90)    ? ABSOLUTE(__Interrupt90)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt91)    ? ABSOLUTE(__Interrupt91)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt92)    ? ABSOLUTE(__Interrupt92)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt93)    ? ABSOLUTE(__Interrupt93)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt94)    ? ABSOLUTE(__Interrupt94)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt95)    ? ABSOLUTE(__Interrupt95)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt96)    ? ABSOLUTE(__Interrupt96)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt97)    ? ABSOLUTE(__Interrupt97)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt98)    ? ABSOLUTE(__Interrupt98)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt99)    ? ABSOLUTE(__Interrupt99)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt100)    ? ABSOLUTE(__Interrupt100)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt101)    ? ABSOLUTE(__Interrupt101)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt102)    ? ABSOLUTE(__Interrupt102)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt103)    ? ABSOLUTE(__Interrupt103)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt104)    ? ABSOLUTE(__Interrupt104)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt105)    ? ABSOLUTE(__Interrupt105)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt106)    ? ABSOLUTE(__Interrupt106)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt107)    ? ABSOLUTE(__Interrupt107)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt108)    ? ABSOLUTE(__Interrupt108)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt109)    ? ABSOLUTE(__Interrupt109)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt110)    ? ABSOLUTE(__Interrupt110)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt111)    ? ABSOLUTE(__Interrupt111)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt112)    ? ABSOLUTE(__Interrupt112)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt113)    ? ABSOLUTE(__Interrupt113)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt114)    ? ABSOLUTE(__Interrupt114)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt115)    ? ABSOLUTE(__Interrupt115)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt116)    ? ABSOLUTE(__Interrupt116)    :
         ABSOLUTE(__DefaultInterrupt));
    LONG( DEFINED(__Interrupt117)    ? ABSOLUTE(__Interrupt117)    :
         ABSOLUTE(__DefaultInterrupt));
  } >ivt


/*
** Alternate Interrupt Vector Table
*/
.aivt __AIVT_BASE :
  {
    LONG( DEFINED(__AltReservedTrap0)    ? ABSOLUTE(__AltReservedTrap0)    :
         (DEFINED(__ReservedTrap0)       ? ABSOLUTE(__ReservedTrap0)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOscillatorFail)    ? ABSOLUTE(__AltOscillatorFail)    :
         (DEFINED(__OscillatorFail)       ? ABSOLUTE(__OscillatorFail)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltAddressError)    ? ABSOLUTE(__AltAddressError)    :
         (DEFINED(__AddressError)       ? ABSOLUTE(__AddressError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltStackError)    ? ABSOLUTE(__AltStackError)    :
         (DEFINED(__StackError)       ? ABSOLUTE(__StackError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMathError)    ? ABSOLUTE(__AltMathError)    :
         (DEFINED(__MathError)       ? ABSOLUTE(__MathError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMACError)    ? ABSOLUTE(__AltDMACError)    :
         (DEFINED(__DMACError)       ? ABSOLUTE(__DMACError)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltReservedTrap6)    ? ABSOLUTE(__AltReservedTrap6)    :
         (DEFINED(__ReservedTrap6)       ? ABSOLUTE(__ReservedTrap6)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltReservedTrap7)    ? ABSOLUTE(__AltReservedTrap7)    :
         (DEFINED(__ReservedTrap7)       ? ABSOLUTE(__ReservedTrap7)       :
         ABSOLUTE(__DefaultInterrupt)));

    LONG( DEFINED(__AltINT0Interrupt)    ? ABSOLUTE(__AltINT0Interrupt)    :
         (DEFINED(__INT0Interrupt)       ? ABSOLUTE(__INT0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC1Interrupt)    ? ABSOLUTE(__AltIC1Interrupt)    :
         (DEFINED(__IC1Interrupt)       ? ABSOLUTE(__IC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC1Interrupt)    ? ABSOLUTE(__AltOC1Interrupt)    :
         (DEFINED(__OC1Interrupt)       ? ABSOLUTE(__OC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT1Interrupt)    ? ABSOLUTE(__AltT1Interrupt)    :
         (DEFINED(__T1Interrupt)       ? ABSOLUTE(__T1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA0Interrupt)    ? ABSOLUTE(__AltDMA0Interrupt)    :
         (DEFINED(__DMA0Interrupt)       ? ABSOLUTE(__DMA0Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC2Interrupt)    ? ABSOLUTE(__AltIC2Interrupt)    :
         (DEFINED(__IC2Interrupt)       ? ABSOLUTE(__IC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC2Interrupt)    ? ABSOLUTE(__AltOC2Interrupt)    :
         (DEFINED(__OC2Interrupt)       ? ABSOLUTE(__OC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT2Interrupt)    ? ABSOLUTE(__AltT2Interrupt)    :
         (DEFINED(__T2Interrupt)       ? ABSOLUTE(__T2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT3Interrupt)    ? ABSOLUTE(__AltT3Interrupt)    :
         (DEFINED(__T3Interrupt)       ? ABSOLUTE(__T3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1ErrInterrupt)    ? ABSOLUTE(__AltSPI1ErrInterrupt)    :
         (DEFINED(__SPI1ErrInterrupt)       ? ABSOLUTE(__SPI1ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI1Interrupt)    ? ABSOLUTE(__AltSPI1Interrupt)    :
         (DEFINED(__SPI1Interrupt)       ? ABSOLUTE(__SPI1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1RXInterrupt)    ? ABSOLUTE(__AltU1RXInterrupt)    :
         (DEFINED(__U1RXInterrupt)       ? ABSOLUTE(__U1RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1TXInterrupt)    ? ABSOLUTE(__AltU1TXInterrupt)    :
         (DEFINED(__U1TXInterrupt)       ? ABSOLUTE(__U1TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADC1Interrupt)    ? ABSOLUTE(__AltADC1Interrupt)    :
         (DEFINED(__ADC1Interrupt)       ? ABSOLUTE(__ADC1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA1Interrupt)    ? ABSOLUTE(__AltDMA1Interrupt)    :
         (DEFINED(__DMA1Interrupt)       ? ABSOLUTE(__DMA1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt15)    ? ABSOLUTE(__AltInterrupt15)    :
         (DEFINED(__Interrupt15)       ? ABSOLUTE(__Interrupt15)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C1Interrupt)    ? ABSOLUTE(__AltSI2C1Interrupt)    :
         (DEFINED(__SI2C1Interrupt)       ? ABSOLUTE(__SI2C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C1Interrupt)    ? ABSOLUTE(__AltMI2C1Interrupt)    :
         (DEFINED(__MI2C1Interrupt)       ? ABSOLUTE(__MI2C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt18)    ? ABSOLUTE(__AltInterrupt18)    :
         (DEFINED(__Interrupt18)       ? ABSOLUTE(__Interrupt18)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltCNInterrupt)    ? ABSOLUTE(__AltCNInterrupt)    :
         (DEFINED(__CNInterrupt)       ? ABSOLUTE(__CNInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT1Interrupt)    ? ABSOLUTE(__AltINT1Interrupt)    :
         (DEFINED(__INT1Interrupt)       ? ABSOLUTE(__INT1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltADC2Interrupt)    ? ABSOLUTE(__AltADC2Interrupt)    :
         (DEFINED(__ADC2Interrupt)       ? ABSOLUTE(__ADC2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC7Interrupt)    ? ABSOLUTE(__AltIC7Interrupt)    :
         (DEFINED(__IC7Interrupt)       ? ABSOLUTE(__IC7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC8Interrupt)    ? ABSOLUTE(__AltIC8Interrupt)    :
         (DEFINED(__IC8Interrupt)       ? ABSOLUTE(__IC8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA2Interrupt)    ? ABSOLUTE(__AltDMA2Interrupt)    :
         (DEFINED(__DMA2Interrupt)       ? ABSOLUTE(__DMA2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC3Interrupt)    ? ABSOLUTE(__AltOC3Interrupt)    :
         (DEFINED(__OC3Interrupt)       ? ABSOLUTE(__OC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC4Interrupt)    ? ABSOLUTE(__AltOC4Interrupt)    :
         (DEFINED(__OC4Interrupt)       ? ABSOLUTE(__OC4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT4Interrupt)    ? ABSOLUTE(__AltT4Interrupt)    :
         (DEFINED(__T4Interrupt)       ? ABSOLUTE(__T4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT5Interrupt)    ? ABSOLUTE(__AltT5Interrupt)    :
         (DEFINED(__T5Interrupt)       ? ABSOLUTE(__T5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT2Interrupt)    ? ABSOLUTE(__AltINT2Interrupt)    :
         (DEFINED(__INT2Interrupt)       ? ABSOLUTE(__INT2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2RXInterrupt)    ? ABSOLUTE(__AltU2RXInterrupt)    :
         (DEFINED(__U2RXInterrupt)       ? ABSOLUTE(__U2RXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2TXInterrupt)    ? ABSOLUTE(__AltU2TXInterrupt)    :
         (DEFINED(__U2TXInterrupt)       ? ABSOLUTE(__U2TXInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2ErrInterrupt)    ? ABSOLUTE(__AltSPI2ErrInterrupt)    :
         (DEFINED(__SPI2ErrInterrupt)       ? ABSOLUTE(__SPI2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSPI2Interrupt)    ? ABSOLUTE(__AltSPI2Interrupt)    :
         (DEFINED(__SPI2Interrupt)       ? ABSOLUTE(__SPI2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1RxRdyInterrupt)    ? ABSOLUTE(__AltC1RxRdyInterrupt)    :
         (DEFINED(__C1RxRdyInterrupt)       ? ABSOLUTE(__C1RxRdyInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1Interrupt)    ? ABSOLUTE(__AltC1Interrupt)    :
         (DEFINED(__C1Interrupt)       ? ABSOLUTE(__C1Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA3Interrupt)    ? ABSOLUTE(__AltDMA3Interrupt)    :
         (DEFINED(__DMA3Interrupt)       ? ABSOLUTE(__DMA3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC3Interrupt)    ? ABSOLUTE(__AltIC3Interrupt)    :
         (DEFINED(__IC3Interrupt)       ? ABSOLUTE(__IC3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC4Interrupt)    ? ABSOLUTE(__AltIC4Interrupt)    :
         (DEFINED(__IC4Interrupt)       ? ABSOLUTE(__IC4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC5Interrupt)    ? ABSOLUTE(__AltIC5Interrupt)    :
         (DEFINED(__IC5Interrupt)       ? ABSOLUTE(__IC5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltIC6Interrupt)    ? ABSOLUTE(__AltIC6Interrupt)    :
         (DEFINED(__IC6Interrupt)       ? ABSOLUTE(__IC6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC5Interrupt)    ? ABSOLUTE(__AltOC5Interrupt)    :
         (DEFINED(__OC5Interrupt)       ? ABSOLUTE(__OC5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC6Interrupt)    ? ABSOLUTE(__AltOC6Interrupt)    :
         (DEFINED(__OC6Interrupt)       ? ABSOLUTE(__OC6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC7Interrupt)    ? ABSOLUTE(__AltOC7Interrupt)    :
         (DEFINED(__OC7Interrupt)       ? ABSOLUTE(__OC7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltOC8Interrupt)    ? ABSOLUTE(__AltOC8Interrupt)    :
         (DEFINED(__OC8Interrupt)       ? ABSOLUTE(__OC8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt45)    ? ABSOLUTE(__AltInterrupt45)    :
         (DEFINED(__Interrupt45)       ? ABSOLUTE(__Interrupt45)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA4Interrupt)    ? ABSOLUTE(__AltDMA4Interrupt)    :
         (DEFINED(__DMA4Interrupt)       ? ABSOLUTE(__DMA4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT6Interrupt)    ? ABSOLUTE(__AltT6Interrupt)    :
         (DEFINED(__T6Interrupt)       ? ABSOLUTE(__T6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT7Interrupt)    ? ABSOLUTE(__AltT7Interrupt)    :
         (DEFINED(__T7Interrupt)       ? ABSOLUTE(__T7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltSI2C2Interrupt)    ? ABSOLUTE(__AltSI2C2Interrupt)    :
         (DEFINED(__SI2C2Interrupt)       ? ABSOLUTE(__SI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltMI2C2Interrupt)    ? ABSOLUTE(__AltMI2C2Interrupt)    :
         (DEFINED(__MI2C2Interrupt)       ? ABSOLUTE(__MI2C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT8Interrupt)    ? ABSOLUTE(__AltT8Interrupt)    :
         (DEFINED(__T8Interrupt)       ? ABSOLUTE(__T8Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltT9Interrupt)    ? ABSOLUTE(__AltT9Interrupt)    :
         (DEFINED(__T9Interrupt)       ? ABSOLUTE(__T9Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT3Interrupt)    ? ABSOLUTE(__AltINT3Interrupt)    :
         (DEFINED(__INT3Interrupt)       ? ABSOLUTE(__INT3Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltINT4Interrupt)    ? ABSOLUTE(__AltINT4Interrupt)    :
         (DEFINED(__INT4Interrupt)       ? ABSOLUTE(__INT4Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2RxRdyInterrupt)    ? ABSOLUTE(__AltC2RxRdyInterrupt)    :
         (DEFINED(__C2RxRdyInterrupt)       ? ABSOLUTE(__C2RxRdyInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2Interrupt)    ? ABSOLUTE(__AltC2Interrupt)    :
         (DEFINED(__C2Interrupt)       ? ABSOLUTE(__C2Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt57)    ? ABSOLUTE(__AltInterrupt57)    :
         (DEFINED(__Interrupt57)       ? ABSOLUTE(__Interrupt57)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt58)    ? ABSOLUTE(__AltInterrupt58)    :
         (DEFINED(__Interrupt58)       ? ABSOLUTE(__Interrupt58)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDCIErrInterrupt)    ? ABSOLUTE(__AltDCIErrInterrupt)    :
         (DEFINED(__DCIErrInterrupt)       ? ABSOLUTE(__DCIErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDCIInterrupt)    ? ABSOLUTE(__AltDCIInterrupt)    :
         (DEFINED(__DCIInterrupt)       ? ABSOLUTE(__DCIInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA5Interrupt)    ? ABSOLUTE(__AltDMA5Interrupt)    :
         (DEFINED(__DMA5Interrupt)       ? ABSOLUTE(__DMA5Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt62)    ? ABSOLUTE(__AltInterrupt62)    :
         (DEFINED(__Interrupt62)       ? ABSOLUTE(__Interrupt62)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt63)    ? ABSOLUTE(__AltInterrupt63)    :
         (DEFINED(__Interrupt63)       ? ABSOLUTE(__Interrupt63)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt64)    ? ABSOLUTE(__AltInterrupt64)    :
         (DEFINED(__Interrupt64)       ? ABSOLUTE(__Interrupt64)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU1ErrInterrupt)    ? ABSOLUTE(__AltU1ErrInterrupt)    :
         (DEFINED(__U1ErrInterrupt)       ? ABSOLUTE(__U1ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltU2ErrInterrupt)    ? ABSOLUTE(__AltU2ErrInterrupt)    :
         (DEFINED(__U2ErrInterrupt)       ? ABSOLUTE(__U2ErrInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt68)    ? ABSOLUTE(__AltInterrupt68)    :
         (DEFINED(__Interrupt68)       ? ABSOLUTE(__Interrupt68)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA6Interrupt)    ? ABSOLUTE(__AltDMA6Interrupt)    :
         (DEFINED(__DMA6Interrupt)       ? ABSOLUTE(__DMA6Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltDMA7Interrupt)    ? ABSOLUTE(__AltDMA7Interrupt)    :
         (DEFINED(__DMA7Interrupt)       ? ABSOLUTE(__DMA7Interrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC1TxReqInterrupt)    ? ABSOLUTE(__AltC1TxReqInterrupt)    :
         (DEFINED(__C1TxReqInterrupt)       ? ABSOLUTE(__C1TxReqInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltC2TxReqInterrupt)    ? ABSOLUTE(__AltC2TxReqInterrupt)    :
         (DEFINED(__C2TxReqInterrupt)       ? ABSOLUTE(__C2TxReqInterrupt)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt72)    ? ABSOLUTE(__AltInterrupt72)    :
         (DEFINED(__Interrupt72)       ? ABSOLUTE(__Interrupt72)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt73)    ? ABSOLUTE(__AltInterrupt73)    :
         (DEFINED(__Interrupt73)       ? ABSOLUTE(__Interrupt73)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt74)    ? ABSOLUTE(__AltInterrupt74)    :
         (DEFINED(__Interrupt74)       ? ABSOLUTE(__Interrupt74)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt75)    ? ABSOLUTE(__AltInterrupt75)    :
         (DEFINED(__Interrupt75)       ? ABSOLUTE(__Interrupt75)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt76)    ? ABSOLUTE(__AltInterrupt76)    :
         (DEFINED(__Interrupt76)       ? ABSOLUTE(__Interrupt76)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt77)    ? ABSOLUTE(__AltInterrupt77)    :
         (DEFINED(__Interrupt77)       ? ABSOLUTE(__Interrupt77)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt78)    ? ABSOLUTE(__AltInterrupt78)    :
         (DEFINED(__Interrupt78)       ? ABSOLUTE(__Interrupt78)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt79)    ? ABSOLUTE(__AltInterrupt79)    :
         (DEFINED(__Interrupt79)       ? ABSOLUTE(__Interrupt79)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt80)    ? ABSOLUTE(__AltInterrupt80)    :
         (DEFINED(__Interrupt80)       ? ABSOLUTE(__Interrupt80)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt81)    ? ABSOLUTE(__AltInterrupt81)    :
         (DEFINED(__Interrupt81)       ? ABSOLUTE(__Interrupt81)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt82)    ? ABSOLUTE(__AltInterrupt82)    :
         (DEFINED(__Interrupt82)       ? ABSOLUTE(__Interrupt82)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt83)    ? ABSOLUTE(__AltInterrupt83)    :
         (DEFINED(__Interrupt83)       ? ABSOLUTE(__Interrupt83)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt84)    ? ABSOLUTE(__AltInterrupt84)    :
         (DEFINED(__Interrupt84)       ? ABSOLUTE(__Interrupt84)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt85)    ? ABSOLUTE(__AltInterrupt85)    :
         (DEFINED(__Interrupt85)       ? ABSOLUTE(__Interrupt85)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt86)    ? ABSOLUTE(__AltInterrupt86)    :
         (DEFINED(__Interrupt86)       ? ABSOLUTE(__Interrupt86)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt87)    ? ABSOLUTE(__AltInterrupt87)    :
         (DEFINED(__Interrupt87)       ? ABSOLUTE(__Interrupt87)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt88)    ? ABSOLUTE(__AltInterrupt88)    :
         (DEFINED(__Interrupt88)       ? ABSOLUTE(__Interrupt88)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt89)    ? ABSOLUTE(__AltInterrupt89)    :
         (DEFINED(__Interrupt89)       ? ABSOLUTE(__Interrupt89)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt90)    ? ABSOLUTE(__AltInterrupt90)    :
         (DEFINED(__Interrupt90)       ? ABSOLUTE(__Interrupt90)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt91)    ? ABSOLUTE(__AltInterrupt91)    :
         (DEFINED(__Interrupt91)       ? ABSOLUTE(__Interrupt91)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt92)    ? ABSOLUTE(__AltInterrupt92)    :
         (DEFINED(__Interrupt92)       ? ABSOLUTE(__Interrupt92)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt93)    ? ABSOLUTE(__AltInterrupt93)    :
         (DEFINED(__Interrupt93)       ? ABSOLUTE(__Interrupt93)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt94)    ? ABSOLUTE(__AltInterrupt94)    :
         (DEFINED(__Interrupt94)       ? ABSOLUTE(__Interrupt94)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt95)    ? ABSOLUTE(__AltInterrupt95)    :
         (DEFINED(__Interrupt95)       ? ABSOLUTE(__Interrupt95)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt96)    ? ABSOLUTE(__AltInterrupt96)    :
         (DEFINED(__Interrupt96)       ? ABSOLUTE(__Interrupt96)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt97)    ? ABSOLUTE(__AltInterrupt97)    :
         (DEFINED(__Interrupt97)       ? ABSOLUTE(__Interrupt97)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt98)    ? ABSOLUTE(__AltInterrupt98)    :
         (DEFINED(__Interrupt98)       ? ABSOLUTE(__Interrupt98)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt99)    ? ABSOLUTE(__AltInterrupt99)    :
         (DEFINED(__Interrupt99)       ? ABSOLUTE(__Interrupt99)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt100)    ? ABSOLUTE(__AltInterrupt100)    :
         (DEFINED(__Interrupt100)       ? ABSOLUTE(__Interrupt100)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt101)    ? ABSOLUTE(__AltInterrupt101)    :
         (DEFINED(__Interrupt101)       ? ABSOLUTE(__Interrupt101)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt102)    ? ABSOLUTE(__AltInterrupt102)    :
         (DEFINED(__Interrupt102)       ? ABSOLUTE(__Interrupt102)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt103)    ? ABSOLUTE(__AltInterrupt103)    :
         (DEFINED(__Interrupt103)       ? ABSOLUTE(__Interrupt103)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt104)    ? ABSOLUTE(__AltInterrupt104)    :
         (DEFINED(__Interrupt104)       ? ABSOLUTE(__Interrupt104)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt105)    ? ABSOLUTE(__AltInterrupt105)    :
         (DEFINED(__Interrupt105)       ? ABSOLUTE(__Interrupt105)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt106)    ? ABSOLUTE(__AltInterrupt106)    :
         (DEFINED(__Interrupt106)       ? ABSOLUTE(__Interrupt106)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt107)    ? ABSOLUTE(__AltInterrupt107)    :
         (DEFINED(__Interrupt107)       ? ABSOLUTE(__Interrupt107)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt108)    ? ABSOLUTE(__AltInterrupt108)    :
         (DEFINED(__Interrupt108)       ? ABSOLUTE(__Interrupt108)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt109)    ? ABSOLUTE(__AltInterrupt109)    :
         (DEFINED(__Interrupt109)       ? ABSOLUTE(__Interrupt109)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt110)    ? ABSOLUTE(__AltInterrupt110)    :
         (DEFINED(__Interrupt110)       ? ABSOLUTE(__Interrupt110)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt111)    ? ABSOLUTE(__AltInterrupt111)    :
         (DEFINED(__Interrupt111)       ? ABSOLUTE(__Interrupt111)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt112)    ? ABSOLUTE(__AltInterrupt112)    :
         (DEFINED(__Interrupt112)       ? ABSOLUTE(__Interrupt112)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt113)    ? ABSOLUTE(__AltInterrupt113)    :
         (DEFINED(__Interrupt113)       ? ABSOLUTE(__Interrupt113)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt114)    ? ABSOLUTE(__AltInterrupt114)    :
         (DEFINED(__Interrupt114)       ? ABSOLUTE(__Interrupt114)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt115)    ? ABSOLUTE(__AltInterrupt115)    :
         (DEFINED(__Interrupt115)       ? ABSOLUTE(__Interrupt115)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt116)    ? ABSOLUTE(__AltInterrupt116)    :
         (DEFINED(__Interrupt116)       ? ABSOLUTE(__Interrupt116)       :
         ABSOLUTE(__DefaultInterrupt)));
    LONG( DEFINED(__AltInterrupt117)    ? ABSOLUTE(__AltInterrupt117)    :
         (DEFINED(__Interrupt117)       ? ABSOLUTE(__Interrupt117)       :
         ABSOLUTE(__DefaultInterrupt)));
  } >aivt
} /* SECTIONS */


/*
** ============== Equates for SFR Addresses =============
*/

 WREG0        = 0x0;
_WREG0        = 0x0;
 WREG1        = 0x2;
_WREG1        = 0x2;
 WREG2        = 0x4;
_WREG2        = 0x4;
 WREG3        = 0x6;
_WREG3        = 0x6;
 WREG4        = 0x8;
_WREG4        = 0x8;
 WREG5        = 0xA;
_WREG5        = 0xA;
 WREG6        = 0xC;
_WREG6        = 0xC;
 WREG7        = 0xE;
_WREG7        = 0xE;
 WREG8        = 0x10;
_WREG8        = 0x10;
 WREG9        = 0x12;
_WREG9        = 0x12;
 WREG10       = 0x14;
_WREG10       = 0x14;
 WREG11       = 0x16;
_WREG11       = 0x16;
 WREG12       = 0x18;
_WREG12       = 0x18;
 WREG13       = 0x1A;
_WREG13       = 0x1A;
 WREG14       = 0x1C;
_WREG14       = 0x1C;
 WREG15       = 0x1E;
_WREG15       = 0x1E;
 SPLIM        = 0x20;
_SPLIM        = 0x20;
 ACCAL        = 0x22;
_ACCAL        = 0x22;
 ACCAH        = 0x24;
_ACCAH        = 0x24;
 ACCAU        = 0x26;
_ACCAU        = 0x26;
 ACCBL        = 0x28;
_ACCBL        = 0x28;
 ACCBH        = 0x2A;
_ACCBH        = 0x2A;
 ACCBU        = 0x2C;
_ACCBU        = 0x2C;
 PCL          = 0x2E;
_PCL          = 0x2E;
 PCH          = 0x30;
_PCH          = 0x30;
 TBLPAG       = 0x32;
_TBLPAG       = 0x32;
 PSVPAG       = 0x34;
_PSVPAG       = 0x34;
 RCOUNT       = 0x36;
_RCOUNT       = 0x36;
 DCOUNT       = 0x38;
_DCOUNT       = 0x38;
 DOSTARTL     = 0x3A;
_DOSTARTL     = 0x3A;
 DOSTARTH     = 0x3C;
_DOSTARTH     = 0x3C;
 DOENDL       = 0x3E;
_DOENDL       = 0x3E;
 DOENDH       = 0x40;
_DOENDH       = 0x40;
 SR           = 0x42;
_SR           = 0x42;
_SRbits       = 0x42;
 CORCON       = 0x44;
_CORCON       = 0x44;
_CORCONbits   = 0x44;
 MODCON       = 0x46;
_MODCON       = 0x46;
_MODCONbits   = 0x46;
 XMODSRT      = 0x48;
_XMODSRT      = 0x48;
 XMODEND      = 0x4A;
_XMODEND      = 0x4A;
 YMODSRT      = 0x4C;
_YMODSRT      = 0x4C;
 YMODEND      = 0x4E;
_YMODEND      = 0x4E;
 XBREV        = 0x50;
_XBREV        = 0x50;
_XBREVbits    = 0x50;
 DISICNT      = 0x52;
_DISICNT      = 0x52;
 CNEN1        = 0x60;
_CNEN1        = 0x60;
_CNEN1bits    = 0x60;
 CNEN2        = 0x62;
_CNEN2        = 0x62;
_CNEN2bits    = 0x62;
 CNPU1        = 0x68;
_CNPU1        = 0x68;
_CNPU1bits    = 0x68;
 CNPU2        = 0x6A;
_CNPU2        = 0x6A;
_CNPU2bits    = 0x6A;
 INTCON1      = 0x80;
_INTCON1      = 0x80;
_INTCON1bits  = 0x80;
 INTCON2      = 0x82;
_INTCON2      = 0x82;
_INTCON2bits  = 0x82;
 IFS0         = 0x84;
_IFS0         = 0x84;
_IFS0bits     = 0x84;
 IFS1         = 0x86;
_IFS1         = 0x86;
_IFS1bits     = 0x86;
 IFS2         = 0x88;
_IFS2         = 0x88;
_IFS2bits     = 0x88;
 IFS3         = 0x8A;
_IFS3         = 0x8A;
_IFS3bits     = 0x8A;
 IFS4         = 0x8C;
_IFS4         = 0x8C;
_IFS4bits     = 0x8C;
 IEC0         = 0x94;
_IEC0         = 0x94;
_IEC0bits     = 0x94;
 IEC1         = 0x96;
_IEC1         = 0x96;
_IEC1bits     = 0x96;
 IEC2         = 0x98;
_IEC2         = 0x98;
_IEC2bits     = 0x98;
 IEC3         = 0x9A;
_IEC3         = 0x9A;
_IEC3bits     = 0x9A;
 IEC4         = 0x9C;
_IEC4         = 0x9C;
_IEC4bits     = 0x9C;
 IPC0         = 0xA4;
_IPC0         = 0xA4;
_IPC0bits     = 0xA4;
 IPC1         = 0xA6;
_IPC1         = 0xA6;
_IPC1bits     = 0xA6;
 IPC2         = 0xA8;
_IPC2         = 0xA8;
_IPC2bits     = 0xA8;
 IPC3         = 0xAA;
_IPC3         = 0xAA;
_IPC3bits     = 0xAA;
 IPC4         = 0xAC;
_IPC4         = 0xAC;
_IPC4bits     = 0xAC;
 IPC5         = 0xAE;
_IPC5         = 0xAE;
_IPC5bits     = 0xAE;
 IPC6         = 0xB0;
_IPC6         = 0xB0;
_IPC6bits     = 0xB0;
 IPC7         = 0xB2;
_IPC7         = 0xB2;
_IPC7bits     = 0xB2;
 IPC8         = 0xB4;
_IPC8         = 0xB4;
_IPC8bits     = 0xB4;
 IPC9         = 0xB6;
_IPC9         = 0xB6;
_IPC9bits     = 0xB6;
 IPC10        = 0xB8;
_IPC10        = 0xB8;
_IPC10bits    = 0xB8;
 IPC11        = 0xBA;
_IPC11        = 0xBA;
_IPC11bits    = 0xBA;
 IPC12        = 0xBC;
_IPC12        = 0xBC;
_IPC12bits    = 0xBC;
 IPC13        = 0xBE;
_IPC13        = 0xBE;
_IPC13bits    = 0xBE;
 IPC14        = 0xC0;
_IPC14        = 0xC0;
_IPC14bits    = 0xC0;
 IPC15        = 0xC2;
_IPC15        = 0xC2;
_IPC15bits    = 0xC2;
 IPC16        = 0xC4;
_IPC16        = 0xC4;
_IPC16bits    = 0xC4;
 IPC17        = 0xC6;
_IPC17        = 0xC6;
_IPC17bits    = 0xC6;
 INTTREG      = 0xE0;
_INTTREG      = 0xE0;
_INTTREGbits  = 0xE0;
 TMR1         = 0x100;
_TMR1         = 0x100;
 PR1          = 0x102;
_PR1          = 0x102;
 T1CON        = 0x104;
_T1CON        = 0x104;
_T1CONbits    = 0x104;
 TMR2         = 0x106;
_TMR2         = 0x106;
 TMR3HLD      = 0x108;
_TMR3HLD      = 0x108;
 TMR3         = 0x10A;
_TMR3         = 0x10A;
 PR2          = 0x10C;
_PR2          = 0x10C;
 PR3          = 0x10E;
_PR3          = 0x10E;
 T2CON        = 0x110;
_T2CON        = 0x110;
_T2CONbits    = 0x110;
 T3CON        = 0x112;
_T3CON        = 0x112;
_T3CONbits    = 0x112;
 TMR4         = 0x114;
_TMR4         = 0x114;
 TMR5HLD      = 0x116;
_TMR5HLD      = 0x116;
 TMR5         = 0x118;
_TMR5         = 0x118;
 PR4          = 0x11A;
_PR4          = 0x11A;
 PR5          = 0x11C;
_PR5          = 0x11C;
 T4CON        = 0x11E;
_T4CON        = 0x11E;
_T4CONbits    = 0x11E;
 T5CON        = 0x120;
_T5CON        = 0x120;
_T5CONbits    = 0x120;
 TMR6         = 0x122;
_TMR6         = 0x122;
 TMR7HLD      = 0x124;
_TMR7HLD      = 0x124;
 TMR7         = 0x126;
_TMR7         = 0x126;
 PR6          = 0x128;
_PR6          = 0x128;
 PR7          = 0x12A;
_PR7          = 0x12A;
 T6CON        = 0x12C;
_T6CON        = 0x12C;
_T6CONbits    = 0x12C;
 T7CON        = 0x12E;
_T7CON        = 0x12E;
_T7CONbits    = 0x12E;
 TMR8         = 0x130;
_TMR8         = 0x130;
 TMR9HLD      = 0x132;
_TMR9HLD      = 0x132;
 TMR9         = 0x134;
_TMR9         = 0x134;
 PR8          = 0x136;
_PR8          = 0x136;
 PR9          = 0x138;
_PR9          = 0x138;
 T8CON        = 0x13A;
_T8CON        = 0x13A;
_T8CONbits    = 0x13A;
 T9CON        = 0x13C;
_T9CON        = 0x13C;
_T9CONbits    = 0x13C;
 IC1BUF       = 0x140;
_IC1BUF       = 0x140;
 IC1CON       = 0x142;
_IC1CON       = 0x142;
_IC1CONbits   = 0x142;
 IC2BUF       = 0x144;
_IC2BUF       = 0x144;
 IC2CON       = 0x146;
_IC2CON       = 0x146;
_IC2CONbits   = 0x146;
 IC3BUF       = 0x148;
_IC3BUF       = 0x148;
 IC3CON       = 0x14A;
_IC3CON       = 0x14A;
_IC3CONbits   = 0x14A;
 IC4BUF       = 0x14C;
_IC4BUF       = 0x14C;
 IC4CON       = 0x14E;
_IC4CON       = 0x14E;
_IC4CONbits   = 0x14E;
 IC5BUF       = 0x150;
_IC5BUF       = 0x150;
 IC5CON       = 0x152;
_IC5CON       = 0x152;
_IC5CONbits   = 0x152;
 IC6BUF       = 0x154;
_IC6BUF       = 0x154;
 IC6CON       = 0x156;
_IC6CON       = 0x156;
_IC6CONbits   = 0x156;
 IC7BUF       = 0x158;
_IC7BUF       = 0x158;
 IC7CON       = 0x15A;
_IC7CON       = 0x15A;
_IC7CONbits   = 0x15A;
 IC8BUF       = 0x15C;
_IC8BUF       = 0x15C;
 IC8CON       = 0x15E;
_IC8CON       = 0x15E;
_IC8CONbits   = 0x15E;
 OC1RS        = 0x180;
_OC1RS        = 0x180;
 OC1R         = 0x182;
_OC1R         = 0x182;
 OC1CON       = 0x184;
_OC1CON       = 0x184;
_OC1CONbits   = 0x184;
 OC2RS        = 0x186;
_OC2RS        = 0x186;
 OC2R         = 0x188;
_OC2R         = 0x188;
 OC2CON       = 0x18A;
_OC2CON       = 0x18A;
_OC2CONbits   = 0x18A;
 OC3RS        = 0x18C;
_OC3RS        = 0x18C;
 OC3R         = 0x18E;
_OC3R         = 0x18E;
 OC3CON       = 0x190;
_OC3CON       = 0x190;
_OC3CONbits   = 0x190;
 OC4RS        = 0x192;
_OC4RS        = 0x192;
 OC4R         = 0x194;
_OC4R         = 0x194;
 OC4CON       = 0x196;
_OC4CON       = 0x196;
_OC4CONbits   = 0x196;
 OC5RS        = 0x198;
_OC5RS        = 0x198;
 OC5R         = 0x19A;
_OC5R         = 0x19A;
 OC5CON       = 0x19C;
_OC5CON       = 0x19C;
_OC5CONbits   = 0x19C;
 OC6RS        = 0x19E;
_OC6RS        = 0x19E;
 OC6R         = 0x1A0;
_OC6R         = 0x1A0;
 OC6CON       = 0x1A2;
_OC6CON       = 0x1A2;
_OC6CONbits   = 0x1A2;
 OC7RS        = 0x1A4;
_OC7RS        = 0x1A4;
 OC7R         = 0x1A6;
_OC7R         = 0x1A6;
 OC7CON       = 0x1A8;
_OC7CON       = 0x1A8;
_OC7CONbits   = 0x1A8;
 OC8RS        = 0x1AA;
_OC8RS        = 0x1AA;
 OC8R         = 0x1AC;
_OC8R         = 0x1AC;
 OC8CON       = 0x1AE;
_OC8CON       = 0x1AE;
_OC8CONbits   = 0x1AE;
 I2C1RCV      = 0x200;
_I2C1RCV      = 0x200;
 I2C1TRN      = 0x202;
_I2C1TRN      = 0x202;
 I2C1BRG      = 0x204;
_I2C1BRG      = 0x204;
 I2C1CON      = 0x206;
_I2C1CON      = 0x206;
_I2C1CONbits  = 0x206;
 I2C1STAT     = 0x208;
_I2C1STAT     = 0x208;
_I2C1STATbits = 0x208;
 I2C1ADD      = 0x20A;
_I2C1ADD      = 0x20A;
 I2C1MSK      = 0x20C;
_I2C1MSK      = 0x20C;
 I2C2RCV      = 0x210;
_I2C2RCV      = 0x210;
 I2C2TRN      = 0x212;
_I2C2TRN      = 0x212;
 I2C2BRG      = 0x214;
_I2C2BRG      = 0x214;
 I2C2CON      = 0x216;
_I2C2CON      = 0x216;
_I2C2CONbits  = 0x216;
 I2C2STAT     = 0x218;
_I2C2STAT     = 0x218;
_I2C2STATbits = 0x218;
 I2C2ADD      = 0x21A;
_I2C2ADD      = 0x21A;
 I2C2MSK      = 0x21C;
_I2C2MSK      = 0x21C;
 U1MODE       = 0x220;
_U1MODE       = 0x220;
_U1MODEbits   = 0x220;
 U1STA        = 0x222;
_U1STA        = 0x222;
_U1STAbits    = 0x222;
 U1TXREG      = 0x224;
_U1TXREG      = 0x224;
_U1TXREGbits  = 0x224;
 U1RXREG      = 0x226;
_U1RXREG      = 0x226;
_U1RXREGbits  = 0x226;
 U1BRG        = 0x228;
_U1BRG        = 0x228;
 U2MODE       = 0x230;
_U2MODE       = 0x230;
_U2MODEbits   = 0x230;
 U2STA        = 0x232;
_U2STA        = 0x232;
_U2STAbits    = 0x232;
 U2TXREG      = 0x234;
_U2TXREG      = 0x234;
_U2TXREGbits  = 0x234;
 U2RXREG      = 0x236;
_U2RXREG      = 0x236;
_U2RXREGbits  = 0x236;
 U2BRG        = 0x238;
_U2BRG        = 0x238;
 SPI1STAT     = 0x240;
_SPI1STAT     = 0x240;
_SPI1STATbits = 0x240;
 SPI1CON1     = 0x242;
_SPI1CON1     = 0x242;
_SPI1CON1bits = 0x242;
 SPI1CON2     = 0x244;
_SPI1CON2     = 0x244;
_SPI1CON2bits = 0x244;
 SPI1BUF      = 0x248;
_SPI1BUF      = 0x248;
 SPI2STAT     = 0x260;
_SPI2STAT     = 0x260;
_SPI2STATbits = 0x260;
 SPI2CON1     = 0x262;
_SPI2CON1     = 0x262;
_SPI2CON1bits = 0x262;
 SPI2CON2     = 0x264;
_SPI2CON2     = 0x264;
_SPI2CON2bits = 0x264;
 SPI2BUF      = 0x268;
_SPI2BUF      = 0x268;
 DCICON1      = 0x280;
_DCICON1      = 0x280;
_DCICON1bits  = 0x280;
 DCICON2      = 0x282;
_DCICON2      = 0x282;
_DCICON2bits  = 0x282;
 DCICON3      = 0x284;
_DCICON3      = 0x284;
_DCICON3bits  = 0x284;
 DCISTAT      = 0x286;
_DCISTAT      = 0x286;
_DCISTATbits  = 0x286;
 TSCON        = 0x288;
_TSCON        = 0x288;
_TSCONbits    = 0x288;
 RSCON        = 0x28C;
_RSCON        = 0x28C;
_RSCONbits    = 0x28C;
 RXBUF0       = 0x290;
_RXBUF0       = 0x290;
 RXBUF1       = 0x292;
_RXBUF1       = 0x292;
 RXBUF2       = 0x294;
_RXBUF2       = 0x294;
 RXBUF3       = 0x296;
_RXBUF3       = 0x296;
 TXBUF0       = 0x298;
_TXBUF0       = 0x298;
 TXBUF1       = 0x29A;
_TXBUF1       = 0x29A;
 TXBUF2       = 0x29C;
_TXBUF2       = 0x29C;
 TXBUF3       = 0x29E;
_TXBUF3       = 0x29E;
 TRISA        = 0x2C0;
_TRISA        = 0x2C0;
_TRISAbits    = 0x2C0;
 PORTA        = 0x2C2;
_PORTA        = 0x2C2;
_PORTAbits    = 0x2C2;
 LATA         = 0x2C4;
_LATA         = 0x2C4;
_LATAbits     = 0x2C4;
 TRISB        = 0x2C6;
_TRISB        = 0x2C6;
_TRISBbits    = 0x2C6;
 PORTB        = 0x2C8;
_PORTB        = 0x2C8;
_PORTBbits    = 0x2C8;
 LATB         = 0x2CA;
_LATB         = 0x2CA;
_LATBbits     = 0x2CA;
 TRISC        = 0x2CC;
_TRISC        = 0x2CC;
_TRISCbits    = 0x2CC;
 PORTC        = 0x2CE;
_PORTC        = 0x2CE;
_PORTCbits    = 0x2CE;
 LATC         = 0x2D0;
_LATC         = 0x2D0;
_LATCbits     = 0x2D0;
 TRISD        = 0x2D2;
_TRISD        = 0x2D2;
_TRISDbits    = 0x2D2;
 PORTD        = 0x2D4;
_PORTD        = 0x2D4;
_PORTDbits    = 0x2D4;
 LATD         = 0x2D6;
_LATD         = 0x2D6;
_LATDbits     = 0x2D6;
 TRISE        = 0x2D8;
_TRISE        = 0x2D8;
_TRISEbits    = 0x2D8;
 PORTE        = 0x2DA;
_PORTE        = 0x2DA;
_PORTEbits    = 0x2DA;
 LATE         = 0x2DC;
_LATE         = 0x2DC;
_LATEbits     = 0x2DC;
 TRISF        = 0x2DE;
_TRISF        = 0x2DE;
_TRISFbits    = 0x2DE;
 PORTF        = 0x2E0;
_PORTF        = 0x2E0;
_PORTFbits    = 0x2E0;
 LATF         = 0x2E2;
_LATF         = 0x2E2;
_LATFbits     = 0x2E2;
 TRISG        = 0x2E4;
_TRISG        = 0x2E4;
_TRISGbits    = 0x2E4;
 PORTG        = 0x2E6;
_PORTG        = 0x2E6;
_PORTGbits    = 0x2E6;
 LATG         = 0x2E8;
_LATG         = 0x2E8;
_LATGbits     = 0x2E8;
 ADC1BUF0     = 0x300;
_ADC1BUF0     = 0x300;
 AD1CON1      = 0x320;
_AD1CON1      = 0x320;
_AD1CON1bits  = 0x320;
 AD1CON2      = 0x322;
_AD1CON2      = 0x322;
_AD1CON2bits  = 0x322;
 AD1CON3      = 0x324;
_AD1CON3      = 0x324;
_AD1CON3bits  = 0x324;
 AD1CHS123    = 0x326;
_AD1CHS123    = 0x326;
_AD1CHS123bits = 0x326;
 AD1CHS0      = 0x328;
_AD1CHS0      = 0x328;
_AD1CHS0bits  = 0x328;
 AD1PCFGH     = 0x32A;
_AD1PCFGH     = 0x32A;
_AD1PCFGHbits = 0x32A;
 AD1PCFGL     = 0x32C;
_AD1PCFGL     = 0x32C;
_AD1PCFGLbits = 0x32C;
 AD1CSSH      = 0x32E;
_AD1CSSH      = 0x32E;
_AD1CSSHbits  = 0x32E;
 AD1CSSL      = 0x330;
_AD1CSSL      = 0x330;
_AD1CSSLbits  = 0x330;
 AD1CON4      = 0x332;
_AD1CON4      = 0x332;
_AD1CON4bits  = 0x332;
 ADC2BUF0     = 0x340;
_ADC2BUF0     = 0x340;
 AD2CON1      = 0x360;
_AD2CON1      = 0x360;
_AD2CON1bits  = 0x360;
 AD2CON2      = 0x362;
_AD2CON2      = 0x362;
_AD2CON2bits  = 0x362;
 AD2CON3      = 0x364;
_AD2CON3      = 0x364;
_AD2CON3bits  = 0x364;
 AD2CHS123    = 0x366;
_AD2CHS123    = 0x366;
_AD2CHS123bits = 0x366;
 AD2CHS0      = 0x368;
_AD2CHS0      = 0x368;
_AD2CHS0bits  = 0x368;
 AD2PCFGL     = 0x36C;
_AD2PCFGL     = 0x36C;
_AD2PCFGLbits = 0x36C;
 AD2CSSL      = 0x370;
_AD2CSSL      = 0x370;
_AD2CSSLbits  = 0x370;
 AD2CON4      = 0x372;
_AD2CON4      = 0x372;
_AD2CON4bits  = 0x372;
 DMA0CON      = 0x380;
_DMA0CON      = 0x380;
_DMA0CONbits  = 0x380;
 DMA0REQ      = 0x382;
_DMA0REQ      = 0x382;
_DMA0REQbits  = 0x382;
 DMA0STA      = 0x384;
_DMA0STA      = 0x384;
 DMA0STB      = 0x386;
_DMA0STB      = 0x386;
 DMA0PAD      = 0x388;
_DMA0PAD      = 0x388;
 DMA0CNT      = 0x38A;
_DMA0CNT      = 0x38A;
 DMA1CON      = 0x38C;
_DMA1CON      = 0x38C;
_DMA1CONbits  = 0x38C;
 DMA1REQ      = 0x38E;
_DMA1REQ      = 0x38E;
_DMA1REQbits  = 0x38E;
 DMA1STA      = 0x390;
_DMA1STA      = 0x390;
 DMA1STB      = 0x392;
_DMA1STB      = 0x392;
 DMA1PAD      = 0x394;
_DMA1PAD      = 0x394;
 DMA1CNT      = 0x396;
_DMA1CNT      = 0x396;
 DMA2CON      = 0x398;
_DMA2CON      = 0x398;
_DMA2CONbits  = 0x398;
 DMA2REQ      = 0x39A;
_DMA2REQ      = 0x39A;
_DMA2REQbits  = 0x39A;
 DMA2STA      = 0x39C;
_DMA2STA      = 0x39C;
 DMA2STB      = 0x39E;
_DMA2STB      = 0x39E;
 DMA2PAD      = 0x3A0;
_DMA2PAD      = 0x3A0;
 DMA2CNT      = 0x3A2;
_DMA2CNT      = 0x3A2;
 DMA3CON      = 0x3A4;
_DMA3CON      = 0x3A4;
_DMA3CONbits  = 0x3A4;
 DMA3REQ      = 0x3A6;
_DMA3REQ      = 0x3A6;
_DMA3REQbits  = 0x3A6;
 DMA3STA      = 0x3A8;
_DMA3STA      = 0x3A8;
 DMA3STB      = 0x3AA;
_DMA3STB      = 0x3AA;
 DMA3PAD      = 0x3AC;
_DMA3PAD      = 0x3AC;
 DMA3CNT      = 0x3AE;
_DMA3CNT      = 0x3AE;
 DMA4CON      = 0x3B0;
_DMA4CON      = 0x3B0;
_DMA4CONbits  = 0x3B0;
 DMA4REQ      = 0x3B2;
_DMA4REQ      = 0x3B2;
_DMA4REQbits  = 0x3B2;
 DMA4STA      = 0x3B4;
_DMA4STA      = 0x3B4;
 DMA4STB      = 0x3B6;
_DMA4STB      = 0x3B6;
 DMA4PAD      = 0x3B8;
_DMA4PAD      = 0x3B8;
 DMA4CNT      = 0x3BA;
_DMA4CNT      = 0x3BA;
 DMA5CON      = 0x3BC;
_DMA5CON      = 0x3BC;
_DMA5CONbits  = 0x3BC;
 DMA5REQ      = 0x3BE;
_DMA5REQ      = 0x3BE;
_DMA5REQbits  = 0x3BE;
 DMA5STA      = 0x3C0;
_DMA5STA      = 0x3C0;
 DMA5STB      = 0x3C2;
_DMA5STB      = 0x3C2;
 DMA5PAD      = 0x3C4;
_DMA5PAD      = 0x3C4;
 DMA5CNT      = 0x3C6;
_DMA5CNT      = 0x3C6;
 DMA6CON      = 0x3C8;
_DMA6CON      = 0x3C8;
_DMA6CONbits  = 0x3C8;
 DMA6REQ      = 0x3CA;
_DMA6REQ      = 0x3CA;
_DMA6REQbits  = 0x3CA;
 DMA6STA      = 0x3CC;
_DMA6STA      = 0x3CC;
 DMA6STB      = 0x3CE;
_DMA6STB      = 0x3CE;
 DMA6PAD      = 0x3D0;
_DMA6PAD      = 0x3D0;
 DMA6CNT      = 0x3D2;
_DMA6CNT      = 0x3D2;
 DMA7CON      = 0x3D4;
_DMA7CON      = 0x3D4;
_DMA7CONbits  = 0x3D4;
 DMA7REQ      = 0x3D6;
_DMA7REQ      = 0x3D6;
_DMA7REQbits  = 0x3D6;
 DMA7STA      = 0x3D8;
_DMA7STA      = 0x3D8;
 DMA7STB      = 0x3DA;
_DMA7STB      = 0x3DA;
 DMA7PAD      = 0x3DC;
_DMA7PAD      = 0x3DC;
 DMA7CNT      = 0x3DE;
_DMA7CNT      = 0x3DE;
 DMACS0       = 0x3E0;
_DMACS0       = 0x3E0;
_DMACS0bits   = 0x3E0;
 DMACS1       = 0x3E2;
_DMACS1       = 0x3E2;
_DMACS1bits   = 0x3E2;
 DSADR        = 0x3E4;
_DSADR        = 0x3E4;
 C1CTRL1      = 0x400;
_C1CTRL1      = 0x400;
_C1CTRL1bits  = 0x400;
 C1CTRL2      = 0x402;
_C1CTRL2      = 0x402;
_C1CTRL2bits  = 0x402;
 C1VEC        = 0x404;
_C1VEC        = 0x404;
_C1VECbits    = 0x404;
 C1FCTRL      = 0x406;
_C1FCTRL      = 0x406;
_C1FCTRLbits  = 0x406;
 C1FIFO       = 0x408;
_C1FIFO       = 0x408;
_C1FIFObits   = 0x408;
 C1INTF       = 0x40A;
_C1INTF       = 0x40A;
_C1INTFbits   = 0x40A;
 C1INTE       = 0x40C;
_C1INTE       = 0x40C;
_C1INTEbits   = 0x40C;
 C1EC         = 0x40E;
_C1EC         = 0x40E;
_C1ECbits     = 0x40E;
 C1RERRCNT    = 0x40E;
_C1RERRCNT    = 0x40E;
 C1TERRCNT    = 0x40F;
_C1TERRCNT    = 0x40F;
 C1CFG1       = 0x410;
_C1CFG1       = 0x410;
_C1CFG1bits   = 0x410;
 C1CFG2       = 0x412;
_C1CFG2       = 0x412;
_C1CFG2bits   = 0x412;
 C1FEN1       = 0x414;
_C1FEN1       = 0x414;
_C1FEN1bits   = 0x414;
 C1FMSKSEL1   = 0x418;
_C1FMSKSEL1   = 0x418;
_C1FMSKSEL1bits = 0x418;
 C1FMSKSEL2   = 0x41A;
_C1FMSKSEL2   = 0x41A;
_C1FMSKSEL2bits = 0x41A;
 C1BUFPNT1    = 0x420;
_C1BUFPNT1    = 0x420;
_C1BUFPNT1bits = 0x420;
 C1RXFUL1     = 0x420;
_C1RXFUL1     = 0x420;
_C1RXFUL1bits = 0x420;
 C1BUFPNT2    = 0x422;
_C1BUFPNT2    = 0x422;
_C1BUFPNT2bits = 0x422;
 C1RXFUL2     = 0x422;
_C1RXFUL2     = 0x422;
_C1RXFUL2bits = 0x422;
 C1BUFPNT3    = 0x424;
_C1BUFPNT3    = 0x424;
_C1BUFPNT3bits = 0x424;
 C1BUFPNT4    = 0x426;
_C1BUFPNT4    = 0x426;
_C1BUFPNT4bits = 0x426;
 C1RXOVF1     = 0x428;
_C1RXOVF1     = 0x428;
_C1RXOVF1bits = 0x428;
 C1RXOVF2     = 0x42A;
_C1RXOVF2     = 0x42A;
_C1RXOVF2bits = 0x42A;
 C1RXM0SID    = 0x430;
_C1RXM0SID    = 0x430;
_C1RXM0SIDbits = 0x430;
 C1TR01CON    = 0x430;
_C1TR01CON    = 0x430;
_C1TR01CONbits = 0x430;
 C1RXM0EID    = 0x432;
_C1RXM0EID    = 0x432;
_C1RXM0EIDbits = 0x432;
 C1TR23CON    = 0x432;
_C1TR23CON    = 0x432;
_C1TR23CONbits = 0x432;
 C1RXM1SID    = 0x434;
_C1RXM1SID    = 0x434;
_C1RXM1SIDbits = 0x434;
 C1TR45CON    = 0x434;
_C1TR45CON    = 0x434;
_C1TR45CONbits = 0x434;
 C1RXM1EID    = 0x436;
_C1RXM1EID    = 0x436;
_C1RXM1EIDbits = 0x436;
 C1TR67CON    = 0x436;
_C1TR67CON    = 0x436;
_C1TR67CONbits = 0x436;
 C1RXM2SID    = 0x438;
_C1RXM2SID    = 0x438;
_C1RXM2SIDbits = 0x438;
 C1RXM2EID    = 0x43A;
_C1RXM2EID    = 0x43A;
_C1RXM2EIDbits = 0x43A;
 C1RXD        = 0x440;
_C1RXD        = 0x440;
 C1RXF0SID    = 0x440;
_C1RXF0SID    = 0x440;
_C1RXF0SIDbits = 0x440;
 C1RXF0EID    = 0x442;
_C1RXF0EID    = 0x442;
_C1RXF0EIDbits = 0x442;
 C1TXD        = 0x442;
_C1TXD        = 0x442;
 C1RXF1SID    = 0x444;
_C1RXF1SID    = 0x444;
_C1RXF1SIDbits = 0x444;
 C1RXF1EID    = 0x446;
_C1RXF1EID    = 0x446;
_C1RXF1EIDbits = 0x446;
 C1RXF2SID    = 0x448;
_C1RXF2SID    = 0x448;
_C1RXF2SIDbits = 0x448;
 C1RXF2EID    = 0x44A;
_C1RXF2EID    = 0x44A;
_C1RXF2EIDbits = 0x44A;
 C1RXF3SID    = 0x44C;
_C1RXF3SID    = 0x44C;
_C1RXF3SIDbits = 0x44C;
 C1RXF3EID    = 0x44E;
_C1RXF3EID    = 0x44E;
_C1RXF3EIDbits = 0x44E;
 C1RXF4SID    = 0x450;
_C1RXF4SID    = 0x450;
_C1RXF4SIDbits = 0x450;
 C1RXF4EID    = 0x452;
_C1RXF4EID    = 0x452;
_C1RXF4EIDbits = 0x452;
 C1RXF5SID    = 0x454;
_C1RXF5SID    = 0x454;
_C1RXF5SIDbits = 0x454;
 C1RXF5EID    = 0x456;
_C1RXF5EID    = 0x456;
_C1RXF5EIDbits = 0x456;
 C1RXF6SID    = 0x458;
_C1RXF6SID    = 0x458;
_C1RXF6SIDbits = 0x458;
 C1RXF6EID    = 0x45A;
_C1RXF6EID    = 0x45A;
_C1RXF6EIDbits = 0x45A;
 C1RXF7SID    = 0x45C;
_C1RXF7SID    = 0x45C;
_C1RXF7SIDbits = 0x45C;
 C1RXF7EID    = 0x45E;
_C1RXF7EID    = 0x45E;
_C1RXF7EIDbits = 0x45E;
 C1RXF8SID    = 0x460;
_C1RXF8SID    = 0x460;
_C1RXF8SIDbits = 0x460;
 C1RXF8EID    = 0x462;
_C1RXF8EID    = 0x462;
_C1RXF8EIDbits = 0x462;
 C1RXF9SID    = 0x464;
_C1RXF9SID    = 0x464;
_C1RXF9SIDbits = 0x464;
 C1RXF9EID    = 0x466;
_C1RXF9EID    = 0x466;
_C1RXF9EIDbits = 0x466;
 C1RXF10SID   = 0x468;
_C1RXF10SID   = 0x468;
_C1RXF10SIDbits = 0x468;
 C1RXF10EID   = 0x46A;
_C1RXF10EID   = 0x46A;
_C1RXF10EIDbits = 0x46A;
 C1RXF11SID   = 0x46C;
_C1RXF11SID   = 0x46C;
_C1RXF11SIDbits = 0x46C;
 C1RXF11EID   = 0x46E;
_C1RXF11EID   = 0x46E;
_C1RXF11EIDbits = 0x46E;
 C1RXF12SID   = 0x470;
_C1RXF12SID   = 0x470;
_C1RXF12SIDbits = 0x470;
 C1RXF12EID   = 0x472;
_C1RXF12EID   = 0x472;
_C1RXF12EIDbits = 0x472;
 C1RXF13SID   = 0x474;
_C1RXF13SID   = 0x474;
_C1RXF13SIDbits = 0x474;
 C1RXF13EID   = 0x476;
_C1RXF13EID   = 0x476;
_C1RXF13EIDbits = 0x476;
 C1RXF14SID   = 0x478;
_C1RXF14SID   = 0x478;
_C1RXF14SIDbits = 0x478;
 C1RXF14EID   = 0x47A;
_C1RXF14EID   = 0x47A;
_C1RXF14EIDbits = 0x47A;
 C1RXF15SID   = 0x47C;
_C1RXF15SID   = 0x47C;
_C1RXF15SIDbits = 0x47C;
 C1RXF15EID   = 0x47E;
_C1RXF15EID   = 0x47E;
_C1RXF15EIDbits = 0x47E;
 C2CTRL1      = 0x500;
_C2CTRL1      = 0x500;
_C2CTRL1bits  = 0x500;
 C2CTRL2      = 0x502;
_C2CTRL2      = 0x502;
_C2CTRL2bits  = 0x502;
 C2VEC        = 0x504;
_C2VEC        = 0x504;
_C2VECbits    = 0x504;
 C2FCTRL      = 0x506;
_C2FCTRL      = 0x506;
_C2FCTRLbits  = 0x506;
 C2FIFO       = 0x508;
_C2FIFO       = 0x508;
_C2FIFObits   = 0x508;
 C2INTF       = 0x50A;
_C2INTF       = 0x50A;
_C2INTFbits   = 0x50A;
 C2INTE       = 0x50C;
_C2INTE       = 0x50C;
_C2INTEbits   = 0x50C;
 C2EC         = 0x50E;
_C2EC         = 0x50E;
_C2ECbits     = 0x50E;
 C2RERRCNT    = 0x50E;
_C2RERRCNT    = 0x50E;
 C2TERRCNT    = 0x50F;
_C2TERRCNT    = 0x50F;
 C2CFG1       = 0x510;
_C2CFG1       = 0x510;
_C2CFG1bits   = 0x510;
 C2CFG2       = 0x512;
_C2CFG2       = 0x512;
_C2CFG2bits   = 0x512;
 C2FEN1       = 0x514;
_C2FEN1       = 0x514;
_C2FEN1bits   = 0x514;
 C2FMSKSEL1   = 0x518;
_C2FMSKSEL1   = 0x518;
_C2FMSKSEL1bits = 0x518;
 C2FMSKSEL2   = 0x51A;
_C2FMSKSEL2   = 0x51A;
_C2FMSKSEL2bits = 0x51A;
 C2BUFPNT1    = 0x520;
_C2BUFPNT1    = 0x520;
_C2BUFPNT1bits = 0x520;
 C2RXFUL1     = 0x520;
_C2RXFUL1     = 0x520;
_C2RXFUL1bits = 0x520;
 C2BUFPNT2    = 0x522;
_C2BUFPNT2    = 0x522;
_C2BUFPNT2bits = 0x522;
 C2RXFUL2     = 0x522;
_C2RXFUL2     = 0x522;
_C2RXFUL2bits = 0x522;
 C2BUFPNT3    = 0x524;
_C2BUFPNT3    = 0x524;
_C2BUFPNT3bits = 0x524;
 C2BUFPNT4    = 0x526;
_C2BUFPNT4    = 0x526;
_C2BUFPNT4bits = 0x526;
 C2RXOVF1     = 0x528;
_C2RXOVF1     = 0x528;
_C2RXOVF1bits = 0x528;
 C2RXOVF2     = 0x52A;
_C2RXOVF2     = 0x52A;
_C2RXOVF2bits = 0x52A;
 C2RXM0SID    = 0x530;
_C2RXM0SID    = 0x530;
_C2RXM0SIDbits = 0x530;
 C2TR01CON    = 0x530;
_C2TR01CON    = 0x530;
_C2TR01CONbits = 0x530;
 C2RXM0EID    = 0x532;
_C2RXM0EID    = 0x532;
_C2RXM0EIDbits = 0x532;
 C2TR23CON    = 0x532;
_C2TR23CON    = 0x532;
_C2TR23CONbits = 0x532;
 C2RXM1SID    = 0x534;
_C2RXM1SID    = 0x534;
_C2RXM1SIDbits = 0x534;
 C2TR45CON    = 0x534;
_C2TR45CON    = 0x534;
_C2TR45CONbits = 0x534;
 C2RXM1EID    = 0x536;
_C2RXM1EID    = 0x536;
_C2RXM1EIDbits = 0x536;
 C2TR67CON    = 0x536;
_C2TR67CON    = 0x536;
_C2TR67CONbits = 0x536;
 C2RXM2SID    = 0x538;
_C2RXM2SID    = 0x538;
_C2RXM2SIDbits = 0x538;
 C2RXM2EID    = 0x53A;
_C2RXM2EID    = 0x53A;
_C2RXM2EIDbits = 0x53A;
 C2RXD        = 0x540;
_C2RXD        = 0x540;
 C2RXF0SID    = 0x540;
_C2RXF0SID    = 0x540;
_C2RXF0SIDbits = 0x540;
 C2RXF0EID    = 0x542;
_C2RXF0EID    = 0x542;
_C2RXF0EIDbits = 0x542;
 C2TXD        = 0x542;
_C2TXD        = 0x542;
 C2RXF1SID    = 0x544;
_C2RXF1SID    = 0x544;
_C2RXF1SIDbits = 0x544;
 C2RXF1EID    = 0x546;
_C2RXF1EID    = 0x546;
_C2RXF1EIDbits = 0x546;
 C2RXF2SID    = 0x548;
_C2RXF2SID    = 0x548;
_C2RXF2SIDbits = 0x548;
 C2RXF2EID    = 0x54A;
_C2RXF2EID    = 0x54A;
_C2RXF2EIDbits = 0x54A;
 C2RXF3SID    = 0x54C;
_C2RXF3SID    = 0x54C;
_C2RXF3SIDbits = 0x54C;
 C2RXF3EID    = 0x54E;
_C2RXF3EID    = 0x54E;
_C2RXF3EIDbits = 0x54E;
 C2RXF4SID    = 0x550;
_C2RXF4SID    = 0x550;
_C2RXF4SIDbits = 0x550;
 C2RXF4EID    = 0x552;
_C2RXF4EID    = 0x552;
_C2RXF4EIDbits = 0x552;
 C2RXF5SID    = 0x554;
_C2RXF5SID    = 0x554;
_C2RXF5SIDbits = 0x554;
 C2RXF5EID    = 0x556;
_C2RXF5EID    = 0x556;
_C2RXF5EIDbits = 0x556;
 C2RXF6SID    = 0x558;
_C2RXF6SID    = 0x558;
_C2RXF6SIDbits = 0x558;
 C2RXF6EID    = 0x55A;
_C2RXF6EID    = 0x55A;
_C2RXF6EIDbits = 0x55A;
 C2RXF7SID    = 0x55C;
_C2RXF7SID    = 0x55C;
_C2RXF7SIDbits = 0x55C;
 C2RXF7EID    = 0x55E;
_C2RXF7EID    = 0x55E;
_C2RXF7EIDbits = 0x55E;
 C2RXF8SID    = 0x560;
_C2RXF8SID    = 0x560;
_C2RXF8SIDbits = 0x560;
 C2RXF8EID    = 0x562;
_C2RXF8EID    = 0x562;
_C2RXF8EIDbits = 0x562;
 C2RXF9SID    = 0x564;
_C2RXF9SID    = 0x564;
_C2RXF9SIDbits = 0x564;
 C2RXF9EID    = 0x566;
_C2RXF9EID    = 0x566;
_C2RXF9EIDbits = 0x566;
 C2RXF10SID   = 0x568;
_C2RXF10SID   = 0x568;
_C2RXF10SIDbits = 0x568;
 C2RXF10EID   = 0x56A;
_C2RXF10EID   = 0x56A;
_C2RXF10EIDbits = 0x56A;
 C2RXF11SID   = 0x56C;
_C2RXF11SID   = 0x56C;
_C2RXF11SIDbits = 0x56C;
 C2RXF11EID   = 0x56E;
_C2RXF11EID   = 0x56E;
_C2RXF11EIDbits = 0x56E;
 C2RXF12SID   = 0x570;
_C2RXF12SID   = 0x570;
_C2RXF12SIDbits = 0x570;
 C2RXF12EID   = 0x572;
_C2RXF12EID   = 0x572;
_C2RXF12EIDbits = 0x572;
 C2RXF13SID   = 0x574;
_C2RXF13SID   = 0x574;
_C2RXF13SIDbits = 0x574;
 C2RXF13EID   = 0x576;
_C2RXF13EID   = 0x576;
_C2RXF13EIDbits = 0x576;
 C2RXF14SID   = 0x578;
_C2RXF14SID   = 0x578;
_C2RXF14SIDbits = 0x578;
 C2RXF14EID   = 0x57A;
_C2RXF14EID   = 0x57A;
_C2RXF14EIDbits = 0x57A;
 C2RXF15SID   = 0x57C;
_C2RXF15SID   = 0x57C;
_C2RXF15SIDbits = 0x57C;
 C2RXF15EID   = 0x57E;
_C2RXF15EID   = 0x57E;
_C2RXF15EIDbits = 0x57E;
 ODCA         = 0x6C0;
_ODCA         = 0x6C0;
_ODCAbits     = 0x6C0;
 ODCD         = 0x6D2;
_ODCD         = 0x6D2;
_ODCDbits     = 0x6D2;
 ODCF         = 0x6DE;
_ODCF         = 0x6DE;
_ODCFbits     = 0x6DE;
 ODCG         = 0x6E4;
_ODCG         = 0x6E4;
_ODCGbits     = 0x6E4;
 RCON         = 0x740;
_RCON         = 0x740;
_RCONbits     = 0x740;
 OSCCON       = 0x742;
_OSCCON       = 0x742;
_OSCCONbits   = 0x742;
 CLKDIV       = 0x744;
_CLKDIV       = 0x744;
_CLKDIVbits   = 0x744;
 PLLFBD       = 0x746;
_PLLFBD       = 0x746;
_PLLFBDbits   = 0x746;
 OSCTUN       = 0x748;
_OSCTUN       = 0x748;
_OSCTUNbits   = 0x748;
 BSRAM        = 0x750;
_BSRAM        = 0x750;
_BSRAMbits    = 0x750;
 SSRAM        = 0x752;
_SSRAM        = 0x752;
_SSRAMbits    = 0x752;
 NVMCON       = 0x760;
_NVMCON       = 0x760;
_NVMCONbits   = 0x760;
 NVMKEY       = 0x766;
_NVMKEY       = 0x766;
 PMD1         = 0x770;
_PMD1         = 0x770;
_PMD1bits     = 0x770;
 PMD2         = 0x772;
_PMD2         = 0x772;
_PMD2bits     = 0x772;
 PMD3         = 0x774;
_PMD3         = 0x774;
_PMD3bits     = 0x774;
