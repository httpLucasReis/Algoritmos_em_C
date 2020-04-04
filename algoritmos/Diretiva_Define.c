#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define minuscula islower

int main(){

 int test;
 char letra = 'A';

 test=minuscula(letra);

 if(test>0){
    printf("A letra eh minuscula\n");
 }
 else
    printf("A letra eh maiuscula\n");


 system("pause");
 return 0;
}
