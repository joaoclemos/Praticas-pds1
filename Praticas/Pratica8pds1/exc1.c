#include <stdio.h>
#include <math.h>

struct Ponto {
    double x;
    double y;
};

int main() {
    struct Ponto p1, p2;
    double distancia;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("%.2f\n", distancia);

    return 0;
}