#include <stdio.h>
#include <stdlib.h>

int comparar_crescente(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num1 - num2;
}

int comparar_decrescente(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num2 - num1; 
}

int main(){
    int entradas, numero;
    int count_par = 0, count_impar = 0;

    scanf("%d", &entradas);

    int pares[entradas];
    int impares[entradas];

    for (int i = 0; i < entradas; i++)
    {
        scanf("%d", &numero);

        if (numero % 2 == 0) { 
           pares[count_par++] = numero;
        } 
        else {
           impares[count_impar++] = numero;
       }
    }

    qsort(pares, count_par, sizeof(int), comparar_crescente);
    qsort(impares, count_impar, sizeof(int), comparar_decrescente);

    for (int i = 0; i < count_par; i++) {
        printf("%d\n", pares[i]);
    }

    for (int i = 0; i < count_impar; i++) {
        printf("%d\n", impares[i]);
    }

    return 0;
}