// Você tem em mãos dois cabos circulares de energia. O primeiro cabo tem raio R1 e o segundo raio R2. 
// Você precisa comprar um conduite circular (veja a imagem abaixo que ilustra um conduite) de maneira a 
// passar os dois cabos por dentro dele: Qual o menor raio do conduite que você deve comprar? Em outras 
// palavras, dado dois círculos, qual o raio do menor círculo que possa englobar ambos os dois?

#include <stdio.h>

int main(){
    int T;
    int R1, R2;

    scanf("%d", &T);

    for(int i =0; i < T; i++){
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }

    return 0;
}