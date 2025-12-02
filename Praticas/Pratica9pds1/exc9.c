#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[100];
    int n1, n2, n3, n4;
    double media;

    arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%s %d %d %d %d", nome, &n1, &n2, &n3, &n4) == 5) {
        media = (double)(n1 + n2 + n3 + n4) / 4.0;

        if (media >= 60.0) {
            printf("Nome: %s - Média: %.2f\n", nome, media);
        }
    }

    fclose(arquivo);

    return 0;
}