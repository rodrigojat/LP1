#include <stdio.h>

int main () {
	float dinheiro,dolar;
	printf("Digite valor telefone:\n");
	scanf("%f",&dinheiro);
	dolar=3.17;
	dinheiro=dinheiro*dolar;
	if (dinheiro<=1000){
		printf("Valor em reais:%f\n",dinheiro);
		printf("Bom negocio!");
	}
}
