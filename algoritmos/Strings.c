#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){

 char nome[255];

 //limpando o buffer
 setbuf(stdin,0);

 //L� a string
 fgets(nome,255,stdin);

 //Limpa as casas n�o utilizadas

 nome[strlen(nome)+1]= '\0';

 // Imprime a string

 printf("A palavra eh %s:",nome);


 system("pause");
}
