#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    // Responsável por alimentar a rand de forma diferente.
    srand((unsigned)time(NULL));

    // Variável que recebe o resto da divisão por 3 (aleatório de 0 a 2).
    int random=rand()%3;

    printf("Random = %i\n",random);

    // Variável que recebe o resto da divisão por 5 (aleatório de 1 a 5).
    int random2=(rand()%5)+1;

    printf("Random 2 = %i\n",random2);

  system("pause");
  return 0;
}
