int menorElemento(int v[], int n) {
    int min;
    if (n == 1) {
        return v[0];
    }
    min = menorElemento(v, n - 1);
    if (v[n - 1] < min) {
        return v[n - 1];
    }
    return min;
}