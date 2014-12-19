#include "exirion_def.h"
#include "chip_i2c.h"

unsigned int InitI2C(void)
{	
	I2C1BRG = 0x004b; 
	
	I2C1CON = 0x12a0;
	
	I2C1RCV = 0x010c;
	I2C1TRN = 0x0000;

	
	I2C1CON = 0x9200;
}


unsigned int StartI2C(void)
{

	I2C1CONbits.SEN = 1;		
	while (I2C1CONbits.SEN);	
	return(I2C1STATbits.S);	
}


unsigned int RestartI2C(void)
{

	I2C1CONbits.RSEN = 1;		
	while (I2C1CONbits.RSEN);	
	return(I2C1STATbits.S);	
}


unsigned int StopI2C(void)
{
	I2C1CONbits.PEN = 1;	
	while (I2C1CONbits.PEN);	
	return(I2C1STATbits.P);	
}

unsigned int WriteI2C(unsigned char byte)
{
	I2C1TRN = byte;					
	while (I2C1STATbits.TBF);		

}

unsigned int IdleI2C(void)
{
	while (I2C1STATbits.TRSTAT);		
}


unsigned int LDByteWriteI2C(unsigned char ControlByte, unsigned char LowAdd, unsigned char data)
{
	unsigned int ErrorCode;

	IdleI2C();						
	StartI2C();						
	WriteI2C(ControlByte);			
	IdleI2C();

	ErrorCode = ACKStatus();		
	
	WriteI2C(LowAdd);				
	IdleI2C();

	ErrorCode = ACKStatus();		

	WriteI2C(data);					
	IdleI2C();
	StopI2C();						
	EEAckPolling(ControlByte);		
	return(ErrorCode);
}


unsigned int LDByteReadI2C(unsigned char ControlByte, unsigned char Address, unsigned char *Data, unsigned char Length)
{
	IdleI2C();					//wait for bus Idle
	StartI2C();					//Generate Start Condition
	WriteI2C(ControlByte);		//Write Control Byte
	IdleI2C();					//wait for bus Idle
	WriteI2C(Address);			//Write start address
	IdleI2C();					//wait for bus Idle

	RestartI2C();				//Generate restart condition
	WriteI2C(ControlByte | 0x01);	//Write control byte for read
	IdleI2C();					//wait for bus Idle

	getsI2C(Data, Length);		//read Length number of bytes
	NotAckI2C();				//Send Not Ack
	StopI2C();					//Generate Stop
}


unsigned int HDByteWriteI2C(unsigned char ControlByte, unsigned char HighAdd, unsigned char LowAdd, unsigned char data)
{
	unsigned int ErrorCode;

	IdleI2C();						//Ensure Module is Idle
	StartI2C();						//Generate Start COndition
	WriteI2C(ControlByte);			//Write Control byte
	IdleI2C();

	ErrorCode = ACKStatus();		//Return ACK Status
	
	WriteI2C(HighAdd);
	IdleI2C();						//Write High Address
	WriteI2C(LowAdd);				//Write Low Address
	IdleI2C();

	ErrorCode = ACKStatus();		//Return ACK Status

	WriteI2C(data);					//Write Data
	IdleI2C();
	StopI2C();						//Initiate Stop Condition
	EEAckPolling(ControlByte);		//perform Ack Polling
	return(ErrorCode);
}


unsigned int HDByteReadI2C(unsigned char ControlByte, unsigned char HighAdd, unsigned char LowAdd, unsigned char *Data, unsigned char Length)
{
	IdleI2C();						//Wait for bus Idle
	StartI2C();						//Generate Start condition
	WriteI2C(ControlByte);			//send control byte for write
	IdleI2C();						//Wait for bus Idle

	WriteI2C(HighAdd);				//Send High Address
	IdleI2C();						//Wait for bus Idle
	WriteI2C(LowAdd);				//Send Low Address
	IdleI2C();						//Wait for bus Idle

	RestartI2C();					//Generate Restart
	WriteI2C(ControlByte | 0x01);	//send control byte for Read
	IdleI2C();						//Wait for bus Idle

	getsI2C(Data, Length);			//Read Length number of bytes to Data
	NotAckI2C();					//send Not Ack
	StopI2C();						//Send Stop Condition
	return(0);
}

unsigned int LDPageWriteI2C(unsigned char ControlByte, unsigned char LowAdd, unsigned char *wrptr)
{
	IdleI2C();					//wait for bus Idle
	StartI2C();					//Generate Start condition
	WriteI2C(ControlByte);		//send controlbyte for a write
	IdleI2C();					//wait for bus Idle
	WriteI2C(LowAdd);			//send low address
	IdleI2C();					//wait for bus Idle
	putstringI2C(wrptr);		//send data
	IdleI2C();					//wait for bus Idle
	StopI2C();					//Generate Stop
	return(0);
}


unsigned int HDPageWriteI2C(unsigned char ControlByte, unsigned char HighAdd, unsigned char LowAdd, unsigned char *wrptr)
{
	IdleI2C();				//wait for bus Idle
	StartI2C();				//Generate Start condition
	WriteI2C(ControlByte);	//send controlbyte for a write
	IdleI2C();				//wait for bus Idle
	WriteI2C(HighAdd);		//send High Address
	IdleI2C();				//wait for bus Idle
	WriteI2C(LowAdd);		//send Low Address
	IdleI2C();				//wait for bus Idle
	putstringI2C(wrptr);	//Send data
	IdleI2C();				//wait for bus Idle
	StopI2C();				//Generate a stop
	return(0);
}


unsigned int LDSequentialReadI2C(unsigned char ControlByte, unsigned char address, unsigned char *rdptr, unsigned char length)
{
	IdleI2C();						//Ensure Module is Idle
	StartI2C();						//Initiate start condition
	WriteI2C(ControlByte);			//write 1 byte
	IdleI2C();						//Ensure module is Idle
	WriteI2C(address);				//Write word address
	IdleI2C();						//Ensure module is idle
	RestartI2C();					//Generate I2C Restart Condition
	WriteI2C(ControlByte | 0x01);	//Write 1 byte - R/W bit should be 1 for read
	IdleI2C();						//Ensure bus is idle
	getsI2C(rdptr, length);			//Read in multiple bytes
	NotAckI2C();					//Send Not Ack
	StopI2C();						//Send stop condition
	return(0);
}


unsigned int HDSequentialReadI2C(unsigned char ControlByte, unsigned char HighAdd, unsigned char LowAdd, unsigned char *rdptr, unsigned char length)
{
	IdleI2C();						//Ensure Module is Idle
	StartI2C();						//Initiate start condition
	WriteI2C(ControlByte);			//write 1 byte
	IdleI2C();						//Ensure module is Idle
	WriteI2C(HighAdd);				//Write High word address
	IdleI2C();						//Ensure module is idle
	WriteI2C(LowAdd);				//Write Low word address
	IdleI2C();						//Ensure module is idle
	RestartI2C();					//Generate I2C Restart Condition
	WriteI2C(ControlByte | 0x01);	//Write 1 byte - R/W bit should be 1 for read
	IdleI2C();						//Ensure bus is idle
	getsI2C(rdptr, length);			//Read in multiple bytes
	NotAckI2C();					//Send Not Ack
	StopI2C();						//Send stop condition
	return(0);
}


unsigned int ACKStatus(void)
{
	return (!I2C1STATbits.ACKSTAT);		//Return Ack Status
}


unsigned int NotAckI2C(void)
{
	I2C1CONbits.ACKDT = 1;			//Set for NotACk
	I2C1CONbits.ACKEN = 1;
	while(I2C1CONbits.ACKEN);		//wait for ACK to complete
	I2C1CONbits.ACKDT = 0;			//Set for NotACk
}


unsigned int AckI2C(void)
{
	I2C1CONbits.ACKDT = 0;			//Set for ACk
	I2C1CONbits.ACKEN = 1;
	while(I2C1CONbits.ACKEN);		//wait for ACK to complete
}


unsigned int getsI2C(unsigned char *rdptr, unsigned char Length)
{
	while (Length --)
	{
		*rdptr++ = getI2C();		//get a single byte
		
		if(I2C1STATbits.BCL)		//Test for Bus collision
		{
			return(-1);
		}

		if(Length)
		{
			AckI2C();				//Acknowledge until all read
		}
	}
	return(0);
}


unsigned int getI2C(void)
{
	I2C1CONbits.RCEN = 1;			//Enable Master receive
	Nop();
	while(!I2C1STATbits.RBF);		//Wait for receive bufer to be full
	return(I2C1RCV);				//Return data in buffer
}


unsigned int EEAckPolling(unsigned char control)
{
	IdleI2C();				//wait for bus Idle
	StartI2C();				//Generate Start condition
	
	if(I2C1STATbits.BCL)
	{
		return(-1);			//Bus collision, return
	}

	else
	{
		if(WriteI2C(control))
		{
			return(-3);		//error return
		}

		IdleI2C();			//wait for bus idle
		if(I2C1STATbits.BCL)
		{
			return(-1);		//error return
		}

		while(ACKStatus())
		{
			RestartI2C();	//generate restart
			if(I2C1STATbits.BCL)
			{
				return(-1);	//error return
			}

			if(WriteI2C(control))
			{
				return(-3);
			}

			IdleI2C();
		}
	}
	StopI2C();				//send stop condition
	if(I2C1STATbits.BCL)
	{
		return(-1);
	}
	return(0);
}


unsigned int putstringI2C(unsigned char *wrptr)
{
	unsigned char x;

	for(x = 0; x < PAGESIZE; x++)		//Transmit Data Until Pagesize
	{	
		if(WriteI2C(*wrptr))			//Write 1 byte
		{
			return(-3);				//Return with Write Collision
		}
		IdleI2C();					//Wait for Idle bus
		if(I2C1STATbits.ACKSTAT)
		{
			return(-2);				//Bus responded with Not ACK
		}
		wrptr++;
	}
	return(0);
}
