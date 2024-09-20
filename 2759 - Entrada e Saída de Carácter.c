#include<stdio.h>

int main (void){
    char v1, v2, v3;
    
    scanf("%c\n%c\n%c", &v1, &v2, &v3);
    printf("A = %c, B = %c, C = %c\n", v1, v2, v3);
    printf("A = %c, B = %c, C = %c\n", v2, v3, v1);
    printf("A = %c, B = %c, C = %c\n", v3, v1, v2);
    
    return 0;
}
