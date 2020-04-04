#include <stdlib.h>
#include <stdio.h>

int gVariavelGlobal = 2;

int main(){

 void teste(void);

 printf("%d Global\n",gVariavelGlobal);
 // Cada vez em que a função é chamada uma nova variável local é criada.
 teste();
 teste();

 system("pause");
 return 0;
}

void teste(void){

 int VariavelLocalAutomatica = 2;

 VariavelLocalAutomatica*=2;

 static int VariavelLocalEstatica = 2; // Static o valor é reaproveitado

 VariavelLocalEstatica*=2;

 gVariavelGlobal*=2;

 printf("%d Global\n",gVariavelGlobal);
 printf("%d Automatica\n",VariavelLocalAutomatica);
 printf("%d Estatica\n",VariavelLocalEstatica);

}
