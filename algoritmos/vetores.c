#include <stdlib.h>
#include <stdio.h>
#define TAM 3

void main(){

  int i;
  float vetor[TAM],media; // Lembrando o numero dentro das chaves indica [Colunas].
                          // O �ltimo �ndice da vetor � igual a Numero de colunas - 1.

  //Atribuir valores a um vetor (Manualmente)

  /*vetor[0]=2;
  vetor[1]=4;
  vetor[2]=6;
  vetor[3]=8;*/

  //Atribuir valores a um vetor (La�o de repeti��o)

  printf("Digite valores para o vetor: \n");

  for(i=0;i<TAM;i++){
    scanf("%f",&vetor[i]);
  }


  // Imprimir os valores de um vetor (La�o de repeti��o);

  for(i=0;i<TAM;i++){
    printf("Vetor(%i): %f\n",i,vetor[i]);
  }

  system("pause");
}
