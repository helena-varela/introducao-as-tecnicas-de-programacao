#include <stdio.h>

int main()
{
    int x[10], valor;
    
    scanf("%d", &valor);
    
    
    for(int i=0; i < 10; i++){
        printf("N[%d] = %d\n", i, valor);
        valor = valor * 2;
    }

    return 0;
}