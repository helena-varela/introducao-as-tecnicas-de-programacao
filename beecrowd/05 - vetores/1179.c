#include <stdio.h>

int main() {
    int par[5], impar[5];
    int valores, tamanhopar = 0, tamanhoimpar = 0; 
    
    for (int i = 0; i < 15; i++) {
        scanf("%d", &valores);

        if (valores % 2 == 0) {  
            par[tamanhopar] = valores;
            tamanhopar++;
            
            if (tamanhopar == 5) { 
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                tamanhopar = 0;  
            }
        }
        else { 
            impar[tamanhoimpar] = valores;
            tamanhoimpar++;
            
            if (tamanhoimpar == 5) { 
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                tamanhoimpar = 0;  
            }
        }
    }
    
    for (int j = 0; j < tamanhoimpar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    for (int j = 0; j < tamanhopar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
    
    return 0;
}