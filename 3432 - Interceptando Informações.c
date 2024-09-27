#include<stdio.h>

int main (void){
    int cont, bit;
    
    for(cont = 0; cont < 8; cont++){
        scanf("%d", &bit);
        if(bit > 1)
            break;
    }
    
    if(cont == 8)
        printf("S\n");
    else
        printf("F\n");
    
    return 0;
}
