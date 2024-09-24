#include<stdio.h>

int main (void){
    int l, anos, tempo;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        anos = 2015;
        scanf("%d", &tempo);
        anos = anos - tempo;
        if(anos > 0)
            printf("%d D.C.\n", anos);
        else
            printf("%d A.C.\n", (anos)*(-1)+1);
    }
    
    return 0;
}
