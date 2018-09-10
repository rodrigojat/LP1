#include <stdio.h>

int main () {
	int i,n,soma;
	soma=0;
	printf("Digite um numero:\n");
	scanf("%d",&n);
	for (i=0; i<=n; i++)
	{
		soma=soma + i*i;
	}
	printf("Resp: %d",soma);
}
