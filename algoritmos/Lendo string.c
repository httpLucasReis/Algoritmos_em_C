#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

 char nome[255];

 printf("Digite um nome\n");
 gets(nome);

 printf("O nome digita eh %s\n",nome);


 system("pause");
 return 0;
}
