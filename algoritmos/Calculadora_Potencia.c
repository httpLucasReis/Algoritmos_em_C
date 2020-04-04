#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

  float base = 2.5;
  int exp = 2;
  float pot;

  pot=pow(base,exp); // Funcão para calcular potencia Variável=pow(Base,Expoente)

  printf("O valor da potencia = %0.2f\n",pot);

  system("pause");
  return 0;
}
