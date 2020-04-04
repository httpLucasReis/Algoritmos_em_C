#include <stdlib.h>
#include <stdio.h>

int main(){

  struct lista{

      int valor;
      struct lista *pT;

  };

  struct lista l1,l2,l3;
  struct lista *gancho = &l1;

  l1.valor=10;
  l2.valor=20;
  l3.valor=30;

  l1.pT = &l2;
  l2.pT = &l3;
  l3.pT = (struct lista*)0;

  while(gancho != (struct lista*)0){

        printf("%d\n",gancho->valor);
        gancho = gancho -> pT;

  }

 system("pause");
 return 0;
}
