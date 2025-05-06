#include <stdio.h>

int main(){

    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

if(altura <= 1.20 && peso <= 60.0){
    printf("Categoria: A");
}
else if(altura <= 1.20 && peso > 60.0 && peso <= 90.0){
    printf("Categoria: D");  
}
else if(altura <= 1.20 && peso > 90.0){
    printf("Categoria: G");   
}
else if(altura > 1.20 && altura <= 1.70 && peso <= 60.0){
    printf("Categoria: B");
}
else if(altura > 1.20 && altura <= 1.70 && peso > 60.0 && peso <= 90.0){
    printf("Categoria: E");  
}
else if(altura > 1.20 && altura <= 1.70 && peso > 90.0){
    printf("Categoria: H");
}
else if(altura > 1.70 && peso <= 60.0){
    printf("Categoria: C");
}
else if(altura > 1.70 && peso > 60.0 && peso <= 90.0){
    printf("Categoria: F");  
}
else if(altura > 1.70 && peso > 90.0){
    printf("Categoria: I");
}
    return 0;
}