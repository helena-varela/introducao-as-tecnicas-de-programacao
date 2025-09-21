#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    
    for (k = 1; k <= n; k++) {
        int matriz[9][9];
        int valido = 1;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        
        for (int i = 0; i < 9 && valido; i++) {
            int linha[10] = {0};
            int coluna[10] = {0};
            
            for (int j = 0; j < 9; j++) {
                if (matriz[i][j] < 1 || matriz[i][j] > 9) {
                    valido = 0;
                    break;
                }
                if (linha[matriz[i][j]] || coluna[matriz[j][i]]) {
                    valido = 0;
                    break;
                }
                linha[matriz[i][j]] = 1;
                coluna[matriz[j][i]] = 1;
            }
        }
        
        for (int reg = 0; reg < 9 && valido; reg++) {
            int inicio_i = (reg / 3) * 3;
            int inicio_j = (reg % 3) * 3;
            int regiao[10] = {0};
            
            for (int i = inicio_i; i < inicio_i + 3; i++) {
                for (int j = inicio_j; j < inicio_j + 3; j++) {
                    if (regiao[matriz[i][j]]) {
                        valido = 0;
                        break;
                    }
                    regiao[matriz[i][j]] = 1;
                }
                if (!valido) break;
            }
        }
        
        printf("Instancia %d\n", k);
        if (valido) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    
    return 0;
}