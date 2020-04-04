#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char palavra[255];

  setbuf(stdin,0);

  fgets(palavra,255,stdin);

  palavra[strlen(palavra)+1] = '\0';

  printf("A palavra digita eh %s\n",palavra);

  system("pause");
  return 0;
}
