#include <stdio.h>
 
int main(void) {
int x;

for(x=0; x < 39; x++)
    printf("-");
    
printf("\n");

for(x=0; x < 5; x++)
    printf("|                                     |\n");
        
for(x=0; x < 39; x++)
    printf("-");
    
printf("\n");

    return 0;
}
