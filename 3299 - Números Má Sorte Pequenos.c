#include<stdio.h>
#include<string.h>

#define TF 1000

int main (void){
    char num[TF];
    int flag = 0;
    
    scanf("%s", &num);
    for(int i = 0; i < strlen(num)-1; i++)
        if(num[i] == '1' && num[i+1] == '3'){
            flag = 1;
            break;
        }
    if(flag == 1)
        printf("%s es de Mala Suerte\n", num);
    else
        printf("%s NO es de Mala Suerte\n", num);
    
    return 0;
}
