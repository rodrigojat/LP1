#include <stdio.h>
#include <stdlib.h>
struct Pescaria
{
    int peso; // kg's
        float tamanho; // cm's
        int ident;
        union{
            char genero[20]; //1
            char nome[20]; //2
        };
};

struct Premiacao
{
    int valor;
    struct Pescaria peixinho;
};

void preenche(struct Pescaria* peixe)
{
        int a;
    printf("Escreva o peso: ");
    scanf("%d",&(*peixe).peso);
    printf("Escreva o tamanho: ");
    scanf("%f",&(*peixe).tamanho);
        printf("Nome ou Especie? (1 ou 2): \n");
        scanf("%d",&a);
        if(a == 1)
        {
            (*peixe).ident = 1;
            scanf("%s",(*peixe).genero);
        }
        else{
            (*peixe).ident = 2;
            scanf("%s",(*peixe).nome);
        }
}
void preenche2(struct Premiacao* dinheiro)
{
    int maior;
    struct Pescaria salmao;
    struct Pescaria atum;

    preenche(&salmao);
        if(salmao.ident == 1){
        printf("SALMAO: Peso: %d Kg's, Tamanho: %.2f Cm's,Genero:%s\n",salmao.peso,salmao.tamanho,salmao.genero);
        }
        else {
            printf("SALMAO: Peso: %d Kg's, Tamanho: %.2f Cm's,Nome:%s\n",salmao.peso,salmao.tamanho,salmao.nome);
        }
    preenche(&atum);
        if(atum.ident == 1){
        printf("ATUM: Peso: %d Kg's, Tamanho: %.2f Cm's,Genero = %s\n",atum.peso,atum.tamanho,atum.genero);
        }
        else{
            printf("ATUM: Peso: %d Kg's, Tamanho: %.2f Cm's,Genero = %s\n",atum.peso,atum.tamanho,atum.nome);
        }
    
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
