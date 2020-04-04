#include <stdio.h>
#include <stdlib.h>

/* �Dados tr�s n�meros verificar se eles podem representar as medidas dos lados de um 
 tri�ngulo e, se puderem, classificar o tri�ngulo em equil�tero, is�sceles ou escaleno�.
 Para codificar o programa, devemos lembrar das seguintes defini��es:

� Para que tr�s n�meros representem os lados de um tri�ngulo � necess�rio que cada um deles seja menor que a 
soma dos outros dois.
� Um tri�ngulo � equil�tero se tem os tr�s lados iguais, is�sceles se tem
apenas dois lados iguais e escaleno se tem todos os lados distintos. */

int main()
{
  
  float a,b,c;

  printf("Informe os lados de um triangulo (Digitos separados por espa�o)\n");
  scanf("%f %f %f",&a,&b,&c);
  
  if(a<=b+c && b<=a+c && c<=b+a){
    printf("Valores correspondem a um tri�ngulo\n");
     
     if(a==b && b==c)
      printf("Triangulo equilatero\n");
     
     else
        if(a!=b && b!=c && a!=c) 
          printf("Triangulo escaleno\n");
     else
          printf("Triangulo isosceles\n"); //if (a==b || a==c || b==c)
     }    
  
  else
    printf("Valores n�o correspondem a um tri�ngulo\n");
  
  system("PAUSE");	
  return 0;
}
