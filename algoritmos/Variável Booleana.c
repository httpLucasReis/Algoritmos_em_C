#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> //Biblioteca nescessária para utilizar variáveis booleanas

int main(){

  bool a=true, b=false;

  if(a){
    printf("A eh verdadeiro\n");
  }

  if(b){
    printf("B eh verdadeiro\n");
  }
  else
    printf("B eh falso\n");

  // comparando uma falsidade
  if(!b){ // ! = senão
    printf("B eh falso\n");
  }

  system("pause");
  return 0;
}

