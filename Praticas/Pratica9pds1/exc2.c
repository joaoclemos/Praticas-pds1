#include <stdio.h>

int main() {
    FILE *arquivo;
    int inicio, fim, passo;
    int celsius, fahrenheit, kelvin;

    arquivo = fopen("case.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    fscanf(arquivo, "%d", &inicio);
    fscanf(arquivo, "%d", &fim);
    fscanf(arquivo, "%d", &passo);

    fclose(arquivo);

    for (celsius = inicio; celsius <= fim; celsius = celsius + passo) {
        fahrenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273;
        printf("%d %d %d\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}