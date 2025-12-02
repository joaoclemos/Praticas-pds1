#include "minhas_funcoes.h"
#include <stdio.h>
void soma1(int *a){
    (*a) ++;
}
void troca(float *end_valor1, float *end_valor2){
    float troca;
    troca = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = troca;
    }
void ddd(long long tel){
    tel = tel/1000000000;
}
