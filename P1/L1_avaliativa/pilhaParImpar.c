#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define tamMax 100
int min = 0;

typedef struct Pilha{
    int item[tamMax];
    int topo;
}Pilha;

Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

int pilha_cheia(Pilha *p){
    if (p == NULL)
        return -1;
    else if (p->topo >= (tamMax - 1))
        return 1;
    else
        return 0;
}


int pilha_vazia(Pilha *p){
    if (p == NULL)
        return -1;
    else if (p->topo < 0)
        return 1;
    else
        return 0;
}

int empilhar(Pilha *p, int item){
    if (p == NULL)
        p = criar_pilha();

    if (!pilha_cheia(p)){
        p->topo++;

        p->item[p->topo] = item;

        return 1;
    }

    return 0;
}

int desempilhar (Pilha *p){
    int item = min;

    if (!pilha_vazia(p)){
        item = p->item[p->topo];

        p->topo--;
    }

    return item;
}


void imprimir_pilha(Pilha *p){
    Pilha aux = *p;
    int item;

    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%d ", item);
    }
    
    printf("\n");
}

void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

Pilha *ordenar(Pilha *p1, Pilha*p2)
{
    Pilha *par = criar_pilha();
    Pilha *impar = criar_pilha();
    Pilha *final = criar_pilha();

    while(!pilha_vazia(p1)){
        int item = desempilhar(p1);
        if(item % 2 == 0){
            empilhar(par, item);
        }
        else{
            empilhar(impar, item);
        }
    }

    while(!pilha_vazia(p2)){
        int item = desempilhar(p2);
        if(item % 2 == 0){
            empilhar(par, item);
        }
        else{
            empilhar(impar, item);
        }
    }

    while(!pilha_vazia(impar)){
        empilhar(final,desempilhar(impar));
    }
        while(!pilha_vazia(par)){
        empilhar(final, desempilhar(par));
    }

    return final;
}

int main()
{
    int aux = 0, aux2 = 0;
    Pilha *p1 = criar_pilha();
    Pilha *p2 = criar_pilha();
    Pilha *final = criar_pilha();

    while(aux != -1){
        scanf("%d", &aux);
        if(aux != -1){
            empilhar(p1, aux);
        }
    }

     while(aux2 != -1){
        scanf("%d", &aux2);
        if(aux2 != -1){
            empilhar(p2, aux2);
        }
    }

      final = ordenar(p1, p2);

      imprimir_pilha(final);

      liberar_pilha(p1);
      liberar_pilha(p2);
      liberar_pilha(final);

    return 0;
}