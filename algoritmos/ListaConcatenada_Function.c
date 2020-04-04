#include <stdlib.h>
#include <stdio.h>

struct lista{
  int valor;
  struct lista *proximo;
};

struct lista *procuraValor(struct lista *pLista, int valor){

  while( pLista != (struct lista *) 0){
      if(pLista -> valor == valor){
        return(pLista);
      } else {
        pLista = pLista -> proximo;
      }
   }

  return(struct lista *)0;
}

int main(){

 struct lista *procuraValor(struct lista *dados, int valor);
 int numb;
 struct lista m1,m2,m3;
 struct lista *resultado, *gancho = &m1;

 m1.valor = 10;
 m2.valor = 20;
 m3.valor = 30;

 m1.proximo = &m2;
 m2.proximo = &m3;
 m3.proximo = 0;

 printf("Digite um valor a ser pesquisado: ");
 scanf("%d",&numb);

 resultado=procuraValor(gancho,numb);

 if(resultado == (struct lista *)0){
    printf("Valor nao encontrado\n");
 } else {
    printf("Valor %d encontrado\n",resultado->valor);
 }

 system("pause");
 return 0;

}
