#include <stdio.h>
#include <stdlib.h>

int main(){
    int *z;
    
    z = calloc(sizeof(int), 5);

    for (int i = 0; i < 5; i++)
    {
        z[i] = i + 1;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("conteudo de z: %d\n", z[j]);
    }
    
    z = realloc(z, 10 * sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        z[i] = i + 1;
    }
    
    for (int j = 0; j < 10; j++)
    {
        printf("conteudo de z%d: %d\n", j, z[j]);
    }

    free(z);

    return 0;
}