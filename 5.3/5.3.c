#include <stdio.h>
#include <string.h>

void compra(int* conta, int valor){
	*conta = *conta - valor;
	printf("saldo final da conta de maior valor: %d\n",*conta);
}

int main(){
	int compras[]= {100,50,80,30,20};
	int minha_conta,minha_conta2,valor,i;
	int* conta;
	printf("Digite valores das contas:");
	scanf("%d %d",&minha_conta,&minha_conta2);
	for (i=0;i<5;i++){
		valor=compras[i];
		if (minha_conta>minha_conta2){
				conta = &minha_conta;
				compra(conta,valor);
				}
		else{
				conta = &minha_conta2;
				compra(conta,valor);
				}
		}
	printf("Valor final das contas: %d %d\n",minha_conta,minha_conta2);
}
