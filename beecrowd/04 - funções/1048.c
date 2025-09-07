// A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
// Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o 
// índice reajustado, em percentual.

#include <stdio.h>

void aumento(float salario){
    float novosalario, reajuste;
    int percentual;

    if (salario > 0 && salario <= 400)
    {
        reajuste = salario * 0.15;
        novosalario = salario + reajuste;
        percentual = 15;
    }
    else if (salario > 400 && salario <= 800)
    {
        reajuste = salario * 0.12;
        novosalario = salario + reajuste;
        percentual = 12;
    }
    else if (salario > 800 && salario <= 1200)
    {
        reajuste = salario * 0.10;
        novosalario = salario + reajuste;
        percentual = 10;
    }
    else if (salario > 1200 && salario <= 2000)
    {
        reajuste = salario * 0.07;
        novosalario = salario + reajuste;
        percentual = 7;
    }
    else if (salario > 2000)
    {
        reajuste = salario * 0.04;
        novosalario = salario + reajuste;
        percentual = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", novosalario, reajuste, percentual);
}

int main(){
    float salario;
    scanf("%f", &salario);

    aumento(salario);
    
    return 0;
}