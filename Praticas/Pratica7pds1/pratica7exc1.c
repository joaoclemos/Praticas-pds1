#include <stdio.h>

void main (){
    int N;
    scanf("%d", &N);
    int V[N];
    for (int i=0; i<N; i++){
        scanf("%d", &V[i]);
    }
    for (int i = N-1; i>=0;i--){
        printf("%d\n", V[i]);
    }
}
