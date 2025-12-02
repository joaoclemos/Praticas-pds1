#include <stdio.h>

void imprimeBinario(int n) {
    if (n > 1) {
        imprimeBinario(n / 2);
    }
    printf("%d", n % 2);
}