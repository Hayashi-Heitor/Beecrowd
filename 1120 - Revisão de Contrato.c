#include<stdio.h>
#include<string.h>

#define TF 1000

int main (void){
    char aux[TF], resul[TF], d;
    int i, TL;
    
    scanf("%c %s\n", &d, &aux);
    while(d != 48 && strcmp(aux, "0") != 0){
        TL = 0;
        for(i = 0; i < strlen(aux); i++)
            if(aux[i] != d && (aux[i] != '0' || TL > 0))
                resul[TL++] = aux[i];
        
        if(TL == 0)
            printf("0");
        else
        	for(i = 0; i < TL; i++)
            	printf("%c", resul[i]);
            	
    	printf("\n");
    	fflush(stdin);
        scanf("%c %s\n", &d, &aux);
    }
    
    return 0;
}
