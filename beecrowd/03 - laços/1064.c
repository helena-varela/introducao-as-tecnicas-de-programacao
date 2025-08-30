// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
// Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
// com um dígito após o ponto decimal.

#include <stdio.h>

int main(){
    float numero, media, soma = 0;
    int total=0;
    
    for(int i=0; i<6; i++){
        scanf("%f", &numero);

        if (numero > 0){
            total += 1;
            soma = soma + numero;
        }
    }
    media = soma/total;

    printf("%d valores positivos\n", total);
    printf("%.1f\n", media);

    return 0;
}