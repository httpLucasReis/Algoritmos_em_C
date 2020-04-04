#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

   struct endereco{
   	int casa;
   	char rua[50];
   };

   struct pessoa{
   	char nome[50];
   	int idade;
   	struct endereco ender;
   };


  struct pessoa dados;

  printf("Digite o nome da pessoa:");
  gets(dados.nome);

  printf("Digite a idade da pessoa:");
  scanf("%i",dados.idade);

  printf("Digite o numero da casa:");
  scanf("%i",dados.ender.casa);


  system("pause");
  return 0;
}
