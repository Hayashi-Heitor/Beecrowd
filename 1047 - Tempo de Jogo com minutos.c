#include <stdio.h>
 
int main()
{
    int h1,m1,h2,m2;
    int resul;

    scanf ("%d%d%d%d", &h1, &m1, &h2, &m2);
    resul = ((h2*60)+m2) - ((h1*60)+m1);
    if (resul<=0) 
    resul = resul + 24 * 60;
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resul/60, resul%60);
    
    return 0;
}
