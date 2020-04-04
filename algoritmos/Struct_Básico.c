#include <stdlib.h>
#include <stdio.h>

int main(){

  struct info{
    int id;
    char nome[40];
    char endereco[40];
  }; // sempre leva um ponte e vírgula no final da declaração dos componetes da estrutura.
  
  
  struct info registro,registro2 = {424105,"Manoel Lucas","Sao Luis - ma"}; // Possibilidade de atribuir dados semelhante aos arrays;

  
  registro2 = registro; // pode-se copiar uma struct para outra struct caso estas sejam do mesmo tipo.
  
  
  printf("id:%d \nnome: %s \nendereco: %s\n",registro.id,registro.nome,registro.endereco); // como refênciar uma struct

  system("pause");
  return 0;
}
