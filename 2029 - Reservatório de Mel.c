#include<stdio.h>

#define PI 3.14

int main (void){
    double vol, dia, raio, area;
    
    while(scanf("%lf%lf", &vol, &dia) != EOF){
        raio = dia/2;
        area = PI*raio*raio;
        printf("ALTURA = %.2lf\n", vol/area);
        printf("AREA = %.2lf\n", area);
    }
    
    return 0;
}
