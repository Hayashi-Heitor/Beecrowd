#include<stdio.h>

int main (void){
    int e, f, c, cont=0, latas;
    
    scanf("%d %d %d", &e, &f, &c);
    latas = e + f;
    while(latas >= c){
        latas -= c;
        cont++;
        latas++;
    }
    printf("%d\n", cont);
    
    return 0;
}
