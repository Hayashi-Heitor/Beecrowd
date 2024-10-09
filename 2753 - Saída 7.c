#include<stdio.h>

int main (void){
    int num = 97;
    char letra = 'a';
    
    for(int i = 0; i <= 25; i++)
        printf("%d e %c\n", num+i, letra+i);
    
    return 0;
}
