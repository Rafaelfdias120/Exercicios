#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int n1, n2, n3, rs;
    char opc[20];

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Digite uma das opcoes (Geometrica, Ponderada, Harmonica, Aritimetica): ");
    scanf("%s", opc);

    if(strcmp(opc, "Geometrica")==0){
        rs = n1 * n2 * n3;
        printf("Calculo escolhido: %d", rs);
    }
    else if(strcmp(opc, "Ponderada")==0){
        rs = n1 + 2 * n2 + 3 * n3 / 6;
        printf("Calculo escolhido: %d", rs);
    }
    else if(strcmp(opc, "Harmonica")==0){
        rs = 1 / 1 + n1 + 1 + n2 + 1 + n3;
        printf("Calculo escolhido: %d", rs);
    }
    else if(strcmp(opc, "Aritimetica")==0){
        rs = n1 + n2 + n3 / 3;
        printf("Calculo escolhido: %d", rs);
    }
    return 0;
} 