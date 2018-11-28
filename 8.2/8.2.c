#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0,tamanho;
    char frase[25];
    
    FILE* arq = fopen("8.1.txt","r");

    for(i;i<25;i++)
    {
			frase[i]=fgetc(arq);
    }
    
    
    
    fclose(arq);
    printf("%s\n",frase);
    return 0;
}
