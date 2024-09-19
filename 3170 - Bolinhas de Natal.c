#include<stdio.h>

int main (void){
    int bol, b, g;
    
    scanf("%d%d", &b, &g);
    bol = g/2; bol = bol - b;
    
    if(bol <= 0)
    	printf("Amelia tem todas bolinhas!\n");
    else
  	  printf("Faltam %d bolinha(s)\n", bol);
    
    return 0;
}
