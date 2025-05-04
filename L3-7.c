#include <stdio.h>
#include <string.h>

int main(){

    char estado[10];
    float imp, valor, vf;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino: ");
    scanf("%s", estado);

    if (strcmp(estado, "mg")==0)
    {
        imp = valor * 0.07;
        vf = valor + imp;
        printf("Valor do produto mais imposto: %.2f", vf);
    }
    else if (strcmp(estado, "sp")==0)
    {
        imp = valor * 0.12;
        vf = valor + imp;
        printf("Valor do produto mais imposto: %.2f", vf);
    }
    else if (strcmp(estado, "rj")==0)
    {
        imp = valor * 0.15;
        vf = valor + imp;
        printf("Valor do produto mais imposto: %.2f", vf);
    }
    else if (strcmp(estado, "ms")==0)
    {
        imp = valor * 0.08;
        vf = valor + imp;
        printf("Valor do produto mais imposto: %.2f", vf);
    }
    else
    {
        printf("Estado invalido. Tente novamente. ");

        return 1;
    }
    
    return 0;   
}