#include<stdio.h>

int main(void){
    int i, conv, mand = 225;
    
    scanf("%d", &conv);
        mand += 300*conv;
    scanf("%d", &conv);
        mand += 1500*conv;
    scanf("%d", &conv);
        mand += 600*conv;
    scanf("%d", &conv);
        mand += 1000*conv;
    scanf("%d", &conv);
        mand += 150*conv;
    
    printf("%d\n", mand);
    return 0;
}
