int somaCubos(int n) {
    if (n <= 0) {
        return 0;
    }
    return (n * n * n) + somaCubos(n - 1);
}