#include <stdio.h>

int main (void){
	int num, horas;
	float val, sal;
	
	scanf ("%d%d%f", &num, &horas, &val);
	sal = val * horas;
	printf ("NUMBER = %d\n", num);
	printf ("SALARY = U$ %.2f\n", sal);
	
	return 0;
}
