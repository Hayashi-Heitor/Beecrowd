#include<stdio.h>

int main (void){
    int pessoa, menor, l, pos=1;
    
    scanf("%d", &l);
    scanf("%d", &menor);
    for(int i = 1; i < l; i++){
        scanf("%d", &pessoa);
        if(pessoa < menor){
            menor = pessoa;
            pos = i+1;
        }
    }
    printf("%d\n", pos);
    
    return 0;
}
