#include <stdlib.h>
#include <stdio.h>

int main(){

 void teste(void);

 teste();  // Cada vez em que a função é chamada uma nova variável local é criada.
 teste();
 teste();
 teste();

 system("pause");
 return 0;
}

void teste(void){

 int VariavelLocalAutomatica = 2;

 VariavelLocalAutomatica*=2;

 static int VariavelLocalEstatica = 2;

 VariavelLocalEstatica*=2;

 printf("%d\n",VariavelLocalAutomatica);
 printf("%d\n",VariavelLocalEstatica);

}
