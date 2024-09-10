#include<stdio.h>

int main (void){
    int l, n1, n2;
    char letra;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        
        scanf("%d%c%d", &n1, &letra, &n2);
        if(n1 == n2)
            printf("%d\n", n1*n2);
        else if(letra >= 65 && letra <= 90)
            printf("%d\n", n2-n1);
        else
            printf("%d\n", n1+n2);
    }
    return 0;
}
