#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char palavra[20] = "manoel"; // String da palavra.
  char vogais[11] = "aeiouAEIOU"; // 11, pois inclui-se o '\o' ---> string de compara��o.
  int i,j;
  int tam = strlen(palavra),tam2 = strlen(vogais); // tam -> palavra / tam2 -> string de compara��o
  int total = 0;

  for(i=0;i<tam;i++){                                // Segura o �ndice. Pode-se dizer que ele segura a letra.
    for(j=0;j<tam2;j++){                             // For respons�vel ler a string de compara��o.
        if(palavra[i]==vogais[j]){                   // If ---> Se letra "?" estiver dentro da string de compara��o.
             total++;                                // Adiciona-se 1 a vari�vel total 1.
              break;                                 // Depois que letra foi encontrada n�o � mais nescess�rio analisar a string de compara��o,
                                                     // ent�o a pr�xima letra deve ser avaliada.
        }
     }
  }

  printf("Total vogais = %d\n",total);

 system("pause");
 return 0;
}
