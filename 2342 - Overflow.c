#include <stdio.h>

int main (void) {
	int Limite, Numero1, Numero2, Total;
	char Operacao;
	
	scanf("%d", &Limite);
	scanf("%d %c %d", &Numero1, &Operacao, &Numero2);
	
	if(Operacao == '+')
		Total = Numero1 + Numero2;
	else
		Total = Numero1 * Numero2;	
	
	if(Total > Limite)
		printf("OVERFLOW\n");
	else
		printf("OK\n"); 
	
	return 0;
}
