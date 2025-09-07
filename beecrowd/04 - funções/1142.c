// Escreva um programa que leia um valor inteiro N. Este N é a quantidade de 
// linhas de saída que serão apresentadas na execução do programa.

#include <stdio.h>

void pum(int n){
    for (int i = 1; i <= n*4; i++)
    {
        if (i % 4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    pum(n);
    return 0;
}