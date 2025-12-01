#include <stdio.h>

int fatorial(int n){
    if (n == 0)
    {
        return 1;
    }
    else{
        return (n * fatorial(n-1));
    }
}

int main(){
    int n, valor;
    scanf("%d", &n);
    valor = fatorial(n);
    printf("%d\n", valor);
    return 0;
}