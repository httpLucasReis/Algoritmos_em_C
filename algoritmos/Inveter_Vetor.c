#include <stdlib.h>
#include <stdio.h>

int inveterv(int vetor[],int tam){
    int i;
    int aux;

    for(i=0;i<tam/2;i++){
      aux=vetor[i];
      vetor[i]=vetor[tam-1-i];
      vetor[tam-1-i]=aux;
    }


  for(i=0;i<tam;i++){
    printf("%d\n",vetor[i]);
  }
}

int main(){

 int inveterv(int vetor[],int tam);
 int vetor[6]={1,2,3,4,5,6};
 int i;

 printf("Os valores invertidos: \n");

 inveterv(vetor,6);

 system("pause");
 return 0;
}
