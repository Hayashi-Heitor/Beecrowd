#include<stdio.h>

int main(void){
    int john, mary, n, i, x;
    
    scanf("%d", &n);
    while(n > 0){
        
        john = 0;
        mary = 0;
    
        for(i = 0; i < n; i++){
            scanf("%d", &x);
            if(x == 1)
                john ++;
            else
                mary ++;
        }
        printf("Mary won %d times and John won %d times\n", mary, john);
        scanf("%d", &n);
    }
    return 0;
}
