#include <stdio.h>
#include <stdlib.h>


void main(){

  int i,n;

  printf("Digite um numero natural: ");
  scanf("%u",&n);                          // números inteiros em base decimal sem sinal.

  for(i=2;i<=n;i++){

     if(n%i==0) break;

     }

     if(i==n)
        printf("O numero eh primo \n");
     else
        printf("O numero não eh primo \n");


  system("pause");
}
