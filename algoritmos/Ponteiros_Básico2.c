#include <stdlib.h>
#include <stdio.h>

int main(){
	
    int x = 10;
    double y = 25.555;
    char z = 'a';
    
    int *pX;
    pX = &x;

	printf("Endereco de x = %i ",*pX);
	
	system("pause");
	return 0;
}
