#include<stdio.h>

int main (void){
    int s, t, f;
    
    scanf("%d%d%d", &s, &t, &f);
    s += t;
    if(s >= 24)
        s -= 24;
    
    s += f;
    if(s >= 24)
        s -= 24;
    if(s < 0)
        s += 24;
        
    printf("%d\n", s);
    
    return 0;
}
