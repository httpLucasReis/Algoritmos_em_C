/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
  ros. O programa deve executar os seguintes passos:

  (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
  (b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições ˜
      A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
  (c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
  (d) Mostre na tela cada valor do vetor A, um em cada linha */


#include <stdlib.h>
#include <stdio.h>
#define TAM 6

int main(){

  int vetor[TAM];
  int i,soma=0;

  for(i=0;i<TAM;i++){
    printf("Digite um valor para a %d coluna do vetor: ",i);
    scanf("%d",&vetor[i]);
  }

  printf("\n");

  soma+=vetor[0]+vetor[1]+vetor[5];
  printf("A soma dos valores na coluna 0, coluna 1 e coluna 5 = %d\n",soma);

  vetor[4]=100;

  printf("\n");

  for(i=0;i<TAM;i++){
    printf("O elemento de vetor na coluna %d eh = %d\n",i,vetor[i]);
  }

  system("pause");
  return 0;
}
