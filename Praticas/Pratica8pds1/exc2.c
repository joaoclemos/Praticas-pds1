#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
};

struct retangulo {
    struct ponto superiorEsquerdo;
    struct ponto inferiorDireito;
};

int main() {
    struct retangulo r;
    double base, altura, area, perimetro, diagonal;

    scanf("%lf %lf", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);

    while (1) {
        scanf("%lf %lf", &r.inferiorDireito.x, &r.inferiorDireito.y);
        
        if (r.inferiorDireito.x > r.superiorEsquerdo.x && r.inferiorDireito.y < r.superiorEsquerdo.y) {
            break;
        } else {
            printf("Coordenada Invalida\n");
        }
    }

    base = r.inferiorDireito.x - r.superiorEsquerdo.x;
    altura = r.superiorEsquerdo.y - r.inferiorDireito.y;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("Area = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);
    printf("Diagonal = %.2f\n", diagonal);

    return 0;
}