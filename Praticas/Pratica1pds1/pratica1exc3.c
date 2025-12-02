#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828;
    float c =0;
    c = b;
    b = a;
    a = c;
    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
}
