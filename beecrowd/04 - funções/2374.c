// Sua ajuda foi requisitada para desenvolver o programa da próxima bomba da SBC - Sistemas de Bombas Computadorizadas.
// Escreva um programa que, dada a pressão desejada digitada pelo motorista e a pressão do pneu lida pela bomba, indica a 
// diferença entre a pressão desejada e a pressão lida.

#include <stdio.h>

int difpressao(int n, int m){
    int pressao;
    pressao = n - m;
    return pressao;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", difpressao(n, m));
    
    return 0;
}