#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int x = 10;
	int *ponteiro;
	ponteiro=&x;
	
	int y=20;
	*ponteiro=y; // O ponteiro est� apontando para o endere�o de mem�ria da vari�vel x;
		
	printf("%p %p",x,y);
	printf("%d %d",x,y);
		
	
	system("pause");
	return 0;
}
