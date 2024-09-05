#include<stdio.h>

int main(void){
    int n, x;
    
    scanf("%d", &n);
    
    if(n == 1)
        x = 1;
    else if(n > 1 && n <= 3)
        x = 3;
    else if(n > 3 && n <= 5)
        x = 5;
    else if(n > 5 && n <= 10)
        x = 10;
    else if(n > 10 && n <= 25)
        x = 25;
    else if(n > 25 && n <= 50)
        x = 50;
    else
        x = 100;
    
    printf("Top %d\n", x);
    
    return 0;
}
