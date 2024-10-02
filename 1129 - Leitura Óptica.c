#include<stdio.h>

int main (void){
    int vet[5], menor, pos, l;
    
    scanf("%d", &l);
    while(l > 0){
        for(int i = 0; i < l; i++){
            
            menor = 0;
            for(int j = 0; j < 5; j++)
                scanf("%d", &vet[j]);
            
            for(int j = 0; j < 5; j++){
                if(vet[j] <= 127){
                    menor++;
                    if(menor > 1)
                        break;
                    else
                        pos = j;
                }
            }
            if(menor > 1 || menor == 0)
                printf("*\n");
                
            else{
                switch (pos){
                case 0: printf("A\n"); break;
                case 1: printf("B\n"); break;
                case 2: printf("C\n"); break;
                case 3: printf("D\n"); break;
                case 4: printf("E\n");
            	}
            }
        }
        scanf("%d", &l);
    }
    
    return 0;
}
