#include<stdio.h>
#include<string.h>

#define TF 21

int main (void){
    char palavra[TF];
    
    scanf("%s", &palavra);
    if(strlen(palavra) < 9)
        printf("palavrinha\n");
    else
        printf("palavrao\n");
    
    return 0;
}
