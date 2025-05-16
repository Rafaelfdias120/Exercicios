#include <stdio.h>

int main(){

    char letra1 = 'a', letra2 = 'b', letra3 = 'c';

    printf("digite a primeira letra: ");
    scanf(" %c", &letra1);

    printf("digite a segunda letra: ");
    scanf(" %c", &letra2);

    printf("digite a terceira letra: ");
    scanf(" %c", &letra3);

    printf(" %c\n %c\n %c\n", letra1, letra2, letra3);

    return 0;
}