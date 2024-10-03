#include<stdio.h>

#define TF 12

int main (void){
    int dia, mes, meses[TF] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25}, tempo;
    
    while(scanf("%d%d", &mes, &dia) != EOF){
        tempo = 0;
        
        if(mes == 12 && dia > 25)
            printf("Ja passou!\n");
        else if(mes == 12 && dia == 25)
            printf("E natal!\n");
        else if(mes == 12 && dia == 24)
            printf("E vespera de natal!\n");
            
        else{
            for(int i = mes-1; i < 12; i++){
                tempo += meses[i];
            }
            printf("Faltam %d dias para o natal!\n", tempo-dia);
        }
    }
    
    return 0;
}
