#ifndef FUNC_H
#define FUNC_H
#include <string.h>
#include <stdio.h>
#include "stdlib.h"
#include "time.h"

 struct Buy{
	unsigned int Nomer_potoka; 
	unsigned int buyer_number; 
                    };

pthread_mutex_t mut;
int Shops[5];


int DowL(void * shop);
int buyer(void * buy);
#endif
