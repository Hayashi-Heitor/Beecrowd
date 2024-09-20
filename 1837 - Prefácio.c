#include<stdio.h>

int main (void){
    int a, b, r;
    
    scanf("%d %d", &a, &b);
    r = a % b;
    if(r < 0){
        if(b > 0)
            r = b + r;
        else
            r = -b + r;
    }
    printf("%d %d\n", (a-r)/b, r);
    
    return 0;
}
