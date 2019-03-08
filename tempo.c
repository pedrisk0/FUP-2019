#include <stdio.h>

int main(){
    int hr = 0;
    int min = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;
    
    scanf("%d", &hr);
    scanf("%d", &min);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    int an = ano % 100;
    int hora = hr % 12;
    printf("%.02d:%.02d %.02d/%.02d/%.02d", hora, min, dia, mes, an);
    return 0;
    
}