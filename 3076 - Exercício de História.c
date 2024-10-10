#include<stdio.h>

int main (void){
    long int sec, ano;
    
    while(scanf("%ld", &ano) != EOF){
        sec = ano/100;
        if(ano % 100 != 0)
            sec++;
        printf("%ld\n", sec);
    }
    
    return 0;
}
