#include<stdio.h>

int main (void){
    int p, n, x, ant, i, maior, menor;
    
    scanf("%d %d", &p, &n);
    scanf("%d", &ant);
    for(i = 1; i < n; i++){
        scanf("%d", &x);
        
        if(x > ant){
        	maior = x; menor = ant;
        }
        else{
        	maior = ant; menor = x;
        }
        
        if((maior - menor) > p)
            break;
        ant = x;
    }
    
    if(i == n)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    
    return 0;
}
