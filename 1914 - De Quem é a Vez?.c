#include<stdio.h>

#define TF 101

int main (void){
    int l, num1, num2;
    char jog1[TF], jog2[TF], esc1[TF], esc2[TF];
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%s %s %s %s", &jog1, &esc1, &jog2, &esc2);
        scanf("%d %d", &num1, &num2);
        
        if(esc1[0] == 'P'){
            if((num1+num2) % 2 == 0)
                printf("%s\n", jog1);
            else
                printf("%s\n", jog2);
        }
        
        else{
            if((num1+num2) % 2 == 0)
                printf("%s\n", jog2);
            else
                printf("%s\n", jog1);
        }
    }
    
    return 0;
}
