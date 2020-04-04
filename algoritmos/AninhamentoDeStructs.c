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

  setbuf(stdin,0);

  printf("Digite a idade da pessoa:");
  scanf("%d",&dados.idade);

  setbuf(stdin,0);

  printf("Digite o numero da casa:");
  scanf("%d",&dados.ender.casa);

  setbuf(stdin,0);

  printf("Digite o nome da rua: ");
  gets(dados.ender.rua);


  printf("\nNome:%s / Idade:%d / Casa:%d / Rua:%s\n",dados.nome,dados.idade,dados.ender.casa,dados.ender.rua);

  system("pause");
  return 0;
}
