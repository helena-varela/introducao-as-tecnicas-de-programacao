#include <stdio.h>

int main(){
    double a, b, med;
    scanf("%lf", &a);
    scanf("%lf", &b);
    med = (a * 3.5 + b * 7.5)/11;
    printf("MEDIA = %.5lf\n", med);
    return 0;
}