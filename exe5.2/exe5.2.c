#include <stdio.h>

void compra(int* conta, int valor){
	*conta = *conta - valor;
	printf("Valor debitado com sucesso! saldo restante %d\n",*conta);
}


int main(){
	int minha_conta,minha_conta2,valor=500;
	int* conta;
	printf("Digite valores das contas:");
	scanf("%d %d",&minha_conta,&minha_conta2);
	if (minha_conta>minha_conta2){
			conta = &minha_conta;
			compra(conta,valor);
	}
	else{
			conta = &minha_conta2;
			compra(conta,valor);
	}
	printf("Valor final das contas: %d %d\n",minha_conta,minha_conta2);
	
}
