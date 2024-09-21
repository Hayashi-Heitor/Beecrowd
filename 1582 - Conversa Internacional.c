#include<stdio.h>
#include<string.h>

#define TF 30

int main (void){
    int l, n, flag;
    char lingua[TF], linguagrupo[TF]; 
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        flag = 0;
        scanf("%d", &n);
        scanf("%s", &linguagrupo);
        
        for(int j = 1; j < n; j++){
            scanf("%s", &lingua);
            if(strcmp(lingua, linguagrupo) != 0)
                flag = 1;
        }
        if(flag == 0)
            printf("%s\n", linguagrupo);
        else
            printf("ingles\n");
    }
    return 0;
}
