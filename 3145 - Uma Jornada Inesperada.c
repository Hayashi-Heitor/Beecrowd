#include<stdio.h>

int main (void){
	float n, x;
	
	scanf("%f %f", &n, &x);
	printf("%.2f\n", x / (n+2));
	
	return 0;
}
