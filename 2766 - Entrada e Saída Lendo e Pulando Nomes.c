#include<stdio.h>
#include<string.h>

#define TF 31

int main (void){
    char lista[TF][10];
    
    for(int i = 0; i < 10; i++){
    fflush(stdin);
    scanf("%s", &lista[i]);
    }
    printf("%s\n", lista[2]);
    printf("%s\n", lista[6]);
    printf("%s\n", lista[8]);
    
    return 0;
}
