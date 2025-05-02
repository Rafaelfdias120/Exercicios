#include <stdio.h>

int main(){

    float n1, n2, n3, n4, r, mn;

    printf("Digite quatro numeros: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    r = n1 + n2 + n3 + n4;

    mn = r / 4;

    printf("Media aritimetica dos numeros: %2.f", mn);

    return 0;

}