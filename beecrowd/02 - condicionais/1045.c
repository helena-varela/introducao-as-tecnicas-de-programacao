// Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A 
// representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos 
// seguintes casos, sempre escrevendo uma mensagem adequada:

// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

#include <stdio.h>

int main(){
    float A, B, C, menor, medio, maior;

    scanf("%f %f %f", &A, &B, &C);
    
    if (A >= B && A >= C)
    {
        maior= A;
        if (B >= C)
        {
            medio = B;
            menor = C;
        }
        else if (C >= B)
        {
            medio = C;
            menor = B;
        }
    }
    else if (B >= A && B >= C)
    {
        maior = B;
        if (A >= C)
        {
            medio = A;
            menor = C;
        }
        else if(C >= A){
            medio = C;
            menor = A;
        }
    }
    else if (C >= A && C >= B)
    {
        maior = C;
        if (A >= B)
        {
            medio = A;
            menor = B;
        }
        else if (B >= A)
        {
            medio = B;
            menor = A;
        }
    }
    
    if (maior >= medio + menor)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(maior * maior == menor * menor + medio * medio){
            printf("TRIANGULO RETANGULO\n");
        }
        if(maior * maior > menor * menor + medio * medio){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (maior * maior < menor * menor + medio * medio)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (maior == medio && medio == menor)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((maior == menor && maior != medio) || (maior == medio && maior != menor) || (menor == medio && menor != maior))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}