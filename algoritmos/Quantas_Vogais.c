#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char str[20] = "manoel";
  int i;
  int tamanho = strlen(str);
  int total=0;

  for(i=0;i<tamanho;i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        total++;
    }
  }

  printf("Total vogais = %d\n",total);

 system("pause");
 return 0;
}
