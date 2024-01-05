#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;

int saquesS = 0, bloqueiosS = 0, ataquesS = 0, saquesT = 0, bloqueiosT = 0, ataquesT = 0;

void read(Jogador *jogador, int i){

        scanf("%s", jogador[i].nome);
        scanf("%d %d %d", &jogador[i].saquesTotal, &jogador[i].bloqueiosTotal, &jogador[i].ataquesTotal);
        scanf("%d %d %d", &jogador[i].saquesSucesso, &jogador[i].bloqueiosSucesso, &jogador[i].ataquesSucesso);

}

void result (Jogador *jogador, int i, int n){

    saquesS = saquesS + jogador[i].saquesSucesso;
    bloqueiosS = bloqueiosS + jogador[i].bloqueiosSucesso;
    ataquesS = ataquesS + jogador[i].ataquesSucesso;

    saquesT = saquesT + jogador[i].saquesTotal;
    bloqueiosT = bloqueiosT + jogador[i].bloqueiosTotal;
    ataquesT = ataquesT + jogador[i].ataquesTotal;

}

int main() {
    int n;

    scanf("%d", &n);
    
    Jogador jogador[n];

    for (int i = 0; i < n; i++){
    read (jogador, i);
    }

    for (int i = 0; i < n; i++){
        result(jogador, i, n);
    }

    float saques = 0, bloqueios = 0, ataques = 0;

    saques = ((((float)saquesS)*100)/ saquesT);
    bloqueios = ((((float)bloqueiosS) *100)/ bloqueiosT);
    ataques = ((((float)ataquesS) *100)/ ataquesT);

    printf ("Pontos de Saque: %.2f\n%%", saques);
    printf ("Pontos de Bloqueio: %.2f\n%%", bloqueios);
    printf ("Pontos de Ataque: %.2f\n%%", ataques);

    return 0;
}
