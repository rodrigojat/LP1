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

}
