#include <stdio.h>

int main(){
    double numero, vetor[100], divide;

    scanf("%lf", &numero);

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = numero;
        printf("N[%d] = %.4lf\n", i, vetor[i]);
        numero = numero/2;
    }

    return 0;
}