#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.c>
#include <stdbool.h>
#define TAM 1

//Dados sobre uma banda

struct banda{

  char nome[50];
  char genero[50];
  short int integrantes;
  short int rank;

};

//Struct: infos
struct banda infos[TAM];

//Variáveis globais
int opc;
int rank;
char genero[50];
char nomeb[50];

int main(){


   // Funções

   void Menu(); // Menu

   void preencherDados();

   void lerRank();

   void exibirRank(int numb); // Rank - banda

   void lerGenero();

   void exibirGenero(char tipo[50]); // Genero - banda

   void lerBanda();

   void exibirBanda(char bnome[50]); // Nome - banda

   // Variáveis Locas
   bool reset = true;

   // Menu

   while(reset){

   Menu();

   switch(opc){

    case 1 :
        clrscr();
        preencherDados();
        break;
    case 2 :
        clrscr();
        lerRank();
        exibirRank(rank);
        break;
    case 3 :
        clrscr();
        lerGenero();
        exibirGenero(genero);
        break;

    case 4 :
        clrscr();
        lerBanda();
        exibirBanda(nomeb);
        break;

    case 5 :
        clrscr();
        exit(0);

    default :
        clrscr();
        printf("Opcao invalida\n\n");
        clrscr();
        break;

   }
   }


 system("pause");
 return 0;
}

void Menu(){


   printf("----------------------- Spotify 0.1 ----------------------- \n");
   printf("(1) Quais sao suas banda favoritas?  \n");
   printf("(2) Rank de bandas \n");
   printf("(3) Encontrar Banda por genero \n");
   printf("(4) Procurar bandas \n");
   printf("(5) Sair do programa\n\n");
   printf("Digite uma opcao: ");
   scanf("%d",&opc);

}

void preencherDados(){
    int i;

    setbuf(stdin,0);

    for(i=0;i<TAM;i++){
     printf("Nome da banda: ");
     gets(infos[i].nome);
     printf("Genero: ");
     gets(infos[i].genero);
     printf("Numero de integrantes: ");
     scanf("%d",&infos[i].integrantes);
     printf("Posicao da banda em um rank de 1 a 5: ");
     scanf("%d",&infos[i].rank);
     setbuf(stdin,0);
     clrscr();
   }

}

void lerRank(){
    printf("Digite um numero de 1 a 5: ");
    scanf("%d",&rank);
    clrscr();
}

void exibirRank(int numb){

  int k;

  if(numb<1 || numb>5){
    printf("opcao invalida\n\n");
  }

  else{
   for(k=0;k<TAM;k++){
     if(numb == infos[k].rank){
       printf("Banda rank %d\n",numb);
       printf("Nome: %s || Genero: %s||N-membros: %d ||Rank: %d\n",infos[k].nome,infos[k].genero,infos[k].integrantes,infos[k].rank);
        break;
     }
    }

}
}

void lerGenero(){
    setbuf(stdin,0);
    printf("Digite o genero musical: ");
    gets(genero);
    clrscr();
}

void exibirGenero(char tipo[50]){

    int k=0;
    int error=0;

    for(k=0;k<TAM;k++){
     if(strcmp(tipo,infos[k].genero)== 0){
       printf("Bandas referentes ao genero: \n");
       printf("Nome: %s ||N-membros: %d ||Rank: %d\n",infos[k].nome,infos[k].integrantes,infos[k].rank);
       error++;
     }
    }

    if(error==0){
      printf("Nenhuma banda encontrada\n\n");
    }

}

void lerBanda(){
    setbuf(stdin,0);
    printf("Digite nome da banda: ");
    gets(nomeb);
    clrscr();
}

void exibirBanda(char bnome[50]){

    int k=0;
    int error=0;

    for(k=0;k<TAM;k++){
     if(strcmp(bnome,infos[k].nome)== 0){
       printf("Banda encontrada: \n");
       printf("Nome: %s || Genero: %s||N-membros: %d ||Rank: %d\n",infos[k].nome,infos[k].genero,infos[k].integrantes,infos[k].rank);
       error++;
     }
    }
    if(error==0){
        printf("Nenhuma banda encontrada\n\n");
    }

}

