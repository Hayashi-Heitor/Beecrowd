#include<stdio.h>
#include<string.h>

#define TF 101

int main (void){
    int n, led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, resul;
    char numeros[TF];
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        resul = 0;
        fflush(stdin);
        scanf("%s", &numeros);

        for(int i = 0; i < strlen(numeros); i++)
            resul += led[numeros[i] - '0'];
        
        printf("%d leds\n", resul);
    }
    
    return 0;
}
