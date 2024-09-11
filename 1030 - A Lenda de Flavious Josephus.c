#include <stdio.h>

int pessoa(int n, int k){
    if(n == 1)  
        return 0;
    return (pessoa(n - 1, k) + k) % n;
}

int main(void){
    int l, n, k;

    scanf("%d", &l);
    for(int i = 0; i < l; ++i){
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", i+1, pessoa(n, k) + 1);
    }

    return 0;
}
