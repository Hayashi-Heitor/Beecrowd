#include<stdio.h>

int main (void){
    int k, n, m, i, x, y;
    
    scanf("%d", &k);
    while(k > 0){
        scanf("%d%d", &n, &m);
        for(i = 0; i < k; i++){
            scanf("%d%d", &x, &y);
            if(x == n || y == m)
                printf("divisa\n");
            else if(x > n && y > m)
                printf("NE\n");
            else if(x < n && y > m)
                printf("NO\n");
            else if(x < n && y < m)
                printf("SO\n");
            else
                printf("SE\n");
        }
        scanf("%d", &k);
    }
    return 0;
}
