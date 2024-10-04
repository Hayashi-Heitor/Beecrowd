#include<stdio.h>

int main (void){
    char nome[50];
    int l;
    float ts=0, tb=0, ta=0, s, b, a, st=0, bt=0, at=0;
    
    scanf("%d", &l);
    while(l--){
        scanf("%s\n", &nome);
        scanf("%f %f %f", &s, &b, &a);
        ts += s; tb += b; ta += a;
        scanf("%f %f %f", &s, &b, &a);
        st += s; bt += b; at += a;
    }
    printf("Pontos de Saque: %.2f %%.\n", st / ts * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", bt / tb * 100);
    printf("Pontos de Ataque: %.2f %%.\n", at / ta * 100);
    
    return 0;
}
