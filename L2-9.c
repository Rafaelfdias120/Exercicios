#include <stdio.h>

int main(){

    float graus, radianos, PI;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    PI = 3.141592;

    radianos = graus * PI / 180;

    printf("Angulo convertido para radianos: %2.f", radianos);

    return 0;
}