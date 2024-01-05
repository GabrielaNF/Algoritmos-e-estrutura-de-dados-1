#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int **matriz;
    int linha;
    int coluna;
} matrix;

int main()
{
    int cont = 0, cont1 = 0, linhaT, colunaT, li, ci, lf, cf;
    matrix mat1;

    // entrada de dados

    scanf("%d %d", &mat1.linha, &mat1.coluna);

    mat1.matriz = malloc((mat1.linha) * sizeof(int *));

    while (cont < mat1.coluna)
    {
        mat1.matriz[cont] = malloc((mat1.coluna) * sizeof(int));
        cont++;
    }
    cont = 0;

    while (cont < mat1.linha)
    {
        while (cont1 < mat1.coluna)
        {
            scanf("%d", &mat1.matriz[cont][cont1]);
            cont1++;
        }
        cont1 = 0;
        cont++;
    }
    cont = 0;

    scanf("%d %d", &linhaT, &colunaT);
    scanf("%d %d %d %d", &li, &ci, &lf, &cf);

    // saída de dados

    while (cont < mat1.coluna)
    {
        printf("%d ", mat1.matriz[linhaT][cont]);
        cont++;
    }
    cont = 0;
    printf("\n\n");

    while (cont < mat1.linha)
    {
        printf("%d ", mat1.matriz[cont][colunaT]);
        cont++;
    }

    printf("\n\n");

    cont = li;
    cont1 = ci;
    while (cont <= lf)
    {
        while (cont1 <= cf)
        {
            printf("%d ", mat1.matriz[cont][cont1]);
            cont1++;
        }
        cont1 = ci;
        printf("\n");
        cont++;
    }

    return 0;
}
