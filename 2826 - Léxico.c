#include <stdio.h>
#include <string.h>

#define TF 21

int main (void) {
    char PrimeiraLista[TF], SegundaLista[TF];
    
    scanf("%s %s", PrimeiraLista, SegundaLista);
    if(strcmp(PrimeiraLista, SegundaLista) < 0)
        printf("%s\n%s\n", PrimeiraLista, SegundaLista);
    else
        printf("%s\n%s\n", SegundaLista, PrimeiraLista);
    
    return 0;
}
