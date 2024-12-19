#include <stdio.h>

int main (void) {
	int Inscritos, Compareceu = 0, Pessoa;
	
	scanf("%d", &Inscritos);
	while(Inscritos) {
		scanf("%d", &Pessoa);
		
		if(Pessoa)
			Compareceu++;
		
		Inscritos--;
	}
	
	printf("%d\n", Compareceu);
	
	return 0;
}
