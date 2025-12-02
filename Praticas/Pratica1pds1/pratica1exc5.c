#include <stdio.h>
#include <math.h>

void main() {
    float altura1 = 1.84;
    float altura2 = 1.76;
    float peso1 = 122;
    float peso2 = 45;
    float min, min2;
    float imc1 = 122/pow(altura1, 2);
    float imc2 = 45/pow(altura2, 2);
    min = peso1 - 25 * altura1 * altura1;
    min2 = 18.5 *altura2 * altura2 - peso2;
    printf("%.1f %.1f\n", min, min2);
}
