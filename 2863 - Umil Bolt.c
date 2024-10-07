#include<stdio.h>

int main (void){
    int l;
    float tentativa, menor;
    
    while(scanf("%d", &l) != EOF){
        scanf("%f", &menor);
        for(int i = 1; i < l; i++){
            scanf("%f", &tentativa);
            if(tentativa < menor)
                menor = tentativa;
        }
        printf("%.2f\n", menor);
    }
    
    return 0;
}
