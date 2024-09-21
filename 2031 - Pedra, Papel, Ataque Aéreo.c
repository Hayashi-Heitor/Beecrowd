#include<stdio.h>
#include<string.h>

#define TF 50

int main (void){
    int l;
    char jog1[TF], jog2[TF];
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        fflush(stdin);
        scanf("%s", &jog1);
        fflush(stdin);
        scanf("%s", &jog2);
        
        if(strcmp(jog1, "ataque") == 0 && strcmp(jog2, "ataque") == 0)
            printf("Aniquilacao mutua\n");
        else if(strcmp(jog2, "pedra") == 0 && strcmp(jog1, "pedra") == 0)
            printf("Sem ganhador\n");
        else if(strcmp(jog1, "papel") == 0 && strcmp(jog2, "papel") == 0)
            printf("Ambos venceram\n");
        else if(strcmp(jog1, "ataque") == 0)
            printf("Jogador 1 venceu\n");
        else if(strcmp(jog1, "pedra") == 0 && strcmp(jog2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else
            printf("Jogador 2 venceu\n");
    }
    
    return 0;
}
