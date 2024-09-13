#include<stdio.h>
#include<string.h>

int main (void){
    char num[11];
    
    scanf("%s", &num);
    for(int i = strlen(num)-1; i >= 0; i--)
        printf("%c", num[i]);
    printf("\n");
    
    return 0;
}
