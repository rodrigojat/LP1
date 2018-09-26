#include <stdio.h>


int eh_primo(int a){
	int b=0,test=0,i;
	for (i=1;i<=a;i++){
		if (a%i == 0)
			test++;
	}
	if (test == 2)
		b=1;
	return b;
	
}


int main(){
int a,b,i;
printf("Digite numero: \n");
scanf("%d",&a);
for (i=1;i<=a;i++){

	b=eh_primo(i);
	if (b==0)
		printf("%d Nao eh primo\n",i);
	else
		printf("%d eh primo\n",i);
}
}
