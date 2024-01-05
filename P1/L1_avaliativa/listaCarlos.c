#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Lista Lista;

struct Lista{
    int item[MAX_SIZE];
    int tam;
};

int buscar(Lista *l, char chave[]){
    int i;
    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
                if (strstr(l->item[i],chave)){
                printf("%s\n", l->item[i]);
                }
    }
    return -1;
}

int inserir(Lista *l, char chave[]){
    if (!lista_cheia(l)){
        strcpy(l->item[l->tam], chave);
        l->tam++;
        return 1;
    }
    return 0;
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);
        return 1;
    }
    return   0;
}

int main(void){
    int n;
    char substr[100], aux[100];
    Lista *nomes;

    nomes=criar_lista();

    scanf("%s", substr);
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s",aux);
        inserir(nomes,aux);
    }
    buscar(nomes, substr);
    liberar_lista(nomes);
}