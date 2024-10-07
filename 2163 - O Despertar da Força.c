#include<stdio.h>

#define TF 1001

int main (void){
    int num[TF][TF], l, c, lf=0, cf=0, i, j;
    
    scanf("%d%d",  &l, &c);
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &num[i][j]);
    
    for(i = 1; i < l-1; i++)
        for(j = 1; j < c-1; j++)
            if(num[i][j] == 42)
                if(num[i+1][j+1] == 7 && num[i][j+1] == 7 && num[i-1][j+1] == 7 && num[i-1][j] == 7 &&
                num[i-1][j-1] == 7 && num[i][j-1] == 7 && num[i-1][j-1] == 7){
                    lf = i+1;
                    cf = j+1;
                    break;
                }
    printf("%d %d\n", lf, cf);
        
    return 0;
}
