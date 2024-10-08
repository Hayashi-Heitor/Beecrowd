#include<stdio.h>

int main (void){
    int cont_i, l, esc;
    
    while(scanf("%d", &l) != EOF){
        cont_i = 0;
        
        for(int i = 0; i < l; i++){
            scanf("%d", &esc);
            if(esc)
                cont_i++;
        }
        
        if(cont_i >= l - (l/3))
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
        
    }
    
    return 0;
}
