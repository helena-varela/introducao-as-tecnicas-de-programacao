#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int valor = abs(i - j) + 1;
                if (j > 0) printf(" ");
                printf("%3d", valor);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}