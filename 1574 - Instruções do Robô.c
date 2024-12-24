#include <stdio.h>
#include <string.h>

#define TF 1000

int main (void) {
    int Instrucoes[TF], InstrucaoAtual, Posicao, Testes, Quantidade;
    char Direcao[20];
    
    scanf("%d", &Testes);
    while (Testes) {
        
        scanf("%d", &Quantidade);
        Posicao = 0;
        
        for(int i = 0; i < Quantidade; i++) {
            
            scanf("%s", &Direcao);
            if(strcmp(Direcao, "LEFT") == 0) {
                Posicao--;
                Instrucoes[i] = -1;
            }
            
            else if(strcmp(Direcao, "RIGHT") == 0) {
                Posicao++;
                Instrucoes[i] = +1;
            }
            
            else {
                scanf("%s %d",&Direcao, &InstrucaoAtual);
                Posicao += Instrucoes[InstrucaoAtual-1];
                Instrucoes[i] = Instrucoes[InstrucaoAtual-1];
            }
        }
        
        printf("%d\n", Posicao);
        Testes--;
    }
    
    return 0;
}
