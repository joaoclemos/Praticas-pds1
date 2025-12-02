#include <stdio.h>

int main(void) {
    int n_aeds, n_calculo;

    scanf("%d", &n_aeds);
    int aeds[n_aeds];
    for (int i = 0; i < n_aeds; i++) {
        scanf("%d", &aeds[i]);
    }

    scanf("%d", &n_calculo);
    int calculo[n_calculo];
    for (int i = 0; i < n_calculo; i++) {
        scanf("%d", &calculo[i]);
    }

    for (int i = 0; i < n_aeds; i++) {
        for (int j = 0; j < n_calculo; j++) {
            if (aeds[i] == calculo[j]) {
                printf("%d ", aeds[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}