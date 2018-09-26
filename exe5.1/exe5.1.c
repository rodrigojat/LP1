#include <stdio.h>


int main(){
	int a,b;
	int* p;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	if (a>b)
	{
			p = &a;
			*p = (a-50);
	}
	else
	{
			p = &b;
			*p = (b-50);
	}

	printf("%d %d\n", a,b);	
}
