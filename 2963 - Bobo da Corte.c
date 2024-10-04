#include<stdio.h>

#define TF 101000

int main (void){
    long int candidatos[TF], carlos;
    int l;
    
    scanf("%d", &l);
    scanf("%ld", &carlos);
    for(int i = 1; i < l; i++)
        scanf("%ld", &candidatos[i]);
        
        for(int i = 1; i < l; i++)
            if(candidatos[i] > carlos){
                carlos = -1;
                break;
            }
    
    if(carlos == -1)
        printf("N\n");
    else
        printf("S\n");
    
    return 0;
}
