#include<stdio.h>
int main (void){
    int dia1, dia2, hora1, hora2, min1, min2, seg1, seg2;
    
    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d\n", &hora1, &min1, &seg1);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &min2, &seg2);
    
    if(seg1 > seg2){
        min2 --;
        seg2+= 60;
    }
    seg2 = seg2 - seg1;
    
    if(min1 > min2){
        hora2 --;
        min2 += 60;
    }
    min2 = min2 - min1;
    
    if(hora1 > hora2){
        dia2 --;
        hora2 += 24;
    }
    hora2 = hora2 - hora1;
    dia2 = dia2 - dia1;
    
    printf("%d dia(s)\n", dia2);
    printf("%d hora(s)\n", hora2);
    printf("%d minuto(s)\n", min2);
    printf("%d segundo(s)\n", seg2);
    
    return 0;
}
