#include <stdio.h>
#include <math.h>

int main(){

    int n, nq, nr;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (n > 1)
    {
        nq = pow(n, 2);
        nr = sqrt(n);

        printf("Numero ao quadrado: %d\n", nq);
        printf("Raiz quadrada do numero: %d\n", nr);
    }
    
    return 0;
}