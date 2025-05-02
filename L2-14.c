#include <stdio.h>

int main(){

    char letra = 'a';

    printf("Digite uma letra Maiuscula: ");
    scanf("%c", &letra);

    if (letra >= 65 && letra <= 90){
        letra += 32;
    }

    printf("letra convertida para minuscula: %c", letra);

    return 0;
    
}