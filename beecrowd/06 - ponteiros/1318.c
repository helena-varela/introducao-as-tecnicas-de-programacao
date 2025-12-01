#include <stdio.h>

int main() {
    int N, M;
    
    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) break;
        
        int tickets[10001] = {0};
        int count = 0;
        
        for (int i = 0; i < M; i++) {
            int T;
            scanf("%d", &T);
            tickets[T]++;
        }
        
        for (int i = 1; i <= N; i++) {
            if (tickets[i] > 1) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}