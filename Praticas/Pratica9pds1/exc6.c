#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOMES 100
#define MAX_COMPRIMENTO 100

int main() {
    FILE *arquivo;
    char nomes[MAX_NOMES][MAX_COMPRIMENTO];
    int num_nomes = 0;
    char temp[MAX_COMPRIMENTO];

    arquivo = fopen("case.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%s", nomes[num_nomes]) == 1) {
        num_nomes++;
    }

    fclose(arquivo);

    for (int i = 0; i < num_nomes - 1; i++) {
        for (int j = i + 1; j < num_nomes; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    for (int i = 0; i < num_nomes; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}