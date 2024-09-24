#include<stdio.h>

int main (void){
    int l, n, marcado, cont=0;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%d", &n);
        if(n != marcado)
            cont++; marcado = n;
    }
    printf("%d\n", cont);
    
    return 0;
}
