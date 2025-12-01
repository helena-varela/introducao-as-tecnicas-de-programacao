#include <stdio.h>
#include <string.h>

int main(){

    char palavras[100];
    char *pedaco;
    int maior_palavra = 0;
    char maior_palavra_texto[100];

    while (1)
    {
        scanf("\n%s", palavras);

        if (strcmp(palavras, "0") == 0)
        {
            break;
            // strcmp(string, o que quer comparar) -> essa função compara a string com o conteúdo de outra string
        }

        pedaco = strtok(palavras, " ");

        // strtok(string, separador) -> quebra a string em função do caractere escolhido 

        while(pedaco != NULL){
            int tamanho_atual = strlen(pedaco);
            
            printf("%d",(int)strlen(pedaco));

            if (tamanho_atual >= maior_palavra)
            {
                maior_palavra = tamanho_atual;
                strcpy(maior_palavra_texto, pedaco);

                // strcpy(string copiada, string original ) -> copia uma string para outro vetor
            }
            
            pedaco = strtok(NULL, " ");

            if (pedaco == NULL)
            {
                printf("-");
            }
            
        }        

    }
    printf("\n");
    printf("The biggest word: %s\n", maior_palavra_texto);
    
    return 0;
}