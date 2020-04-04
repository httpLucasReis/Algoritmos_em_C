#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char palavra[20] = "manoel"; // String da palavra.
  char vogais[11] = "aeiouAEIOU"; // 11, pois inclui-se o '\o' ---> string de comparação.
  int i,j;
  int tam = strlen(palavra),tam2 = strlen(vogais); // tam -> palavra / tam2 -> string de comparação
  int total = 0;

  for(i=0;i<tam;i++){                                // Segura o índice. Pode-se dizer que ele segura a letra.
    for(j=0;j<tam2;j++){                             // For responsável ler a string de comparação.
        if(palavra[i]==vogais[j]){                   // If ---> Se letra "?" estiver dentro da string de comparação.
             total++;                                // Adiciona-se 1 a variável total 1.
              break;                                 // Depois que letra foi encontrada não é mais nescessário analisar a string de comparação,
                                                     // então a próxima letra deve ser avaliada.
        }
     }
  }

  printf("Total vogais = %d\n",total);

 system("pause");
 return 0;
}
