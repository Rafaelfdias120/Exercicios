#include <stdio.h>

int main(){

    char letra1 = 'a', letra2 = 'b', letra3 = 'c';
    int n1 = 0, n2 = 0, n3 = 0;
    float nq1 = 0.0, nq2 = 0.0, nq3 = 0.0;

    printf("Digite tres letras: ");
    scanf("%c %c %c", &letra1, &letra2, &letra3);

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &nq1, &nq2, &nq3);

    printf("Letras lidas: \n%c\n%c\n%c\n", letra1, letra2, letra3);

    printf("Letras numeros: \t%d\t%d\t%d\t \n", n1, n2, n3);

    printf("Letras numeros quebrados: \v%f\v%f\v%f\v", nq1, nq2, nq3);

    return 0;

}