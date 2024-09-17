#include<stdio.h>
#include<math.h>

int main (void){
    double n, a, b;
    
    scanf("%lf", &n);
    a = pow((1+sqrt(5)) / 2.0, n);
    b = pow((1-sqrt(5)) / 2.0, n);
    printf("%.1lf\n", (a - b) / sqrt(5));
    
    return 0;
}
