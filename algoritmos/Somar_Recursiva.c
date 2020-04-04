#include <stdlib.h>
#include <stdio.h>

int main(){

 int somaat(int n);

 int numero;

 printf("Digite um numero: ");
 scanf("%d",&numero);

 numero=somaat(numero);

 printf("O resultado eh = %d\n ",numero);

 system("pause");
 return 0;
}

int somaat(int n){

  int resultado;

  if(n==1){
    return 1;
  }

  else {
    resultado=n+somaat(n-1);
  }

}
