#include<stdio.h>

int main(void){
    int n, i, a, b, x, y;
    
    scanf("%d", &n);
    while(n > 0){
        a = 0;
        b = 0;
        for(i = 0; i < n; i++){
            scanf("%d%d", &x, &y);
            if(x > y)
                a++;
            else if(y > x)
                b++;
        }
        printf("%d %d\n", a, b);
        scanf("%d", &n);
    }
    
    return 0;
}
