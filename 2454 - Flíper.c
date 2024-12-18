#include <stdio.h>

int main (void) {
    int p, r;
    char Caminho;
    
    scanf("%d%d", &p, &r);
    
    if(p) 
        if(r)
            Caminho = 'A';
        else
            Caminho = 'B';
    
    else 
        Caminho = 'C';
    
    printf("%c\n", Caminho);
    
    return 0;
}
