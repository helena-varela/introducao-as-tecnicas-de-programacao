#include <stdio.h>

int main() {
    float matriz[12][12]; 
    int coluna;
    char operacao;
    
    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    
    float soma = 0;
    for (int j = 0; j < 12; j++) {
        soma += matriz[j][coluna];
    }
    
    if (operacao == 'S') {
        printf("%.1f\n", soma);
    } else if (operacao == 'M') {
        float media = soma / 12.0;
        printf("%.1f\n", media);
    }
    
    return 0;
}