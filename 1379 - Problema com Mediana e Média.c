#include<stdio.h>

int main (void){
    long int a, b;
    
    scanf("%ld%ld", &a, &b);
    while((a+b) > 0){
        
        printf("%d\n", 2 * a - b);
        scanf("%ld%ld", &a, &b);
    }
    
    return 0;
}
