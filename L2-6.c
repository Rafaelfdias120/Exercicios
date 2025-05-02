#include <stdio.h>

int main(){

    int km, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%d", &km);

    ms = km / 36;

    printf("Velocidade convertida em ms/s: %d", ms);

    return 0;
}