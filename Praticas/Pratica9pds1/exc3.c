#include <stdio.h>

int mdc(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    FILE *arquivo;
    int n1, n2, n3, n4;
    int resultado;

    arquivo = fopen("case.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    fscanf(arquivo, "%d", &n1);
    fscanf(arquivo, "%d", &n2);
    fscanf(arquivo, "%d", &n3);
    fscanf(arquivo, "%d", &n4);

    fclose(arquivo);

    resultado = mdc(n1, n2);
    resultado = mdc(resultado, n3);
    resultado = mdc(resultado, n4);

    printf("%d\n", resultado);

    return 0;
}