#include <stdlib.h>
#include <stdio.h>

struct hora{
  int horas;
  int minutos;
  int segundos;
};

int main(){

 struct hora teste(struct hora x);

 struct hora agora;

 agora.horas=14;
 agora.minutos=8;
 agora.segundos=30;

 struct hora agoraDepois;

 agoraDepois=teste(agora);

 printf("%d %d %d\n",agoraDepois.horas,agoraDepois.minutos,agoraDepois.segundos);

 system("pause");
 return 0;
}

struct hora teste(struct hora x){

   printf("%d %d %d\n",x.horas,x.minutos,x.segundos);

   x.horas=100;
   x.minutos=100;
   x.segundos=100;

  return x;
};
