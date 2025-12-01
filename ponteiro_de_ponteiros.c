#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    printf("%d\n", **p2);

    **p2 = **p2 + 5;
    
    printf("%d\n", **p2);
    printf("%d\n", *p);
    printf("%d\n", x);

    return 0;
}