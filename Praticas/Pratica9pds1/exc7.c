#include <stdio.h>
#include <string.h>

int main() {
    int n;
    FILE *arquivo;
    char palavra[100];

    scanf("%d", &n);

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%s", palavra) == 1) {
        if (strlen(palavra) >= n) {
            printf("%s\n", palavra);
        }
    }

    fclose(arquivo);

    return 0;
}