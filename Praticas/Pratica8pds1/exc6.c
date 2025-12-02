#include <stdio.h>

struct atleta {
    char nome[20];
    char esporte[20];
    int idade;
    double altura;
};

int main() {
    struct atleta atletas[5];
    struct atleta temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%19s %19s %d %lf", 
              atletas[i].nome, 
              atletas[i].esporte, 
              &atletas[i].idade, 
              &atletas[i].altura);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (atletas[j].idade < atletas[j+1].idade) {
                temp = atletas[j];
                atletas[j] = atletas[j+1];
                atletas[j+1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d- %s\n", i + 1, atletas[i].nome);
    }

    return 0;
}