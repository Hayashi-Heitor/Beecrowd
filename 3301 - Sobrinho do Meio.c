#include<stdio.h>

int main (void){
    int h, z, l;
    
    scanf("%d %d %d", &h, &z, &l);
    if((h > z || h > l) && (h < z || h < l))
        printf("huguinho\n");
    else if((l > z || l > h) && (l < z || l < h))
        printf("luisinho\n");
    else
        printf("zezinho\n");
    
    return 0;
}
