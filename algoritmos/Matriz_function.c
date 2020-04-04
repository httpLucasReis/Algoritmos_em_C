#include <stdlib.h>
#include <stdio.h>

void imprimirf(int matriz[][3]){  // Nescessário informar pelo menos o número de colunas da matriz ou linhas e colunas
  int i,j;

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        matriz[i][j]=matriz[i][j]*2;
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }


}

int main(){

  int matriz[3][3] = {9,8,7,6,5,4,3,2,1};
  int i,j;

  imprimirf(matriz);

 system("pause");
 return 0;
}
