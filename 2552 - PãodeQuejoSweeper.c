#include<stdio.h>

#define TF 1001

int main (void){
    int pao[TF][TF], l, c;
    
    while(scanf("%d %d", &l, &c) != EOF){
        for(int i = 0; i < l; i++)
            for(int j = 0; j < c; j++)
                scanf("%d", &pao[i][j]);
        
        int cont;
        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                cont = 0;
                if(pao[i][j] == 1)
                    cont = 9;
                else{
                    if(i > 0 && pao[i-1][j] == 1)
                        cont++;
                    if(i < l-1 && pao[i+1][j] == 1)
                        cont++;
                    if(j > 0 && pao[i][j-1] == 1)
                        cont++;
                    if(j < c-1 && pao[i][j+1] == 1)
                        cont++;
                }
                printf("%d",cont);   
            }
            printf("\n");
        }
    }
    
    return 0;
}
