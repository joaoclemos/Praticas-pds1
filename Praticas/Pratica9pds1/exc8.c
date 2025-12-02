#include <stdio.h>

int main() {
    FILE *arquivo;
    int dia_atual, mes_atual, ano_atual;
    int dia_recente, mes_recente, ano_recente;
    int primeira_vez = 1;

    arquivo = fopen("datas.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%d/%d/%d", &dia_atual, &mes_atual, &ano_atual) == 3) {
        if (primeira_vez) {
            dia_recente = dia_atual;
            mes_recente = mes_atual;
            ano_recente = ano_atual;
            primeira_vez = 0;
        } else {
            if (ano_atual > ano_recente) {
                dia_recente = dia_atual;
                mes_recente = mes_atual;
                ano_recente = ano_atual;
            } else if (ano_atual == ano_recente) {
                if (mes_atual > mes_recente) {
                    dia_recente = dia_atual;
                    mes_recente = mes_atual;
                    ano_recente = ano_atual;
                } else if (mes_atual == mes_recente) {
                    if (dia_atual > dia_recente) {
                        dia_recente = dia_atual;
                        mes_recente = mes_atual;
                        ano_recente = ano_atual;
                    }
                }
            }
        }
    }

    fclose(arquivo);

    printf("%02d/%02d/%d\n", dia_recente, mes_recente, ano_recente);

    return 0;
}