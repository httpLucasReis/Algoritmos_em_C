#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  //strlen() ---> Tamanho da string

    char palavra[20]= "Manoel";
    int contador = strlen(palavra);

    printf("%d\n\n",contador);

  //strcpy() ---> Copiar uma string

    char palavra2[20] = "Bolacha";
    char palavra3[20];

    strcpy(palavra3,palavra2); // strcpy(cópia,original);

    printf("%s\n\n",palavra3);

  //strcat() ---> Concatenar duas strings

   char palavra4[20] = "Bi";
   char palavra5[20] = "xo";

   strcat(palavra4,palavra5); // strcat(palavra1,palavra2) ----> Palavra 1 + Palavra 2

   printf("%s\n\n",palavra4);

  //srtcmp() ---> Comparar Strings

  char palavra6[20] = " bola";
  char palavra7[20] = " Bola";

  if(strcmp(palavra6,palavra7) == 0)      // == 0 ---> Strings iguais, != 0 ---> Strings diferentes
    printf("As strings sao iguais\n");
  else
    printf("As strings sao diferentes\n\n");



 system("pause");
 return 0;
}
