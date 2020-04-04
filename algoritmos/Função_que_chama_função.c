#include <stdlib.h>
#include <stdio.h>

int main(){

 float somaDeDigitos(float num1, float num2);
 float a,b,soma;

 printf("Digite dois numeros: ");
 scanf("%f %f",&a,&b);

 soma=somaDeDigitos(a,b);

 printf("Soma = %f\n",soma);

 system("pause");
 return 0;
}

float somaDeDigitos(float num1, float num2){

 float ValorAbsoluto(float x);

 if(num1<0){
    num1=ValorAbsoluto(num1);
 }

 if(num2<0){
    num2=ValorAbsoluto(num2);
 }

 return num1+num2;

}

float ValorAbsoluto(float x){

  return x * -1;
}
