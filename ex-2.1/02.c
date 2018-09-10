#include <stdio.h>

int main () {
	int a,b;
	printf("Digite valor de A:\n");
	scanf("%d",&a);
	printf("Digite valor de B:\n");
	scanf("%d",&b);
	if (a>b)
		printf("maior valor %d!",a);
	else
		printf("maior valor %d!",b);
}
