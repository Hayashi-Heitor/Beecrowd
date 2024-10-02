#include<stdio.h>
#include<string.h>

int main (void){
    char perna[20];
    
    while (scanf(" %[^\n]", perna) != EOF){
        
        if(strcmp(perna, "esquerda") == 0)
            printf("ingles\n");
        else if(strcmp(perna, "direita") == 0)
            printf("frances\n");
        else if(strcmp(perna, "nenhuma") == 0)
            printf("portugues\n");
        else if(strcmp(perna, "as duas") == 0)
            printf("caiu\n");
        
        fflush(stdin);
    }
    
    return 0;
}
