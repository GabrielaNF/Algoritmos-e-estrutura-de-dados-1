#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 10

typedef struct Fila Fila;

struct Fila{
    int item[TAM_MAX];
    int ini;
    int fim;
    int tam;
};

Fila *semafaro(Fila *f1, Fila *f2, Fila *f3, Fila *x){
    int n;
    while(!filaE_vazia(f1) || !filaE_vazia(f2) || !filaE_vazia(f3)){        
        if(!filaE_vazia(f1)){
            
            for(n=0 ; n<3 && !filaE_vazia(f1) ; n++){
                enfileirar(desenfileirar(f1),x);
            }      
        
        }
        if(!filaE_vazia(f2)){
            for(n=0 ; n<3 && !filaE_vazia(f2) ; n++){
                enfileirar(desenfileirar(f2),x);
            }
        }
        if(!filaE_vazia(f3)){
            for(n=0 ; n<3 && !filaE_vazia(f3) ; n++){
                enfileirar(desenfileirar(f3),x);
            }
        }
        
    }
    return x;
}
int main(void){
    Fila *E1,*E2,*E3,*R;
    E1=criar_filaE();
    E2=criar_filaE();
    E3=criar_filaE();
    R=criar_filaE();
    int n=0;

    for(int i=0; !(n==-1); i++)
    {
        scanf(" %d",&n);
        if(!(n==-1))
            enfileirar(n, E1);
    }
    n=0;
    for(int i=0; !(n==-1); i++)
    {
        scanf(" %d",&n);
        if(!(n==-1))
            enfileirar(n, E2);
    }
    n=0;
    for(int i=0; !(n==-1); i++)
    {
        scanf(" %d",&n);
        if(!(n==-1))
            enfileirar(n, E3);
    }
    
    R=semafaro(E1,E2,E3,R);
    imprimir_fila(R);
    liberar_filaE(E1);
    liberar_filaE(E2);
    liberar_filaE(E3);
    liberar_filaE(R);
}
