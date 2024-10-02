#include<stdio.h>
#include<math.h>

int main (void){
    double n;
    
    scanf("%lf", &n);
    printf("%.1lf %.1lf\n", n/log(n), 1.25506 * n / log(n));
    
    return 0;
}
