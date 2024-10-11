#include<stdio.h>

int main (void){
    int altmax, altmin, l, cont, x;
    
    while(scanf("%d", &l) != EOF){
        cont = 0;
        scanf("%d %d", &altmin, &altmax);
        for(int i = 0; i < l; i++){
            scanf("%d", &x);
            if(x >= altmin && x <= altmax)
                cont++;
        }
        printf("%d\n", cont);
    }
    
    return 0;
}
