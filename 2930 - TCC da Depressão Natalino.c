#include<stdio.h>

int main (void){
    int x, y;
    
    scanf("%d%d", &x, &y);
    
    if(y - x >= 3)
        printf("Muito bem! Apresenta antes do Natal!\n");
    else if(y - x < 0)
        printf("Eu odeio a professora!\n");
    else{
        printf("Parece o trabalho do meu filho!\n");
        if(x+2 >= 24)
            printf("Fail! Entao eh nataaaaal!\n");
        else
            printf("TCC Apresentado!\n");
    }
    
    return 0;
}
