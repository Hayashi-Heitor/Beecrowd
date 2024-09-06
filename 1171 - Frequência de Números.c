#include<stdio.h>

#define TF 2010

int main(void){
   int num[TF] = {0}, i, n, m;
   
   scanf("%d", &n);
   
   for(i = 0; i < n; i++){
      scanf("%d", &m);
      num[m]++;
   }
   
   for (i = 1; i <= TF-10; i++){
      if(num[i] > 0)
         printf("%d aparece %d vez (es)\n", i, num[i]);
   }
   
   return 0;
}
