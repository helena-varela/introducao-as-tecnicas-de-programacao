#include <stdio.h>

int main(){
    int numeros[20], temp;
    for (int h = 0; h < 20; h++)
    {
        scanf("%d", &numeros[h]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        temp = numeros[19-i];
        numeros[19-i] = numeros[i];
        numeros[i] = temp;
    }

    for (int j = 0; j < 20; j++)
    {
        printf("N[%d] = %d\n", j, numeros[j]);
    }

    return 0;
}