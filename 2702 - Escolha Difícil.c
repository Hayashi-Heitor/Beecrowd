#include<stdio.h>

int contar (void){
    int resul=0, fran2, bife2, peix2, fran1, bife1, peix1;
    
    scanf("%d%d%d", &fran1, &bife1, &peix1);
    scanf("%d%d%d", &fran2, &bife2, &peix2);
    if(fran2 > fran1)
        resul += fran2 - fran1;
    if(bife2 > bife1)
        resul += bife2 - bife1;
    if(peix2 > peix1)
        resul += peix2 - peix1;
    
    return resul;
}

int main (void){
    int resul;
    
    resul = contar();
    printf("%d\n", resul);
    return 0;
}
