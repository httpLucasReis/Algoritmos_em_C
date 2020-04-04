#include <stdlib.h>
#include <stdio.h>

int main(){

  struct info{
    int id;
    char nome[40];
    char endereco[40];
  };
  
  
  struct info registro,registro2 = {424105,"Manoel Lucas","Sao Luis - ma"};

  
  registro2 = registro;
  
  
  printf("id:%d \nnome: %s \nendereco: %s\n",registro.id,registro.nome,registro.endereco); 

  system("pause");
  return 0;
}
