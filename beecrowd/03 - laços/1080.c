// Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

#include <stdio.h>

int main(){
    int numero ,maior = 0 , posicao = 0;

    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}