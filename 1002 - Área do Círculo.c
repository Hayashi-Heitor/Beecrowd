#include <stdio.h>
#include <math.h>

int main (void)
{
	double area, raio;
	
	scanf ("%lf", &raio);
	area = 3.14159 * pow (raio,2);
	printf ("A=%.4lf\n", area);
	
	return 0;
}
