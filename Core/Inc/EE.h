#ifndef __EE_H
#define __EE_H

#include "i2c.h"
#include "main.h"
unsigned char EE_Write( unsigned char address,unsigned char data);
void EE_Init(void);
unsigned char EE_Read( unsigned char address);

#endif 
