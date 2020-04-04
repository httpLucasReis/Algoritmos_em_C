#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char str1[20] = "Hello Word";
  char str2[20];

  // str1 = str2 // ERRADO

  int i;

  for(i=0;str[i]!='\0';i++){  // Cópia do conteúdo até seja encontrado '\0' na string 2
    str2[i]=str1[i];
  }

  str2[i]='\0'; // Fecha a string2

  printf("%s",str2);

  system("pause");
  return 0;
}
