#include<stdio.h>

int main (void){
    float n, l, d, qtd, cafe;
    
    scanf("%f %f %f", &n, &l, &d);
    qtd = d * n / 1000; cafe = l;
    
    while(qtd > cafe)
        cafe += l;
    printf("%.0f\n", cafe);
    
    return 0;
}
