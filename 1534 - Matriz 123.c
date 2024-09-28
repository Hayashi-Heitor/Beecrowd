#include<stdio.h>

#define TF 71

int main (void){
    int mat[TF][TF], l, c, tam;
    
    while(scanf("%d", &tam) != EOF){
    
    for(l = 0; l < tam; l++)
        for(c = 0; c < tam; c++){
            if(l == c)
                mat[l][c] = 1;
            if(l == tam - c - 1)
                mat[l][c] = 2;
            if(l != c && l != tam - c - 1)
                mat[l][c] = 3;
        }
        
        for(l = 0; l < tam; l++){
            for(c = 0; c < tam; c++)
                printf("%d", mat[l][c]);
            printf("\n");
        }
    }
return 0;

}
