#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> //Biblioteca nescess�ria para utilizar vari�veis booleanas

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
  if(!b){ // ! = sen�o
    printf("B eh falso\n");
  }

  system("pause");
  return 0;
}

