#include <stdlib.h>
#include <stdio.h>

int main(){

 int fatorial(int numero);
 int numb,result;

 printf("Digite um numero: ");
 scanf("%d",&numb);

 result=fatorial(numb);

 printf("O fatorial do numero eh = %d\n",result);

 system("pause");
 return 0;
}

int fatorial(int numero){

  int resultado;

  if(numero==0){
    return resultado=1;
  } else {
    return resultado=numero*(numero-1);
  }

}
