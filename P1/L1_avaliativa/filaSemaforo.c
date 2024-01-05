#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Fila
{
  int item[100];
  int start;
  int end;
  int tam;
}Fila;


Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));

    f->start = -1;
    f->end = -1;
    f->tam = 0;

    return f;
}


int fila_cheia(Fila *f){

    if (f == NULL)
        return -1;
    else if (f->tam < 100)//100 = tamMax
        return 0;
    else
        return 1;
}


int fila_vazia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}


int enfileirar(Fila *f, int chave){
    if (f == NULL)
        f = criar_fila();
    
    if (!fila_cheia(f)){
        if (f->start < 0)
            f->start = 0;
        
        if (f->end < 100- 1)
            f->end++;
        else
            f->end = 0;

        f->item[f->end] = chave;

        f->tam++;

        return 1;
    }

    return 0;
}


int desenfileirar(Fila *f){
    int item = INT_MIN;

    if (!fila_vazia(f)){
        item = f->item[f->start];

        if (f->start < 100 - 1)
            f->start++;
        else
            f->start = 0;

        f->tam--;

        if (f->tam == 0){
            f->start = -1;
            f->end = -1;
        }
    }

    return item;
}

void imprimir_fila(Fila *f){
    Fila aux = *f;
    int item;

    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);

        printf("%d ", item);
    }
    
    printf("\n");
}

void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

void read(int car, Fila *f){
    while(car != -1){
        scanf("%d", &car);
        if(car != -1){
            enfileirar(f, car);
        }
    }
}

void concatenar(Fila *f1, Fila *f2, Fila *f3){
    Fila *road = criar_fila();

    while(!fila_vazia(f1) || !fila_vazia(f2) || !fila_vazia(f3))
    {
        if(!fila_vazia(f1)){
            for (int i = 0; i < 3; i++)
            {
                if(!fila_vazia(f1))
                enfileirar(road, desenfileirar(f1));
            }
        }

        if(!fila_vazia(f2)){
            for (int i = 0; i < 3; i++)
            {
                if(!fila_vazia(f2))
                enfileirar(road, desenfileirar(f2));
            }
        }

        if(!fila_vazia(f3)){
            for (int i = 0; i < 3; i++)
            {
                if(!fila_vazia(f3))
                enfileirar(road, desenfileirar(f3));
            }
        }
    }

    imprimir_fila(road);

    liberar_fila(road);
}

int main(){
    int car=0;
    Fila *fila1 = criar_fila();
    Fila *fila2 = criar_fila();
    Fila *fila3 = criar_fila();

    read(car, fila1);
    read(car, fila2);
    read(car, fila3);

    concatenar(fila1, fila2, fila3);

    return 0; 
}