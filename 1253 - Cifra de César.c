#include<stdio.h>
#include<string.h>

#define TF 50

int main (void){
    char cifra[TF];
    int n, pos;
    
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){

        fflush(stdin);
        scanf("%s", cifra);
        scanf("%d\n", &pos);
        
        for(int j = 0; j < strlen(cifra); j++){
            cifra[j] -= pos;
            if(cifra[j] <= 64)
            	cifra[j] += 26;
        }
            
        printf("%s\n", cifra);
    }
    return 0;
}
