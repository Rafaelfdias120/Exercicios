#include <stdio.h>

int main(){

    float c, f;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &c);

    f = c * (9.0/5.0) + 32.0;

    printf("Temperatura em convertida em Fahrenheit: %2.f", f);

    return 0;
}