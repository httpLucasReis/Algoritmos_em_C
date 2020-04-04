#include <stdlib.h>
#include <stdio.h>

int main(){

  int numero,contador;

  numero=5;

  for(contador=1;contador<=10;contador++){

    printf("%i x %i = %i\n",numero,contador,contador*numero);

  }

  system("pause");
  return 0;
}


/*int main(){

  int a = 10;

  do{

    printf("O valor de a = %i\n",a);

  } while(a<10);


  system("pause");
  return 0;

}
*/

/*int main(){

  int a = 9;

  while(a<10){

    printf("O valor de a = %i\n",a);

  }

  system("pause");
  return 0;

}
*/
