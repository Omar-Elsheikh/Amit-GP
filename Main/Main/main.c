/*
 * Main.c
 *
 * Created: 12/12/2020 08:00:42 PM
 * Author : Omar
 */ 


#include <avr/io.h>

#include <avr/io.h>
#include "STD_types.h"
#include "DIO.h"
#include "SPI.h"
#include "USART.h"
#define  F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
   
	Uint8 Data_in ;
	DIO_Init();
	SPI_Init('M');	SlaveEn();	USART_Init(9600);	
	
    while (1) 
    {SPI_Write('o');_delay_ms(250);SPI_Write('e');_delay_ms(250);

Data_in = USART_RxChar();


if(Data_in =='D')
{
	DIO_write(DIO_channelC1,STD_high);				/*  DINING ON */
	USART_SendString("DINING_ON");					/* Send DINING ON */
}

else if(Data_in =='d')
{
	DIO_write(DIO_channelC1,STD_low);				/* DINING OFF */
	USART_SendString("DINING_OFF"); 				/* Send DINING OFF */
	
}


if(Data_in =='L')
{
	DIO_write(DIO_channelC2,STD_high);				/*  LIVING ON */
	USART_SendString("LIVING_ON");					/* Send LIVING ON */
}

else if(Data_in =='l')
{
	DIO_write(DIO_channelC2,STD_low);				/* LIVING OFF */
	USART_SendString("LIVING_OFF"); 				/* Send LIVING OFF */
	
}



if(Data_in =='K')
{
	DIO_write(DIO_channelC3,STD_high);				/*  KITCHEN ON */
	USART_SendString("KITCHEN_ON");					/* Send KITCHEN ON */
}

else if(Data_in =='k')
{
	DIO_write(DIO_channelC3,STD_low);				/* KITCHEN OFF */
	USART_SendString("KITCHEN_OFF"); 				/* Send KITCHEN OFF */
	
}

if(Data_in =='H')
{
	DIO_write(DIO_channelC1,STD_high);
	DIO_write(DIO_channelC2,STD_high);
	DIO_write(DIO_channelC3,STD_high);				/*  HOME ON */
	USART_SendString("HOME_ON");					/* Send HOME ON */
}

else if(Data_in =='h')
{
	DIO_write(DIO_channelC1,STD_low);
	DIO_write(DIO_channelC2,STD_low);
	DIO_write(DIO_channelC3,STD_low);				/* HOME OFF */
	USART_SendString("HOME_OFF"); 				/* Send HOME OFF */
	
}

    }
}

