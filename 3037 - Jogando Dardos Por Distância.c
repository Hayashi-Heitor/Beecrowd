#include <stdio.h>

int main(void)
{
    int n,m, j;
    unsigned pts[2] = { 0 };
    
    scanf("%d", &n);
    while (n--){
        m = j = 3;
        unsigned x, d;
        pts[0] = pts[1] = 0;
        while (j--){
            scanf("%u %u", &x, &d);
            pts[0] += x * d;
        }
        while (m--){
            scanf("%u %u", &x, &d);
            pts[1] += x * d;
        }
        if (pts[0] > pts[1])
            puts("JOAO");
        else
            puts("MARIA");
    }
    return 0;
}
