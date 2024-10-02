#include<stdio.h>

int main (void){
    int n, m, i, notas[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    
    scanf("%d%d", &n, &m);
    while(n + m > 0){
        for(i = 0; i < 15; i++)
            if(notas[i] == m - n)
                break;
            
            if(i == 15)
                printf("impossible\n");
            else
                printf("possible\n");
        
        scanf("%d%d", &n, &m);
    }
    
    return 0;
}
