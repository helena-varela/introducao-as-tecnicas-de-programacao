#include <stdio.h>

int main(){
    int valor;
    double numero;

    scanf("%d", &valor); 
    // leitura de entrada, o %d é um especificador de formato indicando que será lido um inteiro
    // o & serve para saber onde o valor será armazenado na memória 
    printf("O valor lido foi %d\n", valor);

    scanf("%lf", &numero);
    printf("O valor lido foi %.2lf\n", numero); // imprime duas casas
    return 0;
}