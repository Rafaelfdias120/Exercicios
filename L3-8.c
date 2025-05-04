#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Categoria do nadador: infantil A ");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Categoria do nadador: infantil B ");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Categoria do nadador: Juvenil A ");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Categoria do nadador: Juvenil B ");
    }
    else if (idade >= 18)
    {
        printf("Categoria do nadador: Senior ");
    }
    
    return 0;
}