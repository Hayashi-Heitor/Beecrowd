#include <stdio.h>

int decimal[14] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
char *romano[14] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

void converter(int num);

int main (void){

	int num;

	scanf("%d", &num);

	converter(num);
	printf("\n");
    
    return 0;
}

void converter(int num){

	int i = 0;
	while (num){
		while (num / decimal[i]){

			printf("%s", romano[i]);
			num -= decimal[i];
		    
		}
		++i;
	}
}
