#include <stdio.h>
#include <stdlib.h>

struct Pescaria
{
    int peso; // kg
    char cor[15];
    float tamanho; // cm
};

struct Premiacao
{
    int valor;
    struct Pescaria peixinho;
};

void preenche(struct Pescaria* peixe)
{
    printf("Escreva o peso: ");
    scanf("%d",&(*peixe).peso);
    printf("Escreva a cor: ");
    scanf("%s",(*peixe).cor);
    printf("Escreva o tamanho: ");
    scanf("%f",&(*peixe).tamanho);
}
void preenche2(struct Premiacao* dinheiro)
{
    int maior;
    struct Pescaria salmao;
    struct Pescaria atum;

    preenche(&salmao);
    printf("SALMAO: Peso: %d Kg's,Cor= %s, Tamanho: %.2f Cm's\n",salmao.peso,salmao.cor,salmao.tamanho);
    preenche(&atum);
    printf("ATUM: Peso: %d Kg's,Cor= %s, Tamanho: %.2f Cm's\n",atum.peso,atum.cor,atum.tamanho);

    if(salmao.peso >= atum.peso)
    {
        maior = salmao.peso;
    }
    else
    {
        maior = atum.peso;
    }
    (*dinheiro).valor = maior*100; 
}

int main()
{
    struct Premiacao GoldenFish;

    preenche2(&GoldenFish); 
    printf("The Winner gets: %d\n",GoldenFish.valor);
}
