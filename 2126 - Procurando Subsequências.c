#include<stdio.h>
#include<string.h>

#define TF 1001

int main (void){
    char sub[TF], seq[TF];
    int qtd, j, i, caso=0;
    
    while(scanf("%s", &sub) != EOF){
        scanf("%s", &seq);
        int qtd = 0, pos = -1;
        for(i = 0; i < strlen(seq); i++){
        	j = 0;
            if(seq[i] == sub[0])
                for(j = 1; j < strlen(sub); j++) 
                    if(seq[i+j] != sub[j])
                        break;
            
            if(j == strlen(sub)){
                pos = i+1;
                qtd++;
            }
        }
        if(pos > -1)
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n", ++caso, qtd, pos);
        else
            printf("Caso #%d:\nNao existe subsequencia\n\n", ++caso);
        
    }
    return 0;
}
