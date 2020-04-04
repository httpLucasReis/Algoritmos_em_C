#include <stdlib.h>
#include <stdio.h>

int main(){

	float preco,desconto,total;

	preco = 10;

	//desconto = (5/100.0)*preco;

	//total = preco - desconto;

	//printf("Preco Final = %f",total);

	preco*=(1+0.05);

    total=preco;

    printf("Preco Final = %f\n",total);

	system("pause");
	return 0;

}
