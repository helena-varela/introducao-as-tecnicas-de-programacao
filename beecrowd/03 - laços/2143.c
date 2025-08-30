// Todo ano após a competição que ocorre na cidade de Taxilândia, os participantes e os coaches vão para o 
// célebre restaurante Radar. Porém, os garçons (sempre muito gentis e educados) ficam sobrecarregados 
// devido à quantidade de pessoas, e consequentemente, acabam demorando um pouco para atender a um pedido.
// Os participantes ou coaches que sentam nas pontas são os privilegiados, pois são atendidos com somente 
// um pedido, mas os demais precisam sempre pedir duas vezes, pois os garçons (apesar de gentis e educados) 
// são desatentos e se esquecem facilmente dos pedidos. Além disso, há uma superstição entre os participantes
// e coaches de que se não houver um número par de pessoas que não sentam nas pontas, na próxima competição 
// nenhuma equipe da universidade conseguirá vencer.
// Portanto, sua tarefa é determinar a soma da quantidade de pedidos de cada um para saber se vale a pena 
// ir ao Radar. Mas apesar do resultado, lembre-se: sempre vale a pena ir ao Radar!

#include <stdio.h>

int main() {
    int T, N;
    
    while (1) {
        scanf("%d", &T);
        if (T == 0) break;
        
        for (int i = 0; i < T; i++) {
            scanf("%d", &N);
            if (N % 2 == 0) {
                printf("%d\n", 2*N - 2);
            } else {
                printf("%d\n", 2*N - 1);
            }
        }
    }
    
    return 0;
}