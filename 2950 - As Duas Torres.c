#include<stdio.h>

double calcula (double n,double x,double y){
    double res;
    
    res =  n / (x+y);
    
    return res;
}

int main (void){
    double res, n, x, y;
    
    scanf("%lf%lf%lf", &n, &x, &y);
    res = calcula(n, x, y);
    printf("%.2lf\n", res);
    
    return 0;
}
