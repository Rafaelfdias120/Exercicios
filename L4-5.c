#include <stdio.h>

int main() {
    int soma = 0;
    int i;

    for (i = 1; i <= 50; i++) {
        soma += i * 2;  // Os 50 primeiros pares são: 2, 4, 6, ..., 100
    }

    printf("A soma dos 50 primeiros numeros pares é: %d\n", soma);

    return 0;
}
