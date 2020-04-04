#include<stdio.h>
#include<stdlib.h>

//Utilizando unários e binários
int main(void) {

int a,b,c;

a= 18*2 ;
printf("%d\n",a);
printf ("%d\n\n" ,++a);


b=10/2;
printf ("%d\n",b);
printf ("%d\n",++b);
printf ("%d\n\n",b-2);


c=(4+2) * (10/2);
printf ("%d\n", c);
printf ("%d\n",++c );
printf("%d\n\n",c-2);

system("pause");
return 0;
}
