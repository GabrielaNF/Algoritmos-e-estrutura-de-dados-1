#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int **arr; 
    int l; 
    int c; 
}Matriz;

int main ()
{
    int pl, pc;
    int cont = 0, contC = 0;
    int li, ci, lf, cf;

    Matriz matriz;
    scanf("%d %d", &matriz.l, &matriz.c);

    matriz.arr = malloc (sizeof(int*)* matriz.l);//pois eh um ponteiro q aponta pra inteiros)

    for (int i = 0; i < matriz.l; i++){
        matriz.arr[i] = malloc (sizeof(int)* matriz.c);
    }

    for(int i = 0; i < matriz.l; i++){
        for(int j = 0; j < matriz.c; j++){
            scanf("%d", &matriz.arr[i][j]);
        }
    }

    //  for(int i = 0; i < matriz.l; i++){
    //     printf("\n");
    //     for(int j = 0; j < matriz.c; j++){
    //         printf("%d ", matriz.arr[i][j]);
    //     }
    // }

    // printf("\n");

    scanf("%d %d", &pl, &pc);
    // printf("%d %d\n", pl, pc);

    //achar linha
    while(cont < matriz.c){
        printf("%d ", matriz.arr[pl][cont]); //linha fixa, coluna variavel

        cont++;
    }

    printf("\n\n");
    // achar coluna
    while(contC < matriz.l){
        printf("%d ", matriz.arr[contC][pc]);

        contC++;
    }

    printf("\n\n");

    scanf("%d %d %d %d", &li, &ci, &lf, &cf);

    int k = li;
    int g = ci;

    while(k <= lf){
        while(g <= cf){
            printf("%d ", matriz.arr[k][g]);
            g++;
        
        }
        printf("\n");
        g = ci;
        k++;
    }

    return 0;
}
