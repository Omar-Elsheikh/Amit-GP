/*
 * DIO_CFG.h
 *
 * Created: 12/12/2020 07:34:15 PM
 *  Author: Omar
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_


#include "DIO.h"

typedef struct {
	DIO_DirTypes PinDir;
	STD_LevelTypes PinLevel;
}Dio_PinCFG;

#define PINCOUNT 32

void DIO_Init(void);




#endif /* DIO_CFG_H_ */