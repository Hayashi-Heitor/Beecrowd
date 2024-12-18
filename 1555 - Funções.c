#include <stdio.h>
#include <math.h>

int rafael (int x, int y) {
    
    return pow(3*x, 2) + pow(y, 2);
}

int beto (int x, int y) {
    
    return 2*pow(x, 2) + pow(y*5, 2);
}

int carlos (int x, int y) {
    
    return -100*x + pow(y, 3);
}

int main (void) {
    int Rafael, Beto, Carlos, x, y, l;
    
    scanf("%d", &l);
    while(l) {
        
        scanf("%d%d", &x, &y);
        Rafael = rafael(x, y);
        Beto = beto(x, y);
        Carlos = carlos(x, y);
        
        if(Rafael > Carlos && Rafael > Beto)
            printf("Rafael ganhou\n");
        else if(Beto > Rafael && Beto > Carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
        
        l--;
        
    }
    
    return 0;
}
