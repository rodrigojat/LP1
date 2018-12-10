#include <stdio.h>

struct Caixa{
    int valor;
    struct Caixa* prox;
 };

void exibe (struct Caixa* lista){
  while (lista != NULL){
       printf("%d\n",lista->valor);
       lista=lista->prox;
}

}

void remove(struct Caixa* caixa){
	int i,n=0;
	printf("Dig. indice que deseja remover:");
	scanf("%d",&i);
	while (n+1<i){
		caixa=caixa->prox;
		n++;
	}
	if (n+1==i){
		caixa->prox=caixa->prox->prox; // Remove o indice 2
		}
	
}

int main() {
  struct Caixa c0,c1,c2,c3,c4;
  c0.valor=1;
  c0.prox=&c1;
  c1.valor=3;
  c1.prox=&c2;
  c2.valor=7;
  c2.prox=&c3;
  c3.valor=9;
  c3.prox=&c4;
  c4.valor= 5;
  c4.prox= NULL; 
  exibe(&c0);
  remove(&c0);
  exibe(&c0);
  c2.prox=&c0; // Adicionado no inicio da lista
  struct Caixa* cabeca= &c2;
  printf("Lista final:\n");
  exibe(cabeca);
	
}
