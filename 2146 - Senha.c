#include<stdio.h>

int main (void){
    long int n;
    
    while(scanf("%ld", &n) != EOF)
        printf("%ld\n", n-1);
    
    return 0;
}
