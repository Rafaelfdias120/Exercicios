#include <stdio.h>
#include <math.h>

int main(){

    float rc, ac, PI = 3.141592;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &rc);

    ac = PI * pow(rc, 2);

    printf("Area do circulo correspondente: %2.f", ac);

    return 0;

}