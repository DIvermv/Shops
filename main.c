
#include "func.h"
int main (int argc, char *argv[])
{
    //инициализируем магазины
  //  struct Shops shops;
     struct Buy buyer_pot;
   // int Shops;
	srand(time(NULL));
    for(int i = 0; i < 5; i++) {
    Shops[i]= 1000 + rand() % 200;
        printf("%s%i - %i\n","Уставной капитал магазина №",i+1,Shops[i]);
    }
    pthread_t Dwl_tid; // идентификатор потока загрузки товаров

    pthread_t bay_tid[3]; // идентификатор потока загрузки товаров
   // pthread_t Status_tid; // идентификатор потока статуса копирования
    pthread_attr_t Dwl_attr; // атрибуты потока копирования
    //pthread_attr_t Status_attr; // атрибуты потока статуса копирования
    pthread_attr_init(&Dwl_attr);
    //pthread_attr_init(&Status_attr);
    //f_name_data.Sourse_Dir=Sourse_Dir;// назначаем аргументы
    //f_name_data.Dest_Dir=Dest_Dir;
    //f_name_data.File_Name=File_Name;
    //f_name_data.copy_progress=30;
    pthread_mutex_init(&mut,NULL);
    pthread_create(&Dwl_tid,&Dwl_attr,DowL,NULL);// создаем новый поток
   
    for( int i=1;i<4;i++)
    {
    buyer_pot.Nomer_potoka=i;
    buyer_pot.buyer_number=1 + rand() % 8;

       // printf("Отправлена очередь № %i из  %i покупателей.\n",buyer_pot.Nomer_potoka,buyer_pot.buyer_number);
    pthread_create(&bay_tid[0],NULL,buyer,&buyer_pot);
    sleep(1);
    }
    pthread_join(bay_tid[0],NULL);
    pthread_join(bay_tid[1],NULL);
    pthread_join(bay_tid[2],NULL);
  return 0;
}
