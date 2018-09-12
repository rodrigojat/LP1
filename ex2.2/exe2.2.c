#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,i;
	printf("Digite n1: \n");
	scanf("%d",&n1);
	printf("Digite n2: \n");
	scanf("%d",&n2);
	if (n1>n2)
		printf("ERRO!");
	else {
		for (i=n1 ; i<=n2; i++)
			printf("numero: %d \n",i);
	     }

}
