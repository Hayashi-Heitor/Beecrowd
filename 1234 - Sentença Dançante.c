#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define TF 51

int main (void){
    int flag, TL;
    char resp[TF], frase[TF];
    
    while(gets(frase) != NULL){
        TL = 0;
        flag = 0;
        for(int i = 0; i < strlen(frase); i++){
            
            if(frase[i] >= 65 && frase[i] <= 90 || frase[i] >= 97 && frase[i] <= 122){
                if(flag == 0){
                    frase[i] = toupper(frase[i]);               
                    flag = 1;
                }
                else{
                    frase[i] = tolower(frase[i]);
                    flag = 0;
                }
            }
                resp[TL++] = frase[i];
        }
        resp[TL] = '\0';
        printf("%s\n", resp);
        fflush(stdin);
    }
    
    return 0;
}
