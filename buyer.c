
#include "func.h"
int buyer(void * buy)
 {
	 struct Buy bay_potok= * (struct Buy * ) buy;

	//unsigned int Nomer_potoka; 
	//unsigned int buyer_number; 
        printf("Выстроилась очередь № %i из  %i покупателей.\n",bay_potok.Nomer_potoka,bay_potok.buyer_number);
   int b=1;
   while(b<(bay_potok.buyer_number+1))
    {
   int cur_shop=rand() % 5; // выбираем магазин для покупок
   int bay=3000 + rand() % 500;
   if(Shops[cur_shop]>bay)
    {
	    pthread_mutex_lock(&mut);// блокируем магазины
     Shops[cur_shop]%=bay ; // добавляем в магазин
     pthread_mutex_unlock(&mut);
        printf(" Покупатель %i(из %i), очередь № %i.",b,bay_potok.buyer_number,bay_potok.Nomer_potoka);
        printf("Куплено %i товара. Капитал магазина №%i - %i\n",bay,cur_shop+1,Shops[cur_shop]);
	b++;
	sleep(3);
     }
    }   
 // struct _f_name_data f_name_data= * (struct _f_name_data * ) f_data;
    // статусная строка

        printf("Очередь %i закончилась.\n",bay_potok.Nomer_potoka);
	   pthread_exit(0);
 }
