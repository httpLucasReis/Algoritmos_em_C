/* Crie uma fun��o em linguagem C que receba 3 n�meros e retorne o maior valor, use a fun��o da quest�o 4. */

#include <stdlib.h>
#include <stdio.h>


int Maior3(int vetor[], int tam){
 int maior;
 int i;

 maior=vetor[0];

 for(i=1; i<tam;i++){
     if (maior<vetor[i]){
        maior=vetor[i];
     }
 }

  return maior;
}

int main(){

  int a[3]={40,20,75};
  int resultado;

  resultado=Maior3(a,3);

  printf("%d\n",resultado);

 system("pause");
 return 0;
}
