#include <stdio.h>

void main() {
    float saldo = 789.54;
    float taxa = 1.0056;

    saldo = saldo * taxa;
    saldo = (saldo + 303.20)* taxa;
    saldo = (saldo - 58.25) * taxa;
    printf("%.2f\n", saldo);
}
