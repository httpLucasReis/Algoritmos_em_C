#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    // Respons�vel por alimentar a rand de forma diferente.
    srand((unsigned)time(NULL));

    // Vari�vel que recebe o resto da divis�o por 3 (aleat�rio de 0 a 2).
    int random=rand()%3;

    printf("Random = %i\n",random);

    // Vari�vel que recebe o resto da divis�o por 5 (aleat�rio de 1 a 5).
    int random2=(rand()%5)+1;

    printf("Random 2 = %i\n",random2);

  system("pause");
  return 0;
}
