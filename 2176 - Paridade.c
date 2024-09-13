#include<stdio.h>
#include<string.h>

#define TF 101

int main (void){
    char bits[TF];
    int um = 0, zero = 0;
    
    scanf("%s", &bits);
    for(int i = 0; i < strlen(bits); i++){
        if(bits[i] == '0')
            zero++;
        else if(bits[i] == '1')
            um++;
    }
    if(um % 2 == 0)
        printf("%s0\n", bits);
    else
        printf("%s1\n", bits);
    
    return 0;
}
