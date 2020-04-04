#include <stdlib.h>
#include <stdio.h>

void Ordenar(int vet[], int tam){
 int i,j,aux;

 for(i=0; i<tam; i++){
        for(j=i+1; j<tam;j++){
            if(vet[i]>vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;

            }
        }
  }
}

int main(){

  int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
  int i;

  Ordenar(vetor,10);

  for(i=0;i<10;i++){
  printf("%d\n",vetor[i]);
  }


 system("pause");
 return 0;
}
