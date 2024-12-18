#include <stdio.h>

int main (void) {
	int Maior = 0, n;
	
	scanf("%d", &n);
	while(n > 0) {
		
		if(n > Maior)
			Maior = n;
			
		scanf("%d", &n);
	}
	
	printf("%d\n", Maior);
	
	return 0;
}
