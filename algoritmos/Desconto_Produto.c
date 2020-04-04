#include <stdlib.h>
#include <stdio.h>

int main(){
	
	float preco,valor;
		
	do{ 
	
	  printf("Digite o valor do produto: ");
	  scanf("%f",&preco);
	
	  
	  if(preco<50){  
	   
	   preco*=(1-0.05);  
	   valor+=preco;
      
	  }
      
       else if(preco>=50 && preco<=100){
      	
      	preco*=(1+0.1);
      	valor+=preco;
      	
	  }
	  
	  else if(preco>100 && preco <=200){
	  	
	  	preco*=(1-0.15);
	  	valor+=preco;
	  	
	  }
	
	  else{
	  
	    preco*=(1-0.2);
		valor+=preco;
		 		
	 }
	
	} while(preco!=0);
	
	printf("O valor total a pagar = %0.2f\n",valor);

	
   system("pause");
   return 0;	

}	
 
