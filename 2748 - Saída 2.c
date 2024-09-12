#include <stdio.h>
 
int main(void) {
    
    printf("---------------------------------------\n");
    for(int i = 0; i < 5; i++){
        if(i == 0)
            printf("|        Roberto                      |\n");
        else if(i == 2)
            printf("|        5786                         |\n");
        else if(i == 4)
            printf("|        UNIFEI                       |\n");
        else
            printf("|                                     |\n");
    }
    printf("---------------------------------------\n");
    
    return 0;
}
