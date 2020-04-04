#include <stdlib.h>
#include <stdio.h>

int main(){


   unsigned int sorteio,i;

   for(i=1;i<=5;i++){

   sorteio=rand()%2+1;

   printf("O numero sorteado foi %i\n",sorteio);

   }

  system("pause");
  return 0;
}
