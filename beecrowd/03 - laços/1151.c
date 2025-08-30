// A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
// Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva 
// um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;
    
    scanf("%d", &n);
    
    if (n == 1) {
        printf("0");
    } else if (n == 2) {
        printf("0 1");
    } else {
        printf("0 1");
        for (i = 3; i <= n; i++) {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }
    
    printf("\n");
    return 0;
}