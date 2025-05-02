#include <stdio.h>
#include <math.h>

int main(){

    int a, b, h;

    printf("Digite o valor do cateto a: ");
    scanf("%d", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%d", &b);

    h = sqrt(pow(a, 2) + pow(b, 2));

    printf("Valor da hipotenusa: %d", h);

    return 0;
}
