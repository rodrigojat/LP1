#include <stdio.h>

int main () {
	int soma,n;
	printf("Digite numero:\n");
	scanf("%d",&n);
	while (n != 0){
		soma+=n;
		printf("Digite numero:\n");
		scanf("%d",&n);
	}
	printf("soma dos numeros %d",soma);
}
