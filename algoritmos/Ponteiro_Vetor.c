#include <stdlib.h>
#include <stdio.h>

int main(){

 int vetor[3] = {1, 2, 3};
 int *ponteiro = vetor;
 int i;

 for(i=0;i<3;i++){                      /* Imprimir um vetor por meio de um ponteiro */
   printf("%d\n",*ponteiro);
   ++ponteiro;
 }

 *(ponteiro+1) = 10;                   /* Atribuindo valor para uma posição do vetor por meio de um ponteiro */

 printf("%d\n",vetor[1]);


 system("pause");
 return 0;
}
