#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int d,m,a,d_m,avl;
	
	printf("Digite o dia/mes/ano do seu aniversario: \n");
	scanf("%i/%i/%i",&d,&m,&a);
	
	//printf("Digite o dia de seu nascimento \n");
	//scanf("%i ",&d);
	
	//printf("Digite o mes \n");
	//scanf("%i ",&m);
	
	//printf("Digite o ano \n");
	//scanf("%i",&a);
		
	d_m=(d*100)+m+a; 
	
	avl = (( d_m/100) + ( d_m%100 ))%5;
	
	
	switch(avl){
		case 0 :
			printf("Parabens!! Voce eh timido\n");
			break;
		
		case 1 :
			printf("Parabens!! Voce eh sonhador\n");
			break;
		
		case 2 :
			printf("Parabens!! Voce eh paquerador\n");
			break;		
		
		case 3 :
			printf("Parabens!! Voce eh atraente\n");
			break;
		
		case 4 :
			printf("Parabens!! Voce eh irresistivel\n");
			break;
		
		default :
		    printf("Fora do intervalo")	;
		    break;
		
	} 
	
	
	system("pause");
	return 0;
}
