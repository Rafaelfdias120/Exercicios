#include <stdio.h>

int main(){

    float premio = 780.000, pg1, pg2, pg3;

    pg1 = premio / 0.46;
    pg2 = premio / 0.32;
    pg3 = premio / 0.22;

    printf("Premio do primeiro ganhador: %2.f\n", pg1);
    printf("Premio do segundo ganhador: %2.f\n", pg2);
    printf("Premio do terceiro ganhador: %2.f\n", pg3);

    return 0;
}