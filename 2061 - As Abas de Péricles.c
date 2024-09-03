#include<stdio.h>
#include<string.h>

int main (void){
    int num_de_abas, n, i;
    char acao[20];
    
    scanf("%d%d", &num_de_abas, &n);
    for(i = 0; i < n; i++){
    	fflush(stdin);
        gets(acao);
        
        if(strcmp(acao,"fechou") == 0)
            num_de_abas++;
        else
            num_de_abas--;
    }
    printf("%d\n",num_de_abas);
    
    return 0;
}
