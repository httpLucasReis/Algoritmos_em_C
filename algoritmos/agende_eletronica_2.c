#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <conio.c>
#define TAM 2

struct agenda{

 char nome[30];
 char endereco[100];
 char fone[10];
 long int cep;

};

struct agenda dados[TAM];

void error(){

  printf("Ocorreu algum problema!\n");

}
void read_sched(){

  setbuf(stdin,0);

  char test;
  static int i=0;

  printf("Digite um nome: ");
  gets(dados[i].nome);

  printf("Digite um endereco: ");
  gets(dados[i].endereco);

  printf("Digite um numero de telefone: ");
  gets(dados[i].fone);

  printf("Digite um CEP: ");
  scanf("%ld",&dados[i].cep);

  setbuf(stdin,0);

  printf("\nDeseja preencher mais uma ficha? (s = sim / n = nao)\n");
  scanf("%c",&test);
  clrscr();

      if(test == 's' || 'S'){
       ++i;
        while(test == 's' || test == 'S'){
         read_sched();
         printf("\nDeseja preencher mais uma ficha? (s = sim / n = nao)\n\n");
         scanf("%c",&test);
         clrscr();
      }
   }
        clrscr();
}

void ask_sched(){

   setbuf(stdin,0);

   int i;

   char ask_name[30];
   printf("Digite uma nome para ser procurado: ");
   gets(ask_name);

      for(i=0;i<=TAM;i++){
        if(strcmp(ask_name,dados[i].nome)== 0){
            printf("Pessoa encontrada com sucesso!\n");
            printf("Endereco: %s\n",dados[i].endereco);
            printf("Fone: %s\n",dados[i].fone);
            printf("Cep: %ld\n\n",dados[i].cep);
            printf("\n\n\n");
            }
        else if(strcmp(ask_name,dados[i].nome)!= 0)
            error();

      }
}

void ask_sched_lyric(){

  int i;
  char lyric;

  printf("Digite a inicial do nome: ");
  scanf("%c",&lyric);

  for(i=0;i<=TAM;i++){
    if (lyric == dados[i].nome[0]){
      printf("Nome: %s\n",dados[i].nome);
      printf("Endereco: %s\n",dados[i].endereco);
      printf("Fone: %s\n",dados[i].fone);
      printf("Cep: %ld\n",dados[i].cep);
    }
    else if (lyric != dados[i].nome[0])
      error();

  }
   printf("\n\n\n");
}

void op_menu(){

  int opc;

  printf("1 - Inserir uma pessoa na agenda\n");
  printf("2 - Procurar uma pessoa pelo nome na agenda\n");
  printf("3 - Procurar por pessoas com uma inicial\n");
  printf("4 - Sair\n\n");
  printf("Escolha uma opcao: ");
  scanf("%d",&opc);

  setbuf(stdin,0);

  switch(opc){
   case 1 :
      clrscr();
      read_sched();
      break;

   case 2 :
      clrscr();
      ask_sched();
      break;

   case 3 :
     clrscr();
     ask_sched_lyric();
     break;

   case 4 :
     clrscr();
     exit(0);

   default :
     clrscr();
     printf("Opcao invalida\n\n");
     clrscr();
     break;

   }
  }


int main(){

 bool reset = true;

 while(reset){
  op_menu();
 }

 system("pause");
 return 0;
}
