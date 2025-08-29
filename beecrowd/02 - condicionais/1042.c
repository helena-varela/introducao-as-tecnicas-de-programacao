// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, 
// uma linha em branco e em seguida, os valores na sequência como foram lidos.

#include <stdio.h>

int main(){
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A < B && B < C)
    {
        printf("%d\n%d\n%d\n\n", A, B, C);
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(A > B && B > C){
        printf("%d\n%d\n%d\n\n", C, B, A);
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if (B > A && A > C)
    {
        printf("%d\n%d\n%d\n\n", C, A, B);
        printf("%d\n%d\n%d\n", A, B, C);   
    }
    else if (C > A && A > B)
    {
        printf("%d\n%d\n%d\n\n", B, A, C );
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(A > C && C > B){
        printf("%d\n%d\n%d\n\n", B, C, A);
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(B > C && C > A){
        printf("%d\n%d\n%d\n\n", A, C, B);
        printf("%d\n%d\n%d\n", A, B, C);
    }
    
    return 0;
}