#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *arquivo;
    int numero;
    int soma_total = 0;
    int maior;
    int menor;
    int soma_pares = 0;
    int cont_pares = 0;
    int cont_primos = 0;
    int cont_total = 0;
    double media_pares = 0.0;

    arquivo = fopen("case.txt", "r");

    if (arquivo == NULL) {
        return 1;
    }

    while (fscanf(arquivo, "%d", &numero) == 1) {
        soma_total += numero;

        if (cont_total == 0) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
        cont_total++;

        if (numero % 2 == 0) {
            soma_pares += numero;
            cont_pares++;
        }

        if (eh_primo(numero)) {
            cont_primos++;
        }
    }

    fclose(arquivo);

    if (cont_pares > 0) {
        media_pares = (double)soma_pares / cont_pares;
    }

    printf("A soma é: %d\n", soma_total);
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A média dos pares é: %.2f\n", media_pares);
    printf("O número de primos é: %d\n", cont_primos);

    return 0;
}