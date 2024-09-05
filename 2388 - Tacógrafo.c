#include<stdio.h>

int main(void){
    int n, t, v, i, resul = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d%d", &t, &v);
        resul += t * v;
    }
    
    printf("%d\n", resul);
    
    return 0;
}
