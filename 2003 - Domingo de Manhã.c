#include<stdio.h>

int main (void){
    int h, m, atra;
    
    while(scanf("%d:%d", &h, &m) != EOF){
        if(h == 7)
            atra = m;
        else if(h > 7){
            atra = 60*(h-7);
            atra += m;
        }
        
        printf("Atraso maximo: %d\n", atra);
        atra = 0;
    }
    return 0;
}
