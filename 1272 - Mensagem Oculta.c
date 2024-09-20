#include<stdio.h>
#include<string.h>

#define TF 52

int main (void){
    int l, pos, posf;
    char tex[TF], res[TF];
    
    scanf("%d ", &l);
    for(int i = 0; i < l; i++){
    	fgets(tex, sizeof(tex), stdin);
		posf = 0;
		for(pos = 0; pos < strlen(tex)-1; pos++)
			if(tex[pos] != ' ' && (tex[pos-1] == ' ' || !pos))
				res[posf++] = tex[pos];
		
		res[posf] = '\0';
		printf("%s\n", res);
    }
    
    return 0;
}
