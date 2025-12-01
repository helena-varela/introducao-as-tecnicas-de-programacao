#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char texto[12];
} Pacote;

int comparar(const void *a, const void *b) {
    Pacote *p1 = (Pacote*)a;
    Pacote *p2 = (Pacote*)b;
    return p1->numero - p2->numero;
}

int main() {
    int inicio;
    char linha[20];
    Pacote pacotes[1000];
    int count = 0;
    
    while (scanf("%d", &inicio) != EOF) {
        count = 0;
        
        while (1) {
            scanf("%s", linha);
            
            if (strcmp(linha, "0") == 0) {
                break;
            }
            
            if (strcmp(linha, "Package") == 0) {
                scanf("%d", &pacotes[count].numero);
                sprintf(pacotes[count].texto, "Package %03d", pacotes[count].numero);
                count++;
            }
        }
        
        qsort(pacotes, count, sizeof(Pacote), comparar);
        
        for (int i = 0; i < count; i++) {
            printf("%s\n", pacotes[i].texto);
        }
        printf("\n");
    }
    
    return 0;
}