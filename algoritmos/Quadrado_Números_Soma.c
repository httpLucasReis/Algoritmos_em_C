#include <stdio.h>
#include <stdlib.h>


int main(){

 int importante = 0; // Recebe o valor = 0 ---> Responsável por somar todos os números ímpares do intervalo
 int auxiliar = 1; // Recebe o valor = 1 ---> Responsável por obter o valor ímpar corrente. 1+3+5+7+9...
 int i,n; // i = contador,

 printf("Digite um valor: ");
 scanf("%i",&n);

 for(i=1;i<=n;i++){

    importante+=auxiliar; // a variável importante recebe o valor de 1 - primeiro valor ímpar.
    auxiliar+=2; // a variável auxiliar é somado a 2. Próximo número ímpar corrente.

 }


 printf("O seu quadrado eh = %i\n",importante);

 system("pause");
 return 0;
}

// PORTUGOL

/*
       QUADRADO DE 2

         AUX = 1

         IMPORTANTE = 0

         PARA I = 1, SENDO I < 2, SOME 1 A I {

         IMPORANTE = IMPORTANTE + AUXILIAR (0 = 0 + 1)

         AUXILIAR = AUXILIAR+2 (1 = 1 + 2)

         PARA I = 2, SENDO I < 2, SOME 1 A I

         IMPORANTE = IMPORTANTE + AUXILIAR (1 = 1 + 3)
         }

         AUXILIAR = AUXILIAR+2 (3 = 3 + 2) // ELA FAZ A PRÓXIMA SOMA, MAS NÃO ACRESCENTA AO VALOR DE IMPORTANTE, POIS O LAÇO ACABOU

         ESCREVAL("O quadrado é =",IMPORTANTE)


    */

