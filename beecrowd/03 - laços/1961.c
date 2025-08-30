// Em cada fase do jogo do Pula Sapo você deve conduzir seu anfíbio através de uma sequência de canos de alturas diferentes até 
// chegar a salvo no cano mais à direita. Entretanto, o sapo só consegue sobreviver se a diferença de altura entre canos consecutivos 
// for de, no máximo, a altura do pulo do sapo. Caso a altura do cano seguinte seja muito alta, o sapo bate no cano e cai. Se a 
// altura do cano seguinte for muito baixa, o sapo não aguenta a queda. O sapo sempre começa em cima do cano mais à esquerda.
// Neste jogo, a distância entre os canos é irrelevante, ou seja, o sapo sempre consegue alcançar o próximo cano com um pulo.

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int P, N;
    int cano_atual, cano_anterior;

    scanf("%d %d", &P, &N);    
    scanf("%d", &cano_anterior);
    
    for (int i = 1; i < N; i++) {
        scanf("%d", &cano_atual);
        
        int diff = abs(cano_atual - cano_anterior);
        if (diff > P) {
            printf("GAME OVER\n");
            return 0;
        }
        
        cano_anterior = cano_atual; 
    }
    
    printf("YOU WIN\n");
    return 0;
}