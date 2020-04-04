#include <stdlib.h>
#include <stdio.h>

int main(){

  int cifra;
  int numero=-123;

 if(numero>=0){
  do{
     cifra=numero%10;
     printf("%d",cifra);
     numero/=10;
  }while(numero>0);
  printf("\n");
  }

  else{
      numero*= -1;
      printf("-");
     do{
      cifra=numero%10;
      printf("%d",cifra);
      numero/=10;
     }while(numero>0);
     printf("\n");
  }

 system("pause");
 return 0;
}

