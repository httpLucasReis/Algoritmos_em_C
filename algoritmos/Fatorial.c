#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*int main(){

  int fatorial,cont;

  printf("Digite um numero para obter o seu respectivo fatorial: \n");
  scanf("%i",&fatorial);

  cont=fatorial; // contador recebe o valor de fatorial (Define quantos loop iram acontecer)

  while(cont>1){ // Enquanto 5 > 1 faça
   --cont;  // subs -1 do contador
   fatorial*=cont; // Fórmula fatorial = fatorial*(fatorial-1) enquanto o fatorial > 1
  }

  printf("%i\n",fatorial);

  getch();
  return 0;

}
*/

int main(){

   int fatorial,resp;

   printf("Digite um numero para obter o seu respectivo fatorial: \n");
   scanf("%i",&fatorial);

   resp=1;

   for(fatorial;fatorial>=1;--fatorial){ // --fatorial só retirar o valor de 1 quando o loop termina de rodar
    resp*=fatorial;                       //  Fatorial = 5 , loop 1, --fatorial
   }                                      //  Fatorial = 4 , loop 2, --fatorial
                                          //  Fatorial = 3 , loop 3, --fatorial
   printf("%i\n",resp);                   //  Fatorial = 2 , loop 4, --fatorial
                                          //  Fatorial = 2 , loop 5, --fatorial*
   getch();
   return 0;

}
