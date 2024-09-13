#include<stdio.h>

int main (void){
    int val;
    
    scanf("%d", &val);
    if(val <= 800)
        printf("1\n");
    else if(val <= 1400)
        printf("2\n");
    else 
        printf("3\n");
        
    return 0;
}
