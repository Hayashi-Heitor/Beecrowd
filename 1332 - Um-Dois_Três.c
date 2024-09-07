#include<stdio.h>
#include<string.h>

#define TF 10

int main (void){
    int n, i, valor;
    char palavra[TF];
    
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        fflush(stdin);
        gets(palavra);
        
        if(strlen(palavra) > 3)
            valor = 3;
            
        else if((palavra[0] == 111 && palavra[1] == 110) || (palavra[0] == 111 && palavra[2] == 101) || (palavra[1] == 110 && palavra[2] == 101))
            valor = 1;
            
        else
            valor = 2;
        
        printf("%d\n", valor);
    }
    
    return 0;
}
