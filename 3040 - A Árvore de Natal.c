#include<stdio.h>

int main (void){
    int h, d, g, l;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%d %d %d", &h, &d, &g);
        if((h >= 200 && h <= 300) && d >= 50 && g >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
    
    
    return 0;
}
