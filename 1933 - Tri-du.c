#include<stdio.h>

int main (void){
    int carta1, carta2, melhor;
    
    scanf("%d%d", &carta1, &carta2);
    
    if(carta1 == carta2)
        melhor = carta1;
    else if(carta1 > carta2)
        melhor = carta1;
    else
        melhor = carta2;
        
printf("%d\n", melhor);
    
    return 0;
}
