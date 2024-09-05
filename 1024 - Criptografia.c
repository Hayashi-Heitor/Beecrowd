#include<stdio.h>
#include<string.h>

#define TF 1001

int main (void){
    char criptografia[TF], aux;
    int n, i, j, TL;
    
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        fflush(stdin);
        gets(criptografia);
        TL = strlen(criptografia);
        
    for(int j = 0; j < TL; j++)
    	if((criptografia[j] >= 97 && criptografia[j] <= 122) || (criptografia[j] >= 65 && criptografia[j] <= 90))
       		criptografia[j] += 3;
    
    for(int j = 0; j < TL/2; j++){
    	aux = criptografia[j];
    	criptografia[j] = criptografia[TL - j - 1];
    	criptografia[TL - j - 1] = aux;
	}
	
	for(int j = TL/2; j < TL; j++)
		criptografia[j]--;
		
	printf("%s\n", criptografia);
    }
    
    return 0;
}
