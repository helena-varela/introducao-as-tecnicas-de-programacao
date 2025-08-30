// Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
// Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M). 

#include <stdio.h>

int main(){
    int m = 1, n = 1;

    while (scanf("%d %d", &m, &n) && m > 0 && n > 0)
    {
        int menor, maior;
        int soma = 0;

        if (m < n) {
            menor = m;
            maior = n;
        } else {
            menor = n;
            maior = m;
        }

        for (int i = menor; i <= maior; i++)
        {
            soma = soma + i;
            printf("%d ", i);
        }
            printf("Sum=%d\n", soma);
    }

    return 0;
}