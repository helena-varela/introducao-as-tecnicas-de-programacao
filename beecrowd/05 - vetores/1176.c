#include <stdio.h>

int main() {
    int testes, n;
    
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++) {
        scanf("%d", &n);
        
        if (n == 0) {
            printf("Fib(%d) = 0\n", n);
        }
        else if (n == 1) {
            printf("Fib(%d) = 1\n", n);
        }
        else {
            unsigned long long a = 0, b = 1, c;
            for (int k = 2; k <= n; k++) {
                c = a + b;
                a = b;
                b = c;
            }
            printf("Fib(%d) = %llu\n", n, b);
        }
    }
    return 0;
}