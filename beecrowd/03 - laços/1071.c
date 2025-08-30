// Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

#include <stdio.h>

int main(){
    int x, y, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = y+1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            soma = i + soma;
        }
    }
    
    printf("%d\n", soma);

    return 0;
}