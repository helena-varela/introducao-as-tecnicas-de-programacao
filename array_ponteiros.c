#include <stdio.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *p, indice = 2;
    p = vet;
    // v et[0] e e q u i v a l e nt e a  ́ ∗p;
    printf( "%d\n" ,*p); // 1
    printf( "%d\n" , vet[0]); // 1

    // v et[i n d i c e] e e q u i v a l e nt e  ́ / / a ∗(p + i n d i c e);
    printf("%d\n" , vet[indice]); // 3
    printf( "%d\n", *(p + indice)); // 3

    // v et e e q u i v a l e nt e  ́ / / a &v et[0];
    printf("%d\n"  , vet); // endereço em decimal, decai automaticamente para o endereço do seu primeiro elemento (&vet[0])
    printf( "%d\n" , &vet[0]); // endereço em decimal 

    // &v et[i n d i c e] e e q u i v a l e nt e  ́ / / a(v et + i n d i c e);
    printf("%d\n" , &vet[indice]); // endereço em decimal da posição vet[2]
    printf( "%d\n" , (vet + indice)); // endereço de vet[0] somado a 2 = vet[2]

    return 0;
}

