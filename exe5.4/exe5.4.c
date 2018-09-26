#include <stdio.h>


void troca(int* p1,int* p2){
	int t=*p1;
	*p1=*p2;
	*p2=t;
}


int main(){
	int x,y;
	int* p1;
	int* p2;
	printf("Digite valores para p1 e p2: \n");
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	troca(p1,p2);
	printf("Valor de p1 e p2 agora: %d %d",*p1,*p2);
}
