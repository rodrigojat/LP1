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
int a,b;
printf("Digite número: \n");
scanf("%d",&a);
b=eh_primo(a);


if (b==0)
	printf("Não eh primo");
else
	printf("eh primo");
}
