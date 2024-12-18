#include <stdio.h>

int main (void) {
    int Bandejas, Copos, CoposQuebrados = 0, Latas;
    
    scanf("%d", &Bandejas);
    while(Bandejas) {
        
        scanf("%d%d", &Latas, &Copos);
        if(Latas > Copos)
            CoposQuebrados += Copos;
            
        Bandejas --;
        
    }
    
    printf("%d\n", CoposQuebrados);
    
    return 0;
}
