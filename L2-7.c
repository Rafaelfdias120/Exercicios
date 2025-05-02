#include <stdio.h>

int main(){

    int real, dolar;

    printf("Digite o valor em real: ");
    scanf("%d", &real);

    dolar = real / 6;

    printf("Valor convertido em dolar: %d", dolar);

    return 0;
}