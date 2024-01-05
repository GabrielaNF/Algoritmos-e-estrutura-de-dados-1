#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Lista{
    char item[MAX_SIZE][MAX_SIZE];
    int tam;
}Lista;

Lista* criar_lista()
{
    Lista *l = (Lista*) malloc(sizeof(Lista));

    l->tam = 0;

    return l;
}

int lista_cheia(Lista *l)
{
    if (l == NULL)
        return -1;
    else if (l->tam < MAX_SIZE)
        return 0;
    else
        return 1;
}

int lista_vazia(Lista *l)
{
    if (l == NULL)
        return -1;
    else if (l->tam > 0)
        return 0;
    else
        return 1;
}

int inserir(Lista *l, char str[])
{
    if (!lista_cheia(l)){
        strcpy(l->item[l->tam], str);
        l->tam++;
        return 1;
    }
    return 0;
}

int buscar(Lista *l, char str[])
{
    int i;
    

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++){
            char *word = strstr(l->item[i], str);
            if (word){
            printf("%s\n", l->item[i]);
             }
        }
    }

    return -1;
}

    int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);
        return 1;
    }
    return   0;
}

int main()
{    
    char str[100], aux[100];
    int n;
 
    Lista *names;

    names = criar_lista();


    scanf("%s", str);
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%s", aux);
        inserir(names, aux);
    }

    buscar(names, str);
    liberar_lista(names);

    return 0;
}