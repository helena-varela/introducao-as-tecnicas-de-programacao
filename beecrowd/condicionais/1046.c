// Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o 
// mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

#include <stdio.h>

int main(){
    int inicio, fim, duracao;

    scanf("%d %d", &inicio, &fim);

    if (inicio >= fim)
    {
        duracao = (24 - inicio) + fim;
        if (duracao == 0)
        {
            duracao = 24;
        }
    }
    else{
        duracao = fim - inicio;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}