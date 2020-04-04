#include <stdlib.h>
#include <stdio.h>

int main(){

 float a = 20;
 float b = 12;
 float c = 32;

 c=a+b; // = 32
 b=c-a; // = 12
 a=c/4; // = 8
 b=(b/2)+2; // = 8
 c=c/(a/2); // = 8

 printf("%f\n",a);
 printf("%f\n",b);
 printf("%f\n",c);

 system("pause");
 return 0;
}
