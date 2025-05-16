#include <stdio.h>

int main() {
    int n, contador = 0, numero = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while (contador < n) {
        printf("%d ", numero);
        numero += 2;
        contador++;
    }

    return 0;
}
