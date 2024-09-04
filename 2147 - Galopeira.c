#include<stdio.h>
#include<string.h>

#define TF 10001

int main(void){
    char galopeira[TF];
    int i, n;
    float resul;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", &galopeira);
        resul = strlen(galopeira);
        printf("%.2f\n", resul/100.0);
    }
    
    return 0;
}
