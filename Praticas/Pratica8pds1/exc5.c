#include <stdio.h>
#include <string.h>

struct atleta {
    char nome[20];
    char esporte[20];
    int idade;
    double altura;
};

int main() {
    struct atleta atletas[5];
    char nomeMaisAlto[20];
    char nomeMaisVelho[20];
    double maiorAltura = 0.0;
    int maiorIdade = 0;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%19s %19s %d %lf", 
              atletas[i].nome, 
              atletas[i].esporte, 
              &atletas[i].idade, 
              &atletas[i].altura);

        if (i == 0) {
            maiorAltura = atletas[i].altura;
            maiorIdade = atletas[i].idade;
            strcpy(nomeMaisAlto, atletas[i].nome);
            strcpy(nomeMaisVelho, atletas[i].nome);
        } else {
            if (atletas[i].altura > maiorAltura) {
                maiorAltura = atletas[i].altura;
                strcpy(nomeMaisAlto, atletas[i].nome);
            }
            if (atletas[i].idade > maiorIdade) {
                maiorIdade = atletas[i].idade;
                strcpy(nomeMaisVelho, atletas[i].nome);
            }
        }
    }

    printf("Mais alto: %s\n", nomeMaisAlto);
    printf("Mais velho: %s\n", nomeMaisVelho);

    return 0;
}