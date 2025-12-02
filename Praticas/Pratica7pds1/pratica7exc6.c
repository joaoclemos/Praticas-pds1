void mediaMovel(int N, float v[], int k, float m[]) {
    for (int i = 0; i <= N - k; i++) {
        float soma = 0.0;
        for (int j = 0; j < k; j++) {
            soma += v[i + j];
        }
        m[i] = soma / k;
    }
}