float calculamedia(int n, float v[]) {
    float soma = 0.0;

    if (n == 0) {
        return 0.0;
    }

    for (int i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma / n;
}