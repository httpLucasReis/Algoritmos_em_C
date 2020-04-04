/* Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4. */

#include <stdlib.h>
#include <stdio.h>


int Maior3(int v1, int v2, int v3){
    int result;

  if(v1>v2 && v1>v3){
    result=v1;
  }
  else if(v2>v1 && v2>v3){
    result=v2;
  }
  else if(v3>v1 && v3>v2){
    result=v3;
  }

  return result;
}


int main(){

  int a = 1;
  int b = 4;
  int c = 3;
  int resultado;

  resultado=Maior3(a,b,c);

  printf("%d\n",resultado);

 system("pause");
 return 0;
}

