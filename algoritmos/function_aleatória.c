#include <stdlib.h>
#include <stdio.h>
int soma(int x, int y){
  int soma;
  soma = x + y;
  return soma;
}
int main(){
  int n1,n2;
  printf("Digite um numero: ");
  scanf("%d",&n1);
  printf("Digite um outro numero: ");
  scanf("%d",&n2);

  printf("A soma dos numeros eh: %d ",soma(n1,n2));





 system("pause");
 return 0;
}
