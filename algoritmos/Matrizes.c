#include <stdlib.h>
#include <stdio.h>

int main(){

  int matriz[2][3];
  int i,j;



  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
        printf("Digite um valor linha %d e coluna %d da matriz\n",i,j);
        scanf("%d",&matriz[i][j]);
    }
  }

   for (i=0;i<2;i++){
    for (j=0;j<3;j++){
        printf("O valor da linha %d e coluna %d da matriz eh %d\n",i,j,matriz[i][j]/2);

    }
  }


  system("pause");
  return 0;
}
