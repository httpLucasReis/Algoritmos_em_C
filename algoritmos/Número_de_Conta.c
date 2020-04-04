#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int unsigned numb,digit,numbax;
	
	printf("Digite um numero: ");
	scanf("%i",&numb);
	
	numbax=numb;
	
	while(numb!=0){
		
		digit+=(numb%10);
		numb/=10;
		
	}
	
	printf("Numero de conta = %i-%i\n",numbax,digit%10);
	
	system("pause");
	return 0;
}
