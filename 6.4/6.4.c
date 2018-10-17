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


int main(){
    char str[5] = "abcd";
    int jacatau=0;
    jacatau=strlen2(str);
    printf("Qtnd. caracteres:%d\n",jacatau);
}
