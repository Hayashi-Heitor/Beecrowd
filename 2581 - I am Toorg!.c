#include<stdio.h>

int main (void){
    int n;
    char toorg[100];
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    	fflush(stdin);
        gets(toorg);
        printf("I am Toorg!\n");
    }
    return 0;
}
