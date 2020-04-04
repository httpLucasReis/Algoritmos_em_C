#include <stdlib.h>
#include <stdio.h>

float forca_atrito(float u, float n){

   float forca_atrito_c;

   forca_atrito_c= u*n;

   return forca_atrito_c;
}



int main(){

 float resultado;

 resultado=forca_atrito(0.4,100);
 printf("A forca de atrito eh %.2f",resultado);

 system("pause");
 return 0;
}
