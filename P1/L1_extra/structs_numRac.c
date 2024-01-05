#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct racional{
    int num;
    int den;
}Racional;

Racional um, dois;
Racional resultado;

Racional divisao(Racional um, Racional dois){
    resultado.num = um.num * dois.den;
    resultado.den = um.den * dois.num;

    return resultado;
}

int main(){
    scanf ("%d %d", &um.num, &um.den);
    scanf ("%d %d", &dois.num, &dois.den);

    resultado = divisao(um, dois);

    printf ("%d %d", resultado.num, resultado.den);

    return 0;
}