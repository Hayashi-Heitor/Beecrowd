#include <stdio.h>

int main(void){
    int l, i, picos;

    scanf("%d", &l);
    while(l > 0){
        if(l == 0)
            break;
        
        picos = 0;
        int vet[l];
        for(i = 0; i < l; i++)
            scanf("%d", &vet[i]);

        for(i = 1; i < l-1; i++){
            if(vet[i] < vet[i-1] && vet[i] < vet[i+1])
                picos++;
            else if(vet[i] > vet[i-1] && vet[i] > vet[i+1])
                picos++;
        }

        if(vet[l-1] > vet[l-2] && vet[l-1] > vet[0])
            picos++;
        else if(vet[l-1] < vet[l-2] && vet[l-1] < vet[0])
            picos++;
        
        if(vet[0] > vet[1] && vet[0] > vet[l-1])
            picos++;
        else if(vet[0] < vet[1] && vet[0] < vet[l-1])
            picos++;
        
        printf("%d\n", picos);
        scanf("%d", &l);
    }

    return 0;
}
