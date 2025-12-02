#include <stdio.h>
#include <math.h>


float arredonda(float n) {
    if(fmod(n, 1.0) < 0.25){
        return n - fmod(n, 1.0);
    }
    else if (fmod(n, 1.0) >=0.25 && fmod(n,1.0) < 0.75){
        return n - fmod(n, 1.0) + 0.5;
    }
    else
        return n -fmod(n, 1.0) + 1.0;
}

void arredondaNotas(float *endNota1, float *endNota2, float *endNota3) {
    *endNota1 = arredonda(*endNota1);
    *endNota2 = arredonda(*endNota2);
    *endNota3 = arredonda(*endNota3);
}