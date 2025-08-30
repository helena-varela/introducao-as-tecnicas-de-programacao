// Faça um programa que leia 6 valores. Estes valores serão somente negativos ou 
// positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores 
// positivos digitados.

#include <stdio.h>

int main(){
    float numero;
    int total=0;
  
    for(int i=0; i<6; i++){
        scanf("%f", &numero);
        if (numero > 0){
            total += 1;
        }
    }
    printf("%d valores positivos\n", total);

    return 0;
}