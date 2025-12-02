float produtoEscalar(int N, float A[], float B[]) {
    float produto = 0.0;
    
    for (int i = 0; i < N; i++) {
        produto += A[i] * B[i];
    }
    
    return produto;
}