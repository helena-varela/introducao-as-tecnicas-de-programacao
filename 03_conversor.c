#include <stdio.h>

int main(){
    // Declaração de variáveis
    double altura_pes, altura_metros;
    double peso_libras, peso_quilos;
    
    // Lendo as entradas do usuário
    printf("Digite o valor da altura em pés para ser convertido:\n");
    scanf("%lf", &altura_pes);
    printf("\nDigite o valor do peso em libras para ser convertido:\n");
    scanf("%lf", &peso_libras);

    // Conversão
    altura_metros = altura_pes * 0.3048;
    peso_quilos = peso_libras * 0.453592;

    // Imprimir valores convertidos
    printf("\nAltura em metros: %.2lf\nPeso em quilos: %.2lf", altura_metros, peso_quilos);
    return 0;
}