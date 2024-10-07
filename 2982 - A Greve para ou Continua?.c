#include<stdio.h>

int main (void){
    char VouG, lixo;
    int l, somaG=0, somaV=0, val;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%c", &lixo);
        scanf("%c", &VouG);
        scanf("%d", &val);
        if(VouG == 'G')
            somaG += val;
        else
            somaV += val;
    }
    
    if(somaG > somaV)
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    else
        printf("A greve vai parar.\n");
    
    return 0;
}
