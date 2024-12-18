#include <stdio.h>

int main (void) {
	int DiametroBola, Altura, Largura, Profundidade;
	
	scanf("%d%d%d%d", &DiametroBola, &Altura, &Largura, &Profundidade);
	if(DiametroBola <= Altura && DiametroBola <= Largura && DiametroBola <= Profundidade)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
