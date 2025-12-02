#include <stdio.h>
#include <math.h>

float cauchy(float x){
    float resultado;
    resultado = 1.0/(3.141592*(1.0+x*x));
    return resultado;
}