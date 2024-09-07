#include<stdio.h>

int main (void){
    int n, k, i, n2, j;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &n2);
        for(j = 0; j < n2; j++){
            scanf("%d", &k);
            if(k == 1)
                printf("Rolien\n");
            else if(k == 2)
                printf("Naej\n");
            else if(k == 3)
                printf("Elehcim\n");
            else if(k == 4)
                printf("Odranoel\n");
        }
    }
    
    return 0;
}
