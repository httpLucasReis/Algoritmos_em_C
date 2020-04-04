#include <stdio.h>

int main () {

	float pes, alt, imc = 0;
	char nome[20];

	printf("Diga o seu nome:\n");
	scanf("%s",&nome);

	printf("Agora diga o seu peso:\n");
	scanf("%f",&pes);

	printf("Por ultimo diga a sua altura:\n");
	scanf("%f",&alt);

    imc = pes /(alt*alt);

    printf("\nO seu imc eh %.2f\n",imc);

    printf("Estado:");

	if(imc < 16){
	  printf("Magreza grave\n");
	}

	else if(imc >= 16 && imc <= 17){
	  printf("Magreza moderada\n");
	  }

	else if(imc >= 17 && imc<= 18.5){
	  printf("Magreza leve\n");
    }

	else if(imc >= 18.5 && imc <= 25){
	  printf("Saudavel\n");
	}

	else if(imc >=  25 && imc <= 30){
	  printf("Sobrepeso\n");
    }

	else if(imc >= 30 && imc <= 35){
	  printf("Obesidade Grau 1\n");
    }

    else if(imc >= 35 && imc <= 40){
	  printf("Obesidade Grau 2\n");
    }
	else if(imc > 40){
	  printf("Obesidade Grau 3 (GRAVE)\n");
    }

	return 0;

}





