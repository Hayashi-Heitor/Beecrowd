#include <stdio.h>

int main (void) {
    int LavadoraMinimo, LavadoraMaximo, SecadoraMinimo, SecadoraMaximo, Roupas;
    
    scanf("%d%d%d%d%d", &Roupas, &LavadoraMinimo, &LavadoraMaximo, &SecadoraMinimo, &SecadoraMaximo);
    if(Roupas >= LavadoraMinimo && Roupas <= LavadoraMaximo && Roupas >= SecadoraMinimo && Roupas <= SecadoraMaximo)
        printf("possivel\n");
    else
        printf("impossivel\n");
    
    return 0;
}
