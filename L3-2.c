#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

   if (n1 > n2)
   {
    printf("%d", n1);
   } 
   else if (n1 < n2)
   {
    printf("%d", n2);
   } 
   else if (n1 == n2)
   {
    printf("Os numeros são iguais. ");
   }
   
    return 0;
}