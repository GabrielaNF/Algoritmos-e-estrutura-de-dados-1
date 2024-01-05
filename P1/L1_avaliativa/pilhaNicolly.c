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

Pilha *ordena_pilha (Pilha *p1, Pilha *p2){

    Pilha *par;
    Pilha *impar;
    Pilha *ordenar;

    par = criar_pilha();
    impar = criar_pilha();
    ordenar = criar_pilha();

    while(!pilha_vazia(p1)){
        int item = desempilhar(p1);
        if(item %2 == 0){
            empilhar(par, item);
        }
        else{
            empilhar(impar, item);
        }
    }
    
    while(!pilha_vazia(p2)){
        int item = desempilhar(p2);
            if(item %2 == 0){
                empilhar(par, item);
            }
            else{
                empilhar(impar, item);
            }
    }
    
    while(!pilha_vazia(impar)){
        empilhar(ordenar,desempilhar(impar));
    }
    
    while(!pilha_vazia(par)){
        empilhar(ordenar,desempilhar(par));
    }

    return ordenar;

}

int main() {
    
    int item = 0;
    
    Pilha *primeirap;
    Pilha *segundap;
    Pilha *ordenada;

    primeirap = criar_pilha();
    segundap = criar_pilha();
    ordenada = criar_pilha();

    while(item!=-1){
        scanf("%d",&item);
        if(item!=-1){
            empilhar(primeirap, item);
        }
    }
    
    item=0;
    
    while(item!=-1){
        scanf("%d",&item);
        if(item!=-1){
           empilhar(segundap, item); 
        }
    }

    ordenada = ordena_pilha(primeirap, segundap);
    imprimir_pilha(ordenada);

    liberar_pilha(primeirap);
    liberar_pilha(segundap);
    liberar_pilha(ordenada);

    return 0;
}