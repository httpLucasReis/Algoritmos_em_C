#include <stdlib.h>
#include <stdio.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){

 union tipo test;

 test.x = 1545; // 00000110 00001001
 printf("%d\n",test.x);

 printf("%d / %d\n",test.c[0],test.c[1]); // c[0] = 00000110 = 9
                                          // c[1] = 00001001 = 6
 system("pause");
 return 0;
}
