#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define TF 1500

int main (void){
    char frase[TF], letra;
    int pos;
    
    gets(frase);
    while(strcmp(frase, "*") != 0){
        letra = toupper(frase[0]);
        
        for(pos = 0; pos <= strlen(frase)-1; pos++)
        if(frase[pos] == ' ')
            if(toupper(frase[pos+1]) != letra )
                break;
        
        if(pos < strlen(frase)-1)
            printf("N\n");
        else
            printf("Y\n");
        
        fflush(stdin);
        gets(frase);
    }
    return 0;
}
