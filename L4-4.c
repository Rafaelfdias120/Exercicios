#include <stdio.h>

int main() {
    int numero = 1;
    int contador = 0;

    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}
