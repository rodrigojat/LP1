#include <stdio.h>


void preencheVetor(int vet[]){
  int i=0;
   for (i;i<=4;i++){
      printf("Dig. número:\n");
      scanf("%d",&vet[i]);
  }
}


void LeERemove(int vet[]){
 int i;
 printf("Digite um número entre 0 e 4:\n");
 scanf("%d",&i);
 for (i;i<4;i++){
  vet[i]=vet[i+1];
  }
}

int main(){
  int vetor[5];
  preencheVetor(vetor);
  for (int i=0;i<=4;i++){
      printf("%d \t",vetor[i]);
  }
  LeERemove(vetor);
   for (int i=0;i<=3;i++){
 printf("%d \t",vetor[i]);
  }
}
