#include <stdlib.h>
#include <stdio.h>
#define Inicio int main(){
#define Fim }	
#define diga printf
#define quad(x) ((x)*(x))

Inicio
	
	int quadrado;
	
	diga("Ola mundo\n");
	
	quadrado=quad(2+5);
	
	diga("%d",quadrado);
		
	system("pause");
	return 0;
Fim
