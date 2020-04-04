#include <stdio.h>
#include <stdlib.h>

int main()
{
  int base,altura,area;
  
  printf("Digite o valor da base:");
  scanf("%i",&base); // O comando scanf identifica a tecla pressionada pelo usuário
                     // scanf("Tipo de dado que o comando irá receber",&VARIÁVEL)
  
  printf("Digite o valor da altura:");
  scanf("%i",&altura);   
    
  area=base*altura;
  
  printf("O valor da area do retangulo e = %i\n",area);    
   
  system("PAUSE");
  return 0;      
}
