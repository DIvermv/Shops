
#include "func.h"
int buyer(void * shop)
 {
   // struct Shops shops;
    while(1)
    {
   int cur_shop=rand() % 5; // выбираем магазин для покупок
   int bay=3000 + rand() % 500;
    Shops[cur_shop]%=bay ; // добавляем в магазин
        printf("Куплено %i товара. Капитал магазина №%i - %i\n",bay,cur_shop+1,Shops[cur_shop]);
	sleep(3);
    }    
 // struct _f_name_data f_name_data= * (struct _f_name_data * ) f_data;
    // статусная строка

	   pthread_exit(0);
 }
