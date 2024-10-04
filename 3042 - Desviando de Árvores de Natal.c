#include<stdio.h>

int main (void){
    int l, esq, cen, dir, cont, pos;
    
    scanf("%d", &l);
    while(l > 0){
        cont = 0; pos = 2;
        
        for(int i = 0; i < l; i++){
            scanf("%d%d%d", &esq, &cen, &dir);
            
            switch (pos){
                case 1:
                    if(esq == 0)
                        pos = pos;
                    else if(cen == 0){
                        pos = 2; cont++;
                    }
                    else if(dir == 0){
                        pos = 3; cont+=2;
                    }
                break;
                case 2:
                    if(cen == 0)
                        pos = pos;
                    else if(esq == 0){
                        pos = 1; cont++;
                    }
                    else if(dir == 0){
                        pos = 3; cont++;
                    }
                break;
                case 3:
                    if(dir == 0)
                        pos = pos;
                    else if(cen == 0){
                        pos = 2; cont++;
                    }
                    else if(esq == 0){
                        pos = 1; cont+=2;
                    }
            }
            
        }
        printf("%d\n", cont);
        scanf("%d", &l);
    }
    
    return 0;
}
