// Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada 
// letra pelo equivalente em duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). 
// Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as 
// letras com quaisquer número de posições.

#include <stdio.h>
#include <string.h>

int main(){
    int n, casasdireita;
    char palavra[50];     

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", palavra);
        scanf("%d", &casasdireita);

        for (int j = 0; j < strlen(palavra); j++)
        {
            int letradeslocada = palavra[j] - casasdireita;
            if (letradeslocada < 65)
            {
                palavra[j] = 91 - (65 - letradeslocada);
            }
            else{
                palavra[j]-=casasdireita;
            }
            
        }
        printf("%s\n", palavra);
    }
    return 0;
}