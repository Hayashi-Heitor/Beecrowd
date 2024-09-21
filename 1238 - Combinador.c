#include<stdio.h>
#include<string.h>

#define TF 51

int main (void){
    int l, pos, posf;
    char tex1[TF], tex2[TF], texf[TF*2];
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        fflush(stdin);
        scanf("%s %s", &tex1, &tex2);
        posf = 0;
        for(pos = 0; pos < strlen(tex1) + strlen(tex2); pos++){
            if(pos < strlen(tex1))
                texf[posf++] = tex1[pos];
            if(pos < strlen(tex2))
                texf[posf++] = tex2[pos];
        }
        texf[posf] = '\0';
        printf("%s\n", texf);
    }
    
    return 0;
}
