#include <stdio.h>
#include <math.h>

float laplace(float x, float y, float b){
    float resultado;
    resultado = (1.0/(2.0*b))*exp(-fabs(x-y)/b);
    return resultado;
}
