#include<stdio.h>

int main (void){
    int rpm, n, queda = 0, maior;
    
    scanf("%d", &n);
    scanf("%d", &maior);
    for(int i = 1; i < n; i++){
        scanf("%d", &rpm);
        if(queda == 0 && rpm < maior)
        	queda = i+1;
        else
        	maior = rpm;
    }
    printf("%d\n", queda);
    
    return 0;
}
