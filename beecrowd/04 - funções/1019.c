// Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma 
// fábrica, e informe-o expresso no formato horas:minutos:segundos.

#include <stdio.h>

void convertor(int n);

int main(){
    int n;
    scanf("%d", &n);

    convertor(n);
    
    return 0;
}

void convertor(int n){
    int horas = n/3600;
    int minutos = (n%3600)/60;
    int segundos = n % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
} 