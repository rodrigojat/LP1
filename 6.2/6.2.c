#include <stdio.h>

int Media(int vec[][100],int linha,int coluna)
{
    int soma=0,i,j;
    for (i=0;i<linha;i++)
    {
        for(j = 0;j<coluna;j++)
        {
            printf("[%d][%d] : %d \n",i+1,j+1,vec[i][j]);
            soma+= vec[i][j];
        }
    }
    printf("A Soma eh: %d\n",soma);
    int media=soma/(linha*coluna);
    return media;
}


void preenche(int vec[][100],int linha,int coluna)
{
    int i,j;
    for (i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("Escreva um valor para [%d][%d]: ",i+1,j+1);
            scanf("%d",&vec[i][j]);
        }
    }
}


int main(){
    int vetor[100][100];
    int l,c,media=0;
    printf("Digite tamanho das dimensões(l,c): ");
    scanf("%d %d",&l,&c);
    preenche(vetor,l,c);
    media = Media(vetor,l,c);
    printf("A Media eh: %d\n",media);
}
