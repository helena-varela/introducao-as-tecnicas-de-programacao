// Sua tarefa é escrever um algoritmo que faça a inserção do bit B na mensagem S, de forma que após a inserção a mensagem S 
// tenha um número par de bits de valor 1.

#include <stdio.h>
#include <string.h>

void contarbits(char bits[100]){
    int pares = 0;
    for (int i = 0; i < strlen(bits); i++)
    {
        if (bits[i] == '1')
        {
            pares += 1;
        }
    }

    if (pares % 2 == 0)
    {
        printf("%s0\n", bits);
    }
    else{
        printf("%s1\n", bits);
    }
}

int main(){
    char bits[100];

    scanf("%s", bits);
    contarbits(bits);
    
    return 0;
}