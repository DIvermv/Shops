#include "func.h"
int DowL(void * shop)
 {
   // struct Shops shops;
    while(1)
    {
   int cur_shop=rand() % 5; // выбираем магазин для загрузки
   int down=300 + rand() % 200;
    Shops[cur_shop]+=down ; // добавляем в магазин
        printf("Загружено %i товара. Капитал магазина №%i - %i\n",down,cur_shop+1,Shops[cur_shop]);
	sleep(1);
    }    
 // struct _f_name_data f_name_data= * (struct _f_name_data * ) f_data;
    // статусная строка

	   pthread_exit(0);
 }
