#include <stdlib.h>
#include <stdio.h>

int somaVetor(int vetor[], const int numb){

  int soma = 0;
  int *ponteiro;
  int *const vetorFinal = vetor + numb;

  for(ponteiro = vetor; ponteiro < vetorFinal; ponteiro++){
     soma+=*ponteiro;
  }
   return soma;
}


int main(){

  int somaVetor(int vetor[], const int numb);
  int vetor[10] = {5, 5, 5 ,5 ,5 ,5 ,5 ,5 ,5 ,5};

  printf("A soma dos elementos do vetor = %d\n",somaVetor(vetor,10));

 system("pause");
 return 0;
}
