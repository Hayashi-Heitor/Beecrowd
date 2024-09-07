#include<stdio.h>

int main(void){
    int n, i, s, menor, atual;
    
    scanf("%d%d", &n, &atual);
    menor = atual;
    for(i = 0; i < n; i++){
        
        scanf("%d", &s);
        atual = += s;
        
        if(atual < menor)
            menor = atual;
    }
    printf("%d\n", menor);
    
    return 0;
}
