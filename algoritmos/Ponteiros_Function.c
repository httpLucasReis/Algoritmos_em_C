#include <stdlib.h>
#include <stdio.h>

int main(){

  void valor1(int x);
  void valor2 (int *pX);
  int numb = 1;
  int *pont = &numb;

  //valor1(numb);
  valor2(pont);

  printf("%d\n",numb);

 system("pause");
 return 0;
}

void valor1(int x){

    ++x;
}

  void valor2 (int *pX){

   ++*pX;
}
