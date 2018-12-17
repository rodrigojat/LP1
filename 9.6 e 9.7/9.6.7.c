#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa{
	int valor;
	struct Caixa* prox;

}Caixa;

int contem(struct Caixa* caixa,int val){
		while (caixa != NULL){
			if ((*caixa).valor == val) {	
				return 1;
				break;
			}
			caixa=caixa->prox;
		}	
	return 0;
}

void remover(struct Caixa* caixa){
	int i,n=0;
	printf("Dig. indice que deseja remover:");
	scanf("%d",&i);
	if(i == 0)
	{
		Caixa* pont = caixa;
	 	pont=caixa->prox;
		free(caixa);
	}
	else
	{
		while (n+1<i){
			caixa=caixa->prox;
			n++;
		}
	

		if (n+1==i){
			if (caixa->prox->prox == NULL){
					caixa->prox=NULL;
			}
			else{
			caixa->prox=caixa->prox->prox; // Remove o indice 2
			}
	}
}
}

void exibe (struct Caixa* lista){
  while (lista != NULL){
       printf("%d\n",lista->valor);
       lista=lista->prox;
	}
}
int main(){

	Caixa* lista = NULL;
	Caixa* ult; 
	int valor,teste;
	while(1){
		int n;
		scanf("%d",&n);
		if (n==1){
			break;
			}
		Caixa* c = (Caixa*) malloc(sizeof(Caixa));
		(*c).valor=n;
		(*c).prox=NULL;
		
		if (lista == NULL){
			lista = c;		
		}
		else{
			(*ult).prox=c;
		}
		ult=c;	
	}
	printf("Dig. valor a ser procurado:");
	scanf("%d",&valor);

	teste=contem(lista,valor);
	if (teste == 0){
		printf("Não encontrado\n");
	}
	else{
		printf("Valor encontrado!\n");
	}
	remover(lista);
	exibe(lista);
}
