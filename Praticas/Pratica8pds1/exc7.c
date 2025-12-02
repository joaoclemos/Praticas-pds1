#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct evento {
    char nome[51];
    char local[51];
    struct data data_evento;
};

int main() {
    int n;
    scanf("%d", &n);

    struct evento agenda[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf(" %50[^\n]", agenda[i].nome);
        scanf(" %50[^\n]", agenda[i].local);
        scanf("%d %d %d", &agenda[i].data_evento.dia, 
                           &agenda[i].data_evento.mes, 
                           &agenda[i].data_evento.ano);
    }

    int dia_busca, mes_busca, ano_busca;
    scanf("%d %d %d", &dia_busca, &mes_busca, &ano_busca);

    int encontrados = 0;
    for (i = 0; i < n; i++) {
        if (agenda[i].data_evento.dia == dia_busca &&
            agenda[i].data_evento.mes == mes_busca &&
            agenda[i].data_evento.ano == ano_busca) {
            
            printf("%s\n", agenda[i].nome);
            printf("%s\n", agenda[i].local);
            encontrados = 1;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum evento encontrado!\n");
    }

    return 0;
}