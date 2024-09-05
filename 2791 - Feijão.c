#include<stdio.h>

int main(void){
    int c1,c2,c3,c4;
    
    scanf("%d%d%d%d", &c1, &c2, &c3, &c4);
    
    if(c1 > 0)
        printf("1\n");
    if(c2 > 0)
        printf("2\n");
    if(c3 > 0)
        printf("3\n");
    if(c4 > 0)
        printf("4\n");
        
    return 0;
}
