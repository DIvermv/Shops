#include "func.h"
int DowL(void * shop)
 {
    while(1)
    {
   int cur_shop=rand() % 5; // выбираем магазин для загрузки
   int down=300 + rand() % 200;
	    pthread_mutex_lock(&mut);// блокируем магазины
    Shops[cur_shop]+=down ; // добавляем в магазин
     pthread_mutex_unlock(&mut);
      //  printf("Загружено %i товара. Капитал магазина №%i - %i\n",down,cur_shop+1,Shops[cur_shop]);
	sleep(1);
    }    
   pthread_exit(0);
 }
