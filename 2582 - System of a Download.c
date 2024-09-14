#include<stdio.h>

int main (void){
    int l, x, a, b;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
    	scanf("%d%d", &a, &b);
        x = a + b;
        if(x == 0)
            printf("PROXYCITY\n");
        else if(x == 1)
            printf("P.Y.N.G.\n");
        else if(x == 2)
            printf("DNSUEY!\n");
        else if(x == 3)
            printf("SERVERS\n");
        else if(x == 4)
            printf("HOST!\n");
        else if(x == 5)
            printf("CRIPTONIZE\n");
        else if(x == 6)
            printf("OFFLINE DAY\n");
        else if(x == 7)
            printf("SALT\n");
        else if(x == 8)
            printf("ANSWER!\n");
        else if(x == 9)
            printf("RAR?\n");
        else
            printf("WIFI ANTENNAS\n");
    }
    
    return 0;
}
