#include<stdio.h>

int main (void){
    int v, t;
    
    while(scanf("%d%d", &v, &t) != EOF){
        printf("%ld\n", v * t * 2);
    }
    
    return 0;
}
