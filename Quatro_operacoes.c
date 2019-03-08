#include <stdio.h>

    int main(){
        puts("digite dois valores");
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        printf("%d\n", a - b);
        printf("%d\n", a * b);
        printf("%.2f\n", a / b);
        printf("%d\n", a % b);

        return 0;
    }