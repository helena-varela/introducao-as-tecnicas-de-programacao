#include <stdio.h>

int main(){
    int numero_funcionario, horas_trabalhadas;
    float valor_hora, salario;
    scanf("%d", &numero_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_hora);
    salario = horas_trabalhadas * valor_hora;
    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}