#include<stdio.h>

#define TF 20000

int main (void){
    int n, m, bilhe[TF], cont, pos, i;
    
    scanf("%d %d", &n, &m);
    while(n + m > 0){
    	cont = 0;
    	
    	for(i = 0; i < TF; i++)
    		bilhe[i] = 0;
    	
        for(i = 0; i < m; i++){
            scanf("%d", &pos);
            ++bilhe[pos];
            if(bilhe[pos] == 2)
            	cont++;
            }

        printf("%d\n", cont);
        scanf("%d %d", &n, &m);
    }
    
    return 0;
}
