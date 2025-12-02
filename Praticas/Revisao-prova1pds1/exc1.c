#include <stdio.h>
#include <math.h>

float loglcdf(float x, float a, float b){
    if(x >= 0){
        return 1.0/(1.0 + pow((x/a), b));
    }
    else {
        return 0;
    }    
}