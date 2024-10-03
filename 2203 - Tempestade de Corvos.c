#include<stdio.h>
#include<math.h>

int main (void){
    double xf, yf, xi, yi, vi, r1, r2, dist, alcan;
    
    while(scanf("%lf%lf%lf%lf%lf%lf%lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF){
        dist = sqrt(pow((xi - xf), 2) + pow((yi - yf), 2)) + vi*1.5;
        alcan = r1+r2;
        
        if(dist <= alcan)
            printf("Y\n");
        else
            printf("N\n");
    }
    
    
    return 0;
}
