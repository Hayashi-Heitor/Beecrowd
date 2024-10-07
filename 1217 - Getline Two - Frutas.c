#include<stdio.h>

int main (void){
    float somakg=0, somap=0, pre;
    int l;
    char fruta, lixo;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        int cont=1;
        scanf("%f", &pre);
        scanf("%c", &lixo);
        scanf("%c", &fruta);
        while(fruta != 10){
            scanf("%c", &fruta);
            if(fruta == ' ')
                cont++;
        }
        somap += pre;
        somakg += cont;
        printf("day %d: %d kg\n", i+1, cont);
    }
    printf("%.2f kg by day\n", somakg/l);
    printf("R$ %.2f by day\n", somap/l);
    
    return 0;
}
