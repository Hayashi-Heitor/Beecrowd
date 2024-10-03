#include<stdio.h>

int main (void){
    int a1, a2, a3, menor, resp[3];
    
    scanf("%d%d%d", &a1, &a2, &a3);
    
    resp[0] = a2*2 + a3*4;
    resp[1] = a1*2 + a3*2;
    resp[2] = a1*4 + a2*2;
    menor = resp[0];
    
    for(int i = 1; i < 3; i++){
        if(resp[i] < menor)
            menor = resp[i];
    }
    
    printf("%d\n", menor);
    
    return 0;
}
