#include<stdio.h>

int calcula (int &resul, int bon){
    int ata, def, niv;
    
    scanf("%d%d%d", &ata, &def, &niv);
    resul = (ata+def) / 2;
    if(niv %2 == 0)
        resul += bon;
    
    return resul;
}

int main (void){
    int l, dab, gua, bon;
    
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
    scanf("%d", &bon);
    dab = calcula(dab, bon);
    gua = calcula(gua, bon);
    
    if(gua > dab)
        printf("Guarte\n");
    else if(dab > gua)
        printf("Dabriel\n");
    else
        printf("Empate\n");
    }
    
    return 0;
}
