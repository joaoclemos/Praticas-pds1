#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha_atual[1000];
    char maior_linha[1000];
    int comprimento_maximo = 0;
    int comprimento_atual = 0;

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fgets(linha_atual, 1000, arquivo) != NULL) {
        comprimento_atual = strlen(linha_atual);
        
        if (comprimento_atual > comprimento_maximo) {
            comprimento_maximo = comprimento_atual;
            strcpy(maior_linha, linha_atual);
        }
    }

    fclose(arquivo);

    maior_linha[strcspn(maior_linha, "\n")] = 0;

    printf("%s\n", maior_linha);
    printf("%d\n", comprimento_maximo);

    return 0;
}