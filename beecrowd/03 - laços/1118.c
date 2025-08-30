// Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. 
// Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota 
// válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
// No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que 
// informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar 
// apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o 
// programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

#include <stdio.h>

int main(){
    float nota1, nota2, media;
    int resposta;

    
    while (1) {
        
        do {
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("nota invalida\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        
        do {
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("nota invalida\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        
        media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media);


        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resposta);
        } while (resposta != 1 && resposta != 2);
        
        if (resposta == 2) {
            break; 
        }
    }
        
    return 0;
}