#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

  char str1[20] = "Manoel";    // Basta seguir a lógica até que o laço se quebre.
  char c;                      // A subtração com o contador i faz com que a string se invertar --> meio <---
  int i,tam=strlen(str1);      // A subtração com o -1 é para anular o '\0'

  for(i=0;i<tam/2;i++){        // tam/2 - o caractere do meio nunca vai ser alterado
    c=str1[i];                 // auxiliar que recebe o caractere que está no índice 0
    str1[i]=str1[tam-1-i];     // o último caractere é atribuído ao índice 0
    str1[tam-1-i]=c;           // o último caractere recebe o caractere que estava no índice 0
  }

  printf("A palavra invertida fica %s\n",str1);

 system("pause");
 return 0;
}
