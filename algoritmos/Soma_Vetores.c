#include <stdlib.h>
#include <stdio.h>
//#define TAM 2

void main(){

 float vetor[3],media; // Definindo um vetor de 3 colunas
 int i;

 for(i=0;i<3;i++){
    printf("Digite um numero para posicao %i do vetor\n",i);
    scanf("%f",&vetor[i]);
    media=media+vetor[i];
 }

 for(i=0;i<3;i++){
    printf("\nO valor da posicao = %f \n\n",vetor[i]);
 }

 media=media/3;

 printf("A media dos valores eh = %0.2f\n",media);

 system("pause");
}
