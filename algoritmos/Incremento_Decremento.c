#include <stdlib.h>
#include <stdio.h>

 /*

   INCREMENTO
   -------------> PRÉ OU PÓS
   DECREMENTO

  PRE ---> O VALOR SERÁ INCREMENTADO/DECREMENTADO NA INSTRUÇÃO QUE A VARIÁVEL ESTIVER CONTIDA.

  PÓS ---> O VALOR SERÁ INCREMENTADO/DECREMENTADO NA PRÓXIMA INSTRUÇÃO.


 */


int main(){

 int a=5;

 printf("a=%i\n",a);
 printf("a=%i\n",++a);
 printf("a=%i\n",a++);
 printf("a=%i\n",a);


  system("pause");
  return 0;
}
