#include <stdio.h>

int main(){
    int var;
    var = 15; 

    printf("Conteúdo de var: %d\n", var);
    printf("Endereço de var: %p\n", &var);
    printf("\n");

    int *ptr;
    ptr = &var;

    printf("Conteúdo apontado por ptr: %d\n", *ptr); //vê o valor que ptr aponta
    printf("Endereço apontado por ptr: %p\n", ptr); // vê o que está sendo armazenado em ptr que é o endereço de var

    printf("Endereço de ptr: %p\n", &ptr);

    return 0;
}