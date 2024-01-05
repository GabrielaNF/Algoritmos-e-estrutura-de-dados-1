#include <stdio.h>

int main(void){
    int i;
    int *p_i;

    i = 30;//valor incial da var i
    p_i = &i; //ponteiro recebe/ aponta pro endereço de i
    *p_i = 15;//ponteiro altera valor da var q esta apontando (ou seja, i)
    printf("%d\n", i);
    printf("%d\n", *p_i);
    printf("%d\n", &i);
    printf("%d\n", p_i);

    return 0;
}