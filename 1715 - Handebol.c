#include <stdio.h>

int main (void) {
	int NumeroDeJogadores, NumeroDePartidas, JogadoresGolTodasPartidas = 0, Partida, GolEmTodas, Gol;
	
	scanf("%d %d", &NumeroDeJogadores, &NumeroDePartidas);
	while(NumeroDeJogadores) {
		
		GolEmTodas = 1;
		for(int i = 0; i < NumeroDePartidas; i++) {
			scanf("%d", &Gol);
			if(Gol < 1) 
				GolEmTodas = 0;
		}
		
		if(GolEmTodas)
			JogadoresGolTodasPartidas++;
		
		NumeroDeJogadores--;
	}
	
	printf("%d\n", JogadoresGolTodasPartidas);
	
	return 0;
}
