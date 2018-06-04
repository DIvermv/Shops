
#include "func.h"
int main (int argc, char *argv[])
{
    //инициализируем магазины
  //  struct Shops shops;
   // int Shops;
	srand(time(NULL));
    for(int i = 0; i < 5; i++) {
    Shops[i]= 1000 + rand() % 200;
        printf("%s%i - %i\n","Уставной капитал магазина №",i+1,Shops[i]);
    }
    pthread_t Dwl_tid; // идентификатор потока загрузки товаров
   // pthread_t Status_tid; // идентификатор потока статуса копирования
    pthread_attr_t Dwl_attr; // атрибуты потока копирования
    //pthread_attr_t Status_attr; // атрибуты потока статуса копирования
    pthread_attr_init(&Dwl_attr);
    //pthread_attr_init(&Status_attr);
    //f_name_data.Sourse_Dir=Sourse_Dir;// назначаем аргументы
    //f_name_data.Dest_Dir=Dest_Dir;
    //f_name_data.File_Name=File_Name;
    //f_name_data.copy_progress=30;
    //pthread_mutex_init(&mut,NULL);
    pthread_create(&Dwl_tid,&Dwl_attr,DowL,NULL);// создаем новый поток
 // pthread_create(&Status_tid,&Status_attr,Copy_Progress,&f_name_data);
    pthread_join(Dwl_tid,NULL);
  return 0;
}
