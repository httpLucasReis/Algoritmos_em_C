#include <stdlib.h>
#include <stdio.h>

int main(){

  struct horas{
    int hora;
    int minuto;
    int segundo;
  };

 struct horas agora, *ponteiro = &agora;

 ponteiro->hora = 10;
 ponteiro->minuto = 10;
 ponteiro->segundo = 10;

 int somatorio = 100;

 struct horas depois;

 depois.hora = somatorio + ponteiro->hora;
 depois.minuto = ponteiro->minuto + ponteiro->hora;
 depois.segundo = ponteiro->segundo * ponteiro->hora;

 printf("%d:%d:%d\n",depois.hora,depois.minuto,depois.segundo);


 system("pause");
 return 0;
}
