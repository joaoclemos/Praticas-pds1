#include <stdio.h>
#include <math.h>

float gumbel(float x, float y, float b){
    float resultado;
    float z;
    z = (x - y)/b;
    resultado = (1/b)* exp(-(z+exp(-z)));
    return resultado;
}
