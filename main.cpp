/*
 * GccApplication4.cpp
 *
 * Created: 2021. 01. 18. 21:24:21
 * Author : Levente
 */ 


#include "sam.h"
#include "samd21g18a.h"

int main(void)
{
	SystemInit();
	
	PORT->Group[1].DIRSET.reg = (1<<3);
    while (1) 
    {
		
		PORT->Group[1].OUTSET.reg = (1<<3);		
    }
}
