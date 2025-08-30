// Para aquecer você para esta competição, vamos pedir que você desenvolva um programa que calcule o quociente e o resto da 
// divisão de dois números inteiros, pode ser? Lembre que o quociente e o resto da divisão de um inteiro a por um inteiro não-nulo 
// b são respectivamente os únicos inteiros q e r tais que 0 ≤ r < |b| e:
// a = b × q + r

#include <stdio.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    
    q = a / b;
    r = a % b;
    
    if (r < 0) {
        if (b > 0) {
            r += b;
            q--;
        } else {
            r -= b;
            q++;
        }
    }
    
    printf("%d %d\n", q, r);
    return 0;
}