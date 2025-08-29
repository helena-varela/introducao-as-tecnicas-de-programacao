// Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou 
// "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

#include <stdio.h>

int main(){
    int n1, n2, maior, menor;

    scanf("%d %d", &n1, &n2);
    
    if (n1 > n2){
        maior = n1;
        menor = n2;
    }
    else{
        maior = n2;
        menor = n1;
    }

    if (maior % menor == 0){
        printf("Sao Multiplos\n"); 
    }
    else{
         printf("Nao sao Multiplos\n");
    }

    // if (n1 > n2)
    // {
    //     if (n1 % n2 == 0)
    //     {
    //         printf("Sao Multiplos\n");    
    //     }
    //     else{
    //         printf("Nao sao Multiplos\n");
    //     }
    // }
    // else{
    //     if (n2 % n1 == 0)
    //     {
    //         printf("Sao Multiplos\n");    
    //     }
    //     else{
    //         printf("Nao sao Multiplos\n");
    //     }
    // }

    return 0;
}