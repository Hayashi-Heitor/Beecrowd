#include<stdio.h>

int main (void){
    int l, soma;
    
    
    scanf("%d", &l);
    while(l > 0){
        for(int i = 0; i < l; i++){
            scanf("%d", &soma);
            if(soma % 2 > 0)
                printf("%d\n", soma*2-1);
            else
                printf("%d\n", soma*2-2);
        }
    scanf("%d", &l);
    }
    
    return 0;
}
