#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  FILE *arq;
  char str[100];
  char result;

  arq = fopen("ArqGrav.txt","wt"); // fopen 1 - nome do arquivo+txt 2 - wt gravar ou rt ler

  if(arq == NULL){
    printf("Problemas na CRIACAO do arquivo\n");
    return 0;
  }

  strcpy(str,"linha de tese");
  result = fputs(str,arq);

   if(result == EOF){
     printf("Erro na Gravacao");
   }

  fclose(arq);


 system("pause");
 return 0;
}
