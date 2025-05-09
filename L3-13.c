#include <stdio.h>

int main(){

    int op, n1, n2, r;

    do
    {
        printf("\n===Menu===\n");
        printf("Escolha uma opcao de calculo matematico: \n");
        printf("1. Adicao \n");
        printf("2. Subtracao \n");
        printf("3. Multiplicacao \n");
        printf("4. Divisao \n");
        scanf("%d", &op);

        switch (op){
        case 1:
            printf("Escolha dois numeros: ");
            scanf("%d %d", &n1, &n2);
            r = n1 + n2;
            printf("Resultado: %d", r);
            break;
        case 2:
        printf("Escolha dois numeros: ");
        scanf("%d %d", &n1, &n2);
            r = n1 - n2;
            printf("Resultado: %d", r);
            break;
        case 3:
        printf("Escolha dois numeros: ");
        scanf("%d %d", &n1, &n2);
            r = n1 * n2;
            printf("Resultado: %d", r);
            break;
        case 4:
        printf("Escolha dois numeros: ");
        scanf("%d %d", &n1, &n2);
            r = n1 / n2;
            printf("Resultado: %d", r);
            break;
        }
    } while (op != 4);

    return 0;
    
}