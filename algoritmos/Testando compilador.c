#include <stdio.h>
#include <stdlib.h>

int main(){

  float celcius,farenheit;

  printf("Digite o valor da temperatura em graus farenheit: \n");
  scanf("%f",&farenheit);

  celcius= (5.0/9.0)*(farenheit-32.0);

  printf("Conversao para celcius = %2f\n",celcius);

  system("PAUSE");
  return 0;
}
