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
	while (1)


}
