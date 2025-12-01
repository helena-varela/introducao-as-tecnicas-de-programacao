#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x;

    x = malloc(sizeof(int) * 5);
    // aloca memória na heap 5 bytes para int, ou seja 20 posições

    printf("conteúdo de x: %d\n", *x); // mostrará lixo ou 0

    *x = 50; // ou x[0] = 50
    printf("conteúdo de x: %d\n", *x);

    x[1] = 77; // ou *(x + 1) = 77
    printf("conteúdo de x: %d\n", x[1]);

    x[2] = 101;

    *(x + 3) = 47;

    for (int i = 0; i < 4; i++)
    {
        printf("conteudo do vetor x: %d\n", x[i]);
    }
    
    free(x);

    return 0;
}