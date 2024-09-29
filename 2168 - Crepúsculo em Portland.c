#include<stdio.h>

#define TF 102

int main (void){
    int n, l, c, mat[TF][TF];
    
    scanf("%d", &n);
    for(l = 0; l < n+1; l++)
        for(c = 0; c < n+1; c++)
            scanf("%d", &mat[l][c]);
    
    l = 0;
    while(l < n){
		for(c = 0; c < n; c++){
	        if(mat[l][c] + mat[l+1][c] + mat[l][c+1] + mat[l+1][c+1] > 1)
	            printf("S");
	        else
	            printf("U");
	    }
        l++;
        printf("\n");
    }
    
    return 0;
}
