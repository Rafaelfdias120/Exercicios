#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, raiz, x1, x2;

    printf("Digite os coeficientes da equacao: ");
    scanf("%f %f %f", &a, &b, &c);

    if( a == 0 ){
        printf("Nao e equacacao de segundo grau: ");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if( delta < 0 ){
        printf("Nao exixte raiz");
        return 0;
    }

    else if( delta == 0 ){
        raiz = -b / (2 * a);
        printf("Raiz unica %.2f", raiz);
        return 0;
    }

    else if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes um e dois: %.2f %.2f", x1, x2);
    }
    return 0;
}