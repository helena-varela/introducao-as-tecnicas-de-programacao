#include <stdio.h>

int main() {
    char operacao;
    double matriz[12][12];
    double soma = 0.0;
    int count = 0;

    scanf(" %c", &operacao);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            
            if (j > i && (i + j) < 11) {
                soma += matriz[i][j];
                count++;
            }
        }
    }
    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        printf("%.1lf\n", soma / count);
    }
    
    return 0;
}