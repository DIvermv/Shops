
#include "func.h"
#include "stdlib.h"
#include "time.h"
int main (int argc, char *argv[])
{
    unsigned int shops[5];	
    //инициализируем магазины
    srand(time(NULL));
    for(int i = 0; i < 5; i++) {
    shops[i]= 1000 + rand() % ((1200 + 1) - 1000);//A + rand() % ((B + 1) - A)
        printf("%i\n",shops[i]);
    }
  return 0;
}
