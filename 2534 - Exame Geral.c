#include<stdio.h>

#define TF 30001

int main (void){
    int vet[TF], ln, lc;
    
    while(scanf("%d%d", &ln, &lc) != EOF){
        
        for(int i = 0; i < ln; i++)
            scanf("%d", &vet[i]);
        
        int aux;
        for(int i = 0; i < ln-1; i++)
            for(int j = i+1; j < ln; j++)
                if(vet[j] > vet[i]){
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
        
        int op;
        for(int i = 0; i < lc; i++){
            scanf("%d", &op);
            printf("%d\n", vet[op-1]);
        }
    }
    
    return 0;
}
