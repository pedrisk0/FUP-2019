#include <stdio.h>

int main(){
    puts("digite um valor.\n");
    int a = 0;
    scanf("%d", &a);

    if (a >= 50) {
        printf("o valor %d eh maior ou igual a 50.\n", a);
    } else {
        printf("o valor %d eh menor que 50.\n", a);
    }

    return 0;
}