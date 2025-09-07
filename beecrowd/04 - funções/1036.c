// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
// Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
// caso haja uma divisão por 0 ou raiz de numero negativo.

#include <stdio.h>
#include <math.h>

double discriminante(double a, double b, double c){
    return ((b*b) - (4*a*c));
}

void bhaskara(double a, double b, double discriminante){
    double R1 = (-b + sqrt(discriminante))/(2*a);
    double R2 = (-b - sqrt(discriminante))/(2*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
}

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double resultado = discriminante(a, b, c);
    
    if (resultado < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        bhaskara(a, b, resultado);
    }
        
    return 0;
}