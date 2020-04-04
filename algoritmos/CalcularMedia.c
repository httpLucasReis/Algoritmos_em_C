#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	const int bimestres = 4; // constantes 
	const int alunos = 4;  // constantes
	
	float notas[alunos][bimestres]; // matriz para armarzenar as notas dos alunos 
	float medias[alunos]; // vetor para armarzernar as m�dias dos alunos 
	
	int aluno,nota; // contador da matriz e vetor  (ALUNO = LINHA, NOTA = COLUNA) 
	
	float calmedia = 0; // Somar as notas para calcular a media
	
		 
	for(aluno=0; aluno<alunos; aluno++){                 
		printf("A media do aluno %d: \n ",aluno+1);
		for(nota=0; nota<bimestres; nota++){
			scanf("%f",&notas[aluno][nota]);    // l�-se a notas 
			  calmedia+=notas[aluno][nota];     // a vari�vel calmedia tem o papel de somar todas notas
		}		 
		 medias[aluno]=calmedia/bimestres;  // como o la�o aluno ainda n�o terminou de rodar, atribuimos ao vetor a variav�l calmedia/4 (m�dia) ao vetor 
		 calmedia=0; // Limpando a vari�vel calmedia
	}
	
	printf("\n");
	
	for(aluno=0; aluno<alunos; aluno++){
		printf("A media do aluno %d: \n ",aluno+1);
			printf("%0.2f\n",medias[aluno]);
		
		}
	
	
	system("pause");
	return 0;
}
