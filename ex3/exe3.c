#include <stdio.h>
#include <stdlib.h>

int AcimaMedia(char a[],int b){
	int i,soma,j;
	soma=0;
	for (i=1; i<51; i++){
		if (a[i] >= b)
			soma+=1;
	}
	return soma;
}


int main() {
	char temps[50];
	int i,soma,media;
	media=0;
	for (i=1; i<51; i++){
		printf("Digite %d temperatura entre -100 e 100\n",i);
		scanf("%d",&temps[i]);
		media+=(temps[i]);
	}
	media=media/5;
	printf("media das temperaturas:%d\n",media);
	soma=AcimaMedia(temps,media);
	printf("acima da media:%d\n",soma);
}
