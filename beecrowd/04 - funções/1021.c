// Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
// A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
// As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 
// e 0.01. A seguir mostre a relação de notas necessárias.

#include <stdio.h>
#include <math.h>

void calcular_notas_moedas(double valor) {
    int total_centavos = (int)(valor * 100 + 0.5);
    
    int notas100 = total_centavos / 10000;
    total_centavos %= 10000;
    
    int notas50 = total_centavos / 5000;
    total_centavos %= 5000;
    
    int notas20 = total_centavos / 2000;
    total_centavos %= 2000;
    
    int notas10 = total_centavos / 1000;
    total_centavos %= 1000;
    
    int notas5 = total_centavos / 500;
    total_centavos %= 500;
    
    int notas2 = total_centavos / 200;
    total_centavos %= 200;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    
    // Moedas
    int moeda1 = total_centavos / 100;
    total_centavos %= 100;
    
    int moeda050 = total_centavos / 50;
    total_centavos %= 50;
    
    int moeda025 = total_centavos / 25;
    total_centavos %= 25;
    
    int moeda010 = total_centavos / 10;
    total_centavos %= 10;
    
    int moeda05 = total_centavos / 5;
    total_centavos %= 5;
    
    int moeda01 = total_centavos;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda050);
    printf("%d moeda(s) de R$ 0.25\n", moeda025);
    printf("%d moeda(s) de R$ 0.10\n", moeda010);
    printf("%d moeda(s) de R$ 0.05\n", moeda05);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);
}

int main() {
    double valor;
    scanf("%lf", &valor);
    calcular_notas_moedas(valor);
    return 0;
}