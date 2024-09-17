#include<stdio.h>

#define TF 101

int main (void){
	long int alu[TF];
    int l, maiorpos=-1;
    float nota, maior= 7.9;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%ld %f", &alu[i], &nota);
        if(nota > maior){
            maiorpos = i;
            maior = nota;
        }
    }
    
    if(maiorpos > -1)
        printf("%ld\n", alu[maiorpos]);
    else
        printf("Minimum note not reached\n");
        
    return 0;
}
