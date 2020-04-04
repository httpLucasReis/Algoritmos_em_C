/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui */

#include <stdlib.h>
#include <stdio.h>
#define lin 2
#define col 2

int main(){

  int matriz[lin][col];
  int i,j,cont=0;

  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
        printf("Digite um valor para linha %d, coluna %d\n",i,j);
        scanf("%d",&matriz[i][j]);
         if(matriz[i][j]> 10)
            cont+=1;

        }
     }

  printf("\nElementos da matriz maiores que 10 sao:\n");

  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
        if(matriz[i][j]> 10)
          printf("%d\n",matriz[i][j]);
        }
     }

  printf("\n");

  printf("\nTotal de elementos maiores que 10 = %d\n\n",cont);


  system("pause");
  return 0;
}
