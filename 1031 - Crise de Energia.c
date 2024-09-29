#include <stdio.h>

int resto(int n, int k) {
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}

int main(void){
    int n, x;
    while(!0){
    	scanf("%d",&n);
        if(n == 0) break;
           
        x = 1;
        for(;;){
        	if(resto(n,x) != 11)
				x++;
            else 
				break;
           }
           printf("%d\n",x);
    }
    return 0;
}
