#include <stdio.h>

int main (void){
    double n, resp = 0;
    
    scanf("%lf", &n);
    while(n--){
        
        resp += 2;
        resp = 1 / resp;
    }
    resp += 1;
    printf("%.10lf\n", resp);
    
    return 0;
}
