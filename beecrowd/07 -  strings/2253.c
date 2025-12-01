#include <stdio.h>
#include <string.h>

int main(){
    char senha[100];
    bool senha_valida = 1;

    scanf("%s", senha)
    
    for (int i = 0; i < senha; i++)
    {

        if (6 <= (int)strlen(senha) <= 32)
        {
            senha_valida = 0;
        }
        
        if (ctype(senha, " ") || ctype(senha, ".") || "," )
        {
            
        }
    }
    
        
    
    
    
    return 0;
}