#include <stdio.h>
#include <math.h>

typedef struct guarda_ponto
{
    int x,y;
}Ponto;

Ponto preencher_ponto(int x, int y)
{
   Ponto p;
   p.x = x;
   p.y = y;

   return p;
}

void Preenche_vetor(Ponto vec[])
{
    int i,x,y;
    Ponto val;
    for(i=0;i<10;i++)
    {
        printf("Descreva os pontos(x,y): \n");
        scanf("%d %d",&x,&y);
        val = preencher_ponto(x,y);
        vec[i] = val;
    }
}

Ponto Distancia(Ponto vec[],Ponto distante)
{
    int i;
    double maior = 0;
    double conta;
    for(i = 0;i<10;i++)
    {
        conta = 0;
        conta = sqrt(pow(vec[i].x,2) + pow(vec[i].y,2));
        if (conta >maior){
            maior = conta;
            distante.x = vec[i].x;
            distante.y = vec[i].y;
        }
    }
    printf("O ponto mais distante de (0,0) eh: (%d,%d).\n",distante.x,distante.y);
}




int main()
{
    Ponto vetor[10];
    Ponto distante;
    Preenche_vetor(vetor);
    Distancia(vetor,distante);
}
