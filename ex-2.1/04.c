#include <stdio.h>

int main () {
	int velocidade;
	float milha;
	milha=1.6;
	printf("Digite velocidade:\n");
	scanf("%d",&velocidade);
	velocidade/=milha;
	if (velocidade>100)
		printf("Reduza velocidade");
	else if (velocidade < 80)
		printf("Acelere");
	else
		printf("Mantenha");
}
