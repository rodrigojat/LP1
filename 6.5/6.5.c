#include <stdio.h>
#include <string.h>

int strlen2(char* str){
    int cont=0,i = 0;
    while (str[i] != '\0'){
        cont++;
        i++;
    }
    return cont;
}

void strjoin2(char* dest, char* batman1, char* batman2)
{
    int i = 0;
    int tam1 = strlen2(batman1);
    int tam2 = strlen2(batman2);
    
    for(i;i<=tam1;i++)
    {
        dest[i] = batman1[i];
    }
    int a = strlen2(dest);
    for(i = 0;i<=tam2;i++)
    {
        dest[a+i] = batman2[i];
    }
}



int main()
{
    char destino[50];
    char origem1[10] = "abcdef";
    char origem2[12] = "zxywut";
    
    strjoin2(destino,origem1,origem2); 
    printf("string final: %s\n",destino);
}
