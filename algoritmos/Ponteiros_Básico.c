#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int x = 10;
	int *ponteiro;
	ponteiro=&x;
	
	int y=20;
	*ponteiro=y; // O ponteiro está apontando para o endereço de memória da variável x;
		
	printf("%p %p",x,y);
	printf("%d %d",x,y);
		
	
	system("pause");
	return 0;
}
