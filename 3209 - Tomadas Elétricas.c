#include<stdio.h>

int main (void){
    int l, o, total, n;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        total = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &o);
            if(j == n-1)
                total += o;
            else
                total += o-1;
        }
        printf("%d\n", total);
    }
    
    return 0;
}
