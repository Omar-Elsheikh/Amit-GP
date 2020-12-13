/*
 * Sub Main.c
 *
 * Created: 12/12/2020 07:21:16 PM
 * Author : Omar
 */ 

#include <avr/io.h>
#include "avr/interrupt.h"
#include "STD_types.h"
#include "DIO.h"
#include "LCD.h"


int main(void)
{
	DIO_Init();
	SPI_Init('S');
	LCD_Init();
	LCD_clr();
	
	LCD_cmd(0x85);
	LCD_StringPos("Smart Home",1,3);
	LCD_StringPos("By O.Elsheikh",2,2);
	while (1)	{				if( SPI_Receive() == 'o' )		{			DIO_write(DIO_channelC4,STD_low);			DIO_write(DIO_channelC5,STD_high);			DIO_write(DIO_channelC6,STD_low);		}						if( SPI_Receive() == 'e' )		{			DIO_write(DIO_channelC4,STD_high);			DIO_write(DIO_channelC5,STD_low);			DIO_write(DIO_channelC6,STD_high);		}					}


}

