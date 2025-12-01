#include <stdio.h>
#include <stdlib.h>

int main(){
    int testes, inicial, final, numero, *valores = malloc(sizeof(int) * 1);

    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        scanf("%d %d %d", &inicial, &final, &numero);
        valores = realloc(valores, sizeof(int) * numero);

        for (int j = 0; j < numero; j++)
        {
            scanf("%d", &valores[j]);
        }

        int soma = 0;
        for (int k = inicial; k <= final; k++)
        {
            for (int l = 0; l < numero; l++)
            {
                if (k % valores[l] == 0)
                {
                    soma = soma + k;
                    break;
                }
                
            }
            
        }
        printf("%d\n", soma % 1300031);
           
    }

    return 0;
}