#include <stdio.h>

int main (void) {
	char Mensagem[150];
	int Letras, i;
	unsigned int Hexadecimal;
	
	scanf("%d", &Letras);
	for(i = 0; i < Letras; i++) {
		scanf("%x", &Hexadecimal);
		Mensagem[i] = Hexadecimal;
	}
	
	Mensagem[i] = '\0';
	printf("%s\n", Mensagem);
	
	return 0;
}
