#include <stdio.h>
#include <string.h>

int main () {
	int vit,emp,der,i,pontos,MaiorPontuador,MenorPontuador;
	MaiorPontuador=3; MenorPontuador=50;i=1;
	char Maisponto[20],Menosponto[20];
	while (i<=20){
	
		char time[20];
		pontos=0;vit=0;emp=0;
		printf("Digite nome time:\n");
		scanf("%s",&time);
		printf("Digite quantas vitorias:\n");
		scanf("%d",&vit);
		vit=vit*3;
		printf("Digite quantos empates:\n");
		scanf("%d",&emp);
		pontos=vit+emp;
		if (pontos > MaiorPontuador){
			MaiorPontuador=pontos;
			strcpy(Maisponto,time);
		}
		else if (pontos < MenorPontuador){
			MenorPontuador=pontos;
			strcpy(Menosponto,time);
		}
		i++;
}
	printf("Time com mais ponto:%s\n",Maisponto);
	printf("Time com menos ponto:%s",Menosponto);
}
