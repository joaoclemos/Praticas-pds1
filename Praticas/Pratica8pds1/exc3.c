#include <stdio.h>

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
    struct ponto p_teste;

    scanf("%lf %lf", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);

    while (1) {
        scanf("%lf %lf", &r.inferiorDireito.x, &r.inferiorDireito.y);
        
        if (r.inferiorDireito.x > r.superiorEsquerdo.x && r.inferiorDireito.y < r.superiorEsquerdo.y) {
            break;
        } else {
            printf("Coordenada Invalida\n");
        }
    }

    scanf("%lf %lf", &p_teste.x, &p_teste.y);

    if (p_teste.x >= r.superiorEsquerdo.x &&
        p_teste.x <= r.inferiorDireito.x &&
        p_teste.y <= r.superiorEsquerdo.y &&
        p_teste.y >= r.inferiorDireito.y) {
        printf("O ponto pertence ao retangulo\n");
    } else {
        printf("O ponto nao pertence ao retangulo\n");
    }

    return 0;
}