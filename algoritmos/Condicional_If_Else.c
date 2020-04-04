#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  float nota1,nota2,media;
  int cont;
  
  for(cont=1; cont<=10; cont=cont+1){
  printf("Digite duas notas separadas por espaço: \n");
  scanf("%f %f",&nota1,&nota2);
  
  media=(nota1+nota2)/2.0;
   
  printf("Media do aluno = %f\n",media);
  
  if(media>=7){
    printf("Nota acima da media\n");
    printf("\n");
   }
  
  else{
   printf("Nota abaixo da media\n");
   printf("\n");
  }
  
 }
  
  system("PAUSE");	
  return 0;
}
