#include<stdio.h>

int main (void){
    int x[5], y[5], flag = 0;

    for(int i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    for(int i = 0; i < 5; i++)
        scanf("%d", &y[i]);
    for(int i = 0; i < 5; i++)
        if(x[i] == y[i])
            flag = 1;
    
    if(flag == 0)
        printf("Y\n");
    else
        printf("N\n");
        
    return 0;
}
