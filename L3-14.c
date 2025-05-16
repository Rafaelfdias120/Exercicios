#include <stdio.h>

int main(){

    int  n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (( n % 3 == 0 || n % 5 == 0 ) && !( n % 3 == 0 && n % 5 == 0)){ 
        
        printf("Esse numero e divisivel por 3 ou 5");
    }
    else {
        printf("Esse numero nao e divisivel por 3 ou 5");
    }
    
    return 0;
}