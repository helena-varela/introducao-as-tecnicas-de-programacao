// Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
// quantos valores digitados foram ímpares, quantos valores digitados foram positivos 
// e quantos valores digitados foram negativos.

#include <stdio.h>

int main(){
    int numero, pares=0, impares=0, negativos=0, positivos=0;

    for(int i=0; i<5; i++){
        scanf("%d", &numero);

        if (numero < 0)
        {
            negativos += 1;
        }
        else if (numero > 0)
        {
            positivos += 1;
        }

        if (numero % 2 ==0){
            pares += 1;
        }
        else{
            impares +=1;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    
    return 0;
}