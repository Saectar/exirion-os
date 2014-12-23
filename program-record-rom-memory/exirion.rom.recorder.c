
#include "exirion_def.h"
#include "chip_i2c.h"

_FGS(GSS_OFF & GWRP_OFF);
_FOSCSEL(FNOSC_PRI & IESO_OFF & TEMP_OFF);
_FOSC(FCKSM_CSDCMD & OSCIOFNC_OFF & POSCMD_HS);
_FWDT(FWDTEN_OFF);


void InitPorts(void);

unsigned char ControlByte;
unsigned char HighAdd;		
unsigned char LowAdd, HighAdd;
unsigned char Data;				
unsigned char Length;			
unsigned char PageString[256];	

int main (void)
{
	unsigned int n;		

	InitPorts();		
	InitI2C();			

	ControlByte = 0xA0;
	LowAdd = 0x0C;	
	HighAdd = 0x5A;
	Data = 0xAB;
	Length = 0x05;

	for(n = 0; n < PAGESIZE; n++)
	{
		PageString[n] = n;
	}

	while(1)
	{
		LATAbits.LATA0 = 1;
		LDByteWriteI2C(ControlByte, LowAdd, Data);	
		HDByteWriteI2C(ControlByte, HighAdd, LowAdd, Data);
		HDPageWriteI2C(ControlByte, HighAdd, LowAdd, PageString);
		LDByteReadI2C(ControlByte, LowAdd, &Data, 1);
		HDByteReadI2C(ControlByte, HighAdd, LowAdd, &Data, 1);
		HDSequentialReadI2C(ControlByte, HighAdd, LowAdd, PageString, PAGESIZE);

		Nop();
		LATAbits.LATA0 = 0;
		
	}	
}


void InitPorts(void)
{
	TRISA = 0x0000;
	TRISB = 0x0000;
	TRISC = 0x0000;
	TRISD = 0x0000;
	TRISE = 0x0000;
	TRISF = 0x0000;
	TRISG = 0x0000;

	TRISGbits.TRISG2 = 1;
	TRISGbits.TRISG3 = 1;
}
