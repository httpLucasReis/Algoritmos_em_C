#include <stdio.h>
#include <stdlib.h>


void main(){

  int i,n;

  printf("Digite um numero natural: ");
  scanf("%u",&n);                          // n�meros inteiros em base decimal sem sinal.

  for(i=2;i<=n;i++){

     if(n%i==0) break;

     }

     if(i==n)
        printf("O numero eh primo \n");
     else
        printf("O numero n�o eh primo \n");


  system("pause");
}
