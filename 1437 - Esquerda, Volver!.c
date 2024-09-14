#include<stdio.h>

int main (void){
    int l, dire;
    char ordem[1001];
    
    scanf("%d", &l);
    while(l > 0){
        dire = 0;
        fflush(stdin);
        scanf("%s", &ordem);
        for(int i = 0; i < l; i++){
                if(ordem[i] == 'D')
                    dire++;
                if(ordem[i] == 'E')
                    dire--;
                    
                if(dire > 3)
                    dire = 0;
                if(dire < 0)
                    dire = 3;
        }
        switch (dire){
            case 0: printf("N\n"); break;
            case 1: printf("L\n"); break;
            case 2: printf("S\n"); break;
            case 3: printf("O\n");
        }
        
        scanf("%d", &l);    
    }
    return 0;
}
