#include<stdio.h>
#include<string.h>

#define TF 600

int main (void){
	char texto[TF];
	
	gets(texto);
	if(strlen(texto) <= 140)
		printf("TWEET\n");
	else
		printf("MUTE\n");
		
	return 0;
}
