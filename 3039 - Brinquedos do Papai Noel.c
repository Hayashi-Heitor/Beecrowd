#include<stdio.h>

#define TF 1000

int main (void){
    int l, menino=0, menina=0;
    char lixo[TF], gen;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%s %c", &lixo, &gen);
        if(gen == 'M')
            menino++;
        else
            menina++;
    }
    printf("%d carrinhos\n", menino);
    printf("%d bonecas\n", menina);
    
    return 0;
}
