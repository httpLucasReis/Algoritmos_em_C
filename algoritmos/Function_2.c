#include <stdlib.h>
#include <stdio.h>

int main(){

 float Calcular_area_retangulo(float base, float altura);

 float area = Calcular_area_retangulo(10.0, 20.0);

 printf("Area = %f\n",area);

 system("pause");
 return 0;
}

float Calcular_area_retangulo(float base, float altura){

  float area = base*altura;

  return area;
}
