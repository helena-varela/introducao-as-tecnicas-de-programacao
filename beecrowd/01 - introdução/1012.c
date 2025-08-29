#include <stdio.h>

int main() {
    double a, b, c, triang, circ, trap, quadr, retang;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    triang = (a * c) / 2;
    circ = 3.14159 * (c * c);
    trap = ((a + b ) * c )/2;
    quadr = b * b;
    retang = a * b;
    printf("TRIANGULO: %.3lf\n", triang);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quadr);
    printf("RETANGULO: %.3lf\n", retang);
    
    return 0;
}