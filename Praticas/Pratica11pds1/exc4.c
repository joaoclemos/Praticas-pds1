double mediaVetor(int v[], int n) {
    if (n <= 0) {
        return 0.0;
    }
    return ((mediaVetor(v, n - 1) * (n - 1)) + v[n - 1]) / n;
}