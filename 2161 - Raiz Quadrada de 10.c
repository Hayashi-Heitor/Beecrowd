#include<stdio.h>

int main (void){
    double n, resposta = 0;
    
    scanf("%lf", &n);
    for(int i = 0; i < n; i++){
        resposta += 6;
        resposta = 1.0/resposta;
    }
    resposta += 3.0;
    printf("%.10lf\n", resposta);
    
    return 0;
}
