#include <stdio.h>
#include <stdlib.h>

int main(){
    char *y;
    
    y = calloc(sizeof(char), 2);
    // aloca memória na heap
    // inicializa todos os bits do espaço alocado com 0
    // recebe o sizeof que é usada para saber o numero de bytes de um elemento
    // e o numero de elementos do array

    printf("conteúdo de y: %c\n", *y); //  exibirá 0 (ou nada)

    *y = 'A'; // ou y[0] = 50
    printf("conteúdo de y: %c\n", *y);

    y[1] = 'B'; // ou *(y + 1) = 77
    printf("conteúdo de y: %c\n", y[1]);
    
    y[2] = 'C';
    printf("conteúdo de y: %c\n", y[2]);

    for (int i = 0; i < 5; i++)
    {
        printf("conteudo do vetor Y: %c\n", y[i]);
    }

    free(y);
    
    return 0;
}