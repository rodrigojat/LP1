#include <stdio.h>



int Media(int* vec,int n){
    int soma=0,i=1;
    for (i=1; i<=n; i++){
        soma+=vec[i];
    }
    int media=soma/n;
    return media;
}

void preenche(int* vec, int n){
    int x=0,i=1;
    for(i = 1;i<=n;i++)
    {
        scanf("%d",&x);
        vec[i] = x;
        
    }
}


int main(){
    int vetor[100];
    int n=0,media=0;
    printf("Digite tamanho vetor:\n");
    scanf("%d",&n);
    preenche(vetor,n);
    media=Media(vetor,n);
    printf("Media:%d\n",media);
}
