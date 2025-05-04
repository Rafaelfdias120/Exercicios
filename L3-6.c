#include <stdio.h>
#include <string.h>

int main(){

    float altura, ph, pm;
    char sexo[10];

    printf("Digite o seu sexo: ");
    scanf("%s", sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (strcmp(sexo, "homem")==0)
    {
        ph = (72.7 * altura) - 58.0;

        printf("Seu peso ideal: %.2f", ph);
    }
    else if (strcmp(sexo, "mulher")==0)
    {
        pm = (62.1 * altura) - 44.7;

        printf("Seu peso ideal: %.2f", pm);
    }
    
    return 0;  
}