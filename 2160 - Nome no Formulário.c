#include<stdio.h>
#include<string.h>

#define TF 501

int main (void){
    char nome[TF];
    
    gets(nome);
    if(strlen(nome) > 80)
        printf("NO\n");
    else
        printf("YES\n");
    
    return 0;
}
