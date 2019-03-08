#include <stdio.h>
int main(){
    puts("Quantos anos voce tem?");
    int idade = 0;
    scanf("%i", &idade);
    printf("parabens, eh lindo ter %i anos!\n", idade);

    puts("qual sua altura?");
    float altura = 0.0;
    scanf("%f", &altura);
    printf("que bom, voce deve ser um xuxu com %.2f de altura!\n", altura);

    puts("digite dia e mes de nascimento");
    int dia = 0;
    int mes = 0;
    scanf("%i %i", &dia, &mes);
    printf("%i/%i ? idai pora", dia, mes);
    

    return 0;
}