#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define TF 15

int main (void){
    char cpf[15];
    
    scanf("%s", &cpf);
    for(int i = 0; i < 15; i++)
        if(isalnum(cpf[i]))
            printf("%c", cpf[i]);
        else
            printf("\n");
    
    return 0;
}
