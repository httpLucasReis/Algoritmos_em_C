#include <stdlib.h>
#include <stdio.h>

int main(){

  FILE *arq;
  char linha[100];
  char *result;
  int i;

  arq - fopen("ArqGrav.txt","rt");

  if(arq == NULL){
    printf("Erro na LEITURA do arquivo");
    return 0;
  }

  i = 1;

  while(!feof(arq)){
    result = fgets(linha,100,arq);
     if(result){
        printf("Linha %d : %s",i,linha);
     }
  }

 system("pause");
 return 0;
}
