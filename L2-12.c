#include <stdio.h>
#include <math.h>

int main(){

    float raio, altura, volume, PI = 2.141592;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2) * altura;

    printf("Volume do cilindro: %2.f", volume);

    return 0;
}