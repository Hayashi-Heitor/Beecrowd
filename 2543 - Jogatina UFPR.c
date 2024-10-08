#include<stdio.h>

int main (void){
    int l, _iden, cont, j, iden;
    
    while(scanf("%d %d", &l, &_iden) != EOF){
        cont = 0;
        for(int i = 0; i < l; i++){
            scanf("%d %d", &iden, &j);
            if(iden == _iden && !j)
                cont++;
        }
        printf("%d\n", cont);
    }
    return 0;
}
