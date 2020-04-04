#include <stdlib.h>
#include <stdio.h>

void ordenar(int *vt, int tam){
  int i,j,aux;

  for(i=0;i<tam;i++){
    printf("%d",vt[j]);
  }

}


int main(){

 int vetor[5] = {5,3,1,2,4};
 int i;

 ordenar(vetor,5);

 for(i=0;i<5;i++){
    printf("%d\n",vetor[i]);
 }

 system("pause");
 return 0;
}

