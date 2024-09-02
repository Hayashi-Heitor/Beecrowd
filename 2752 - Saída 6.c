#include <stdio.h>
#include <string.h>

int main(void){
char vet[50]="AMO FAZER EXERCICIO NO URI";
  
    printf ("<%s>\n", vet);
    printf ("<%30s>\n", vet);
    printf ("<%.20s>\n", vet);
    printf ("<%-20s>\n", vet);
    printf ("<%-30s>\n", vet);
    printf ("<%.30s>\n", vet);
    printf ("<%30.20s>\n", vet);
    printf ("<%-30.20s>\n", vet);
    
    return 0;
}
