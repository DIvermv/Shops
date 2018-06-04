
#include "func.h"
int main (int argc, char *argv[])
{
    //инициализируем магазины
     struct Buy buyer_pot;
	srand(time(NULL));
    for(int i = 0; i < 5; i++) {
    Shops[i]= 1000 + rand() % 200;
        printf("%s%i - %i\n","Уставной капитал магазина №",i+1,Shops[i]);
    }
    pthread_t Dwl_tid; // идентификатор потока загрузки товаров

    pthread_t bay_tid[3]; // идентификатор потока загрузки товаров
    pthread_attr_t Dwl_attr; // атрибуты потока копирования
    pthread_attr_init(&Dwl_attr);
    pthread_mutex_init(&mut,NULL);// инициализируем мьютекс
    pthread_create(&Dwl_tid,&Dwl_attr,DowL,NULL);// создаем  поток загрузчика
   
    for( int i=1;i<4;i++)
    {
    buyer_pot.Nomer_potoka=i;
    buyer_pot.buyer_number=1 + rand() % 8; // количество покупателей

       // printf("Отправлена очередь № %i из  %i покупателей.\n",buyer_pot.Nomer_potoka,buyer_pot.buyer_number);
    pthread_create(&bay_tid[0],NULL,buyer,&buyer_pot);
    sleep(1);
    }
    pthread_mutex_destroy(&mut);
    pthread_join(bay_tid[0],NULL);// ждем завершения очередей
    pthread_join(bay_tid[1],NULL);
    pthread_join(bay_tid[2],NULL);
  return 0;
}
