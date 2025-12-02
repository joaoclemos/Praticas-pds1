#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome_atual[100];
    char nome_jovem[100];
    char nome_velho[100];
    int idade_atual;
    int idade_jovem;
    int idade_velho;
    int primeira_vez = 1;

    arquivo = fopen("case.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%s\n%d", nome_atual, &idade_atual) == 2) {
        if (primeira_vez) {
            idade_jovem = idade_atual;
            strcpy(nome_jovem, nome_atual);
            idade_velho = idade_atual;
            strcpy(nome_velho, nome_atual);
            primeira_vez = 0;
        } else {
            if (idade_atual < idade_jovem) {
                idade_jovem = idade_atual;
                strcpy(nome_jovem, nome_atual);
            }
            if (idade_atual > idade_velho) {
                idade_velho = idade_atual;
                strcpy(nome_velho, nome_atual);
            }
        }
    }

    fclose(arquivo);

    printf("%s\n", nome_jovem);
    printf("%s\n", nome_velho);

    return 0;
}