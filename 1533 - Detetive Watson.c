#include<stdio.h>

#define TF 10001

int encontra_maior(int vet[TF], int l){
    int maior = -1, pos;
    
    for(int i = 0; i < l; i++)
        if(maior < vet[i]){
            maior = vet[i];
            pos = i;
        }
    return pos;
}

int main (void){
    int vet[TF], l, maior1, maior2;
    
    scanf("%d", &l);
    while(l > 0){
        for(int i = 0; i < l; i++)
            scanf("%d", &vet[i]);
            
        maior1 = encontra_maior(vet, l);
        for(int i = maior1; i < l-1; i++)
            vet[i] = vet[i+1];
            
        l--;
        maior2 = encontra_maior(vet, l);
        
        if(maior2 >= maior1)
        	maior2++;
        
        printf("%d\n", maior2+1);
        scanf("%d", &l);
    }
    
    return 0;
}
