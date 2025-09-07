// João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se 
// conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que 
// ajude João a descobrir a quantidade de leds necessário para montar o valor.

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char palavra[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int soma = 0;
        scanf("%s", palavra);

        for (int j = 0; j < strlen(palavra); j++)
        {
            if (palavra[j]=='1')
            {
                soma+=2;
            }
            else if (palavra[j]=='2' || palavra[j]=='3' || palavra[j]=='5')
            {
                soma+=5;
            }
            else if (palavra[j]=='4')
            {
                soma+=4;
            }
            else if (palavra[j]=='6' || palavra[j]=='9' || palavra[j]=='0')
            {
                soma+=6;
            }
            else if (palavra[j]=='7')
            {
                soma+=3;
            }
            else if (palavra[j]=='8')
            {
                soma+=7;
            }   
        }
        printf("%d leds\n", soma);
    }

    
    return 0;
}