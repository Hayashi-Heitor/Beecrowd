#include<stdio.h>

#define TF 500

int main (void){
    char pessoas[TF];
    int cont=0, soma=0, num;
    
    while(scanf("%[^\n]", &pessoas) != EOF){
        scanf("%d", &num);
        soma += num; cont++;
    }
    printf("%.1lf\n", (double) soma/cont);
    
    return 0;
}
