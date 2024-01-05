#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *multiplicar(float *f1, float *f2){
    float *p = malloc(sizeof(float));
    *p = (*f1) * (*f2);

    return p;
}

int main(){
    int a = 10, b = 5;
    int *c = multiplicar(&a, &b);

    printf("%.2f", *c);

    return 0;
}