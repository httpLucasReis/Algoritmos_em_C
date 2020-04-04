#include <stdio.h>
#include <stdlib.h>

/* “Dados três números verificar se eles podem representar as medidas dos lados de um 
 triângulo e, se puderem, classificar o triângulo em equilátero, isósceles ou escaleno”.
 Para codificar o programa, devemos lembrar das seguintes definições:

• Para que três números representem os lados de um triângulo é necessário que cada um deles seja menor que a 
soma dos outros dois.
• Um triângulo é equilátero se tem os três lados iguais, isósceles se tem
apenas dois lados iguais e escaleno se tem todos os lados distintos. */

int main()
{
  
  float a,b,c;

  printf("Informe os lados de um triangulo (Digitos separados por espaço)\n");
  scanf("%f %f %f",&a,&b,&c);
  
  if(a<=b+c && b<=a+c && c<=b+a){
    printf("Valores correspondem a um triângulo\n");
     
     if(a==b && b==c)
      printf("Triangulo equilatero\n");
     
     else
        if(a!=b && b!=c && a!=c) 
          printf("Triangulo escaleno\n");
     else
          printf("Triangulo isosceles\n"); //if (a==b || a==c || b==c)
     }    
  
  else
    printf("Valores não correspondem a um triângulo\n");
  
  system("PAUSE");	
  return 0;
}
