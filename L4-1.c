#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido. Digite um número positivo.\n");
        return 1;
    }

    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
