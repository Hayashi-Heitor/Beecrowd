#include<stdio.h>

int main(void){
    long int xp;
    int x;
    
    scanf("%d%ld", &x, &xp);
    while(x > 0 && xp > 0){
        printf("%ld\n", x*xp);
        scanf("%d%ld", &x, &xp);
    }
    
    return 0;
}
