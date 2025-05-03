#include <stdio.h>

int main(){

    float sal, empres, r;

    printf("Digite o salario: ");
    scanf("%f", &sal);

    printf("Digite o emprestimo: ");
    scanf("%f", &empres);

    r = sal * 0.20;

    if (empres > r)
    {
        printf("Emprestimo nao concedido. ");
    }
    else
    {
        printf("Emprestimo concedido. ");
    }
      
    return 0;
}