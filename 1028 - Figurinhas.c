#include<stdio.h>

int main (void){
    int l, jog1, jog2, res; 
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        scanf("%d%d", &jog1, &jog2);
        
		while (jog2 != 0){
			res = jog1 % jog2;
			jog1 = jog2;
			jog2 = res;
		}
        
        printf("%d\n", jog1);
    }
    
    return 0;
}
