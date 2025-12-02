#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char letra1 = 'P';
    char letra2 = 'D';
    char letra3 = 'S';
    char letra4 = '-';
    char letra5 = '1';
    int soma;
    long long int mult;

    soma = letra1 + letra2 + letra3 + letra4 + letra5;
    mult = letra1 * letra2 * letra3 * letra4 * letra5;

    printf("%d %d", soma, mult);


    return 0;
}
