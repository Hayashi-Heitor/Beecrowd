#include<stdio.h>

int main (void){
    int n;
    
    scanf("%d", &n);
    if(n%2 == 0)
        printf("%d casas brancas e %d casas pretas\n", n*n/2, n*n/2);
    else    
        printf("%d casas brancas e %d casas pretas\n", n*n/2 + n%2, n*n/2);
    
    return 0;
}
