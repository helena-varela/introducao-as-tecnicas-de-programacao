#include <stdio.h>

void aumenta(int n){
    if (n == 5)
    {
        return;
    }
    else{
        printf("%d\n", n);
        aumenta(n+1);
    }
}

int main(){
    aumenta(1);
    return 0;
}