#include<stdio.h>
#include<string.h>

#define TF 1000

int main (void){
	int tam;
	char grito[TF];
	
	scanf("%s", &grito);
	tam = strlen(grito);
	fflush(stdin);
	scanf("%s", &grito);
	
	if(strlen(grito) > tam)
		printf("no\n");
	else
		printf("go\n");
	
	return 0;
}
