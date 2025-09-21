#include <stdio.h>

int main() {
    int n;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        
        int matriz[n][n];
        
        for (int camada = 0; camada < (n + 1) / 2; camada++) {
            int valor = camada + 1;
            for (int i = camada; i < n - camada; i++) {
                for (int j = camada; j < n - camada; j++) {
                    matriz[i][j] = valor;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%3d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}