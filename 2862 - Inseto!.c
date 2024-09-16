#include<stdio.h>

int main (void){
	int x, l;
	
	scanf("%d", &l);
	for(int i = 0; i < l; i++){
		scanf("%d", &x);
		if(x > 8000)
			printf("Mais de 8000!\n");
		else
			printf("Inseto!\n");
	}
	
	return 0;
}
