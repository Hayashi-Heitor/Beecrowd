#include <stdio.h>
#include <string.h>

int main (void) {
    int Pessoas, PessoasFora = 0, JipesFora = 0;
    char CondicaoJipe[20];
    
    scanf("%s", &CondicaoJipe);
    while(strcmp("ABEND", CondicaoJipe) != 0) {
        scanf("%d", &Pessoas);
        
        if(strcmp("SALIDA", CondicaoJipe) == 0) {
            JipesFora += 1;
			PessoasFora += Pessoas;
        }
        
        else {
            JipesFora -= 1;
			PessoasFora -= Pessoas;
        }
        
        scanf("%s", &CondicaoJipe);
        
    }
    
    printf("%d\n%d\n", PessoasFora, JipesFora);
    
    return 0;
}
