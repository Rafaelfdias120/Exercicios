#include <stdio.h>

int main(){

    int idade, ano, nascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    nascimento = ano - idade;

    printf("Seu ano de nascimento: %d", nascimento);

    return 0;

}