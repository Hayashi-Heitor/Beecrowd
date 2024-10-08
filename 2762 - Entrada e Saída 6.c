#include<stdio.h>
#include<string.h>

#define TF 1001

int main (void){
    char antes[TF], dps[TF], aux;
    int pos=0;
    
    scanf("%c", &aux); antes[pos++] = aux;
    while(aux != '.'){
        scanf("%c", &aux);
        antes[pos++] = aux;
    }
    
    antes[pos-1] = '\0';
    pos = 0;
    while(aux != 10){
        scanf("%c", &aux);
        dps[pos++] = aux;
    }
    dps[pos-1] = '\0';
    
    if(antes[0] == '0')
        for(int i = 0; i < strlen(antes); i++)
            antes[i] = antes[i+1];
            
    if(dps[0] == '0')
        for(int i = 0; i < strlen(dps); i++)
            dps[i] = dps[i+1];
    
    printf("%s.%s\n", dps, antes);
    
    return 0;
}
