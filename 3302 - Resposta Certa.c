#include<stdio.h>

int main (void){
    int l, x;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%d", &x);
        printf("resposta %d: %d\n", i+1, x);
    }
    
    return 0;
}
