#include<stdio.h>

int main (void){
	double x, y, resp;
	
	scanf("%lf %lf", &x, &y);
	resp = (x+100.00) * (y/100.00+1) - 100.00;
	printf("%.6lf\n", resp);
	
return 0;
}
