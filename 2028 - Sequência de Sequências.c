#include<stdio.h>

int main (void){
    int caso=1, num, qtd;
    
    while(scanf("%d", &num) != EOF){
        qtd = 1;
        for(int i = 0; i <= num; i++)
            for(int j = 0; j < i; j++)
            	qtd++;
        
        if(qtd == 1)
        	printf("Caso %d: %d numero\n", caso++, qtd);
        else
        printf("Caso %d: %d numeros\n", caso++, qtd);
        
        printf("0");
        for(int i = 0; i <= num; i++)
            for(int j = 0; j < i; j++)
                printf(" %d", i);
        printf("\n\n");
    }
    
    return 0;
}
