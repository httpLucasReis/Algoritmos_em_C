#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
  struct dados{
  	char nome[50];
  	char rua[50];
  	int id;
  };	

  int i;
  struct dados registro[2]; 

  for(i=0;i<2;i++){
    printf("Pessoa: \n");
    gets(registro[i].nome);
    printf("Rua: \n");
    gets(registro[i].rua);
    printf("Numero de identificacao: \n");
    scanf("%d",&registro[i].id); 
	setbuf(stdin,0); 
  }
  
  printf("\n");
  
  for(i=0;i<2;i++){
  	printf("%s // %s // %d \n",registro[i].nome,registro[i].rua,registro[i].id);
  }

  

  system("pause");
  return 0;
}
