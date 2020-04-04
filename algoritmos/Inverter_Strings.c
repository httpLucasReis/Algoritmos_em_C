#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char str1[20] = "ola tudo bem mano";
  char str2[20] ;
  int i,j=0;

  for(i=strlen(str1)-1;i>=0;i--){ // -1 retira o \0
    str2[j]=str1[i];
    j++;
  }
  str2[j] = '\0';

  printf("str 2 = %s\n",str2);

 system("pause");
 return 0;
}
