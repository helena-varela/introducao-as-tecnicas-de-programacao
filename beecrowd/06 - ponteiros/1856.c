#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main() {
    int n, b;

    while (scanf("%d %d", &n, &b) && (n != 0 || b != 0)) {
        
        int numeros[b];
        
        for (int i = 0; i < b; i++) {
            scanf("%d", &numeros[i]);
        }
        
        int diferencias_encontradas[n + 1];
        memset(diferencias_encontradas, 0, sizeof(diferencias_encontradas));

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < b; j++) {
                
                int diff = abs(numeros[i] - numeros[j]);
                
                diferencias_encontradas[diff] = 1; 
            }
        }

        int todas_encontradas = 1;

        for (int i = 0; i <= n; i++) {
            if (diferencias_encontradas[i] == 0) {
                todas_encontradas = 0;
                break; 
            }
        }
        
        if (todas_encontradas) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    
    return 0;
}