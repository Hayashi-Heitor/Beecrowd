#include<stdio.h>

int main (void) {
    int resultado, operador, l, cont=0;
    char operacao;
    
    scanf("%d", &l);
    while(l > 0) {
        scanf("%d", &resultado);
        for(int i = 1; i < l; i++) {
            scanf("%c", &operacao);
            scanf("%d", &operador);
            if(operacao == '+')
                resultado += operador;
            else
                resultado -= operador;
        }
        printf("Teste %d\n%d\n\n", ++cont, resultado);
        scanf("%d", &l);
    }
    
    return 0;
}
