#include <stdio.h>

int main(void){
    double a, b, c, media;

    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    media = (2 * a + 3 * b + 5 * c)/10.0;
    printf("MEDIA = %.1lf\n", media);

    return 0;
}
