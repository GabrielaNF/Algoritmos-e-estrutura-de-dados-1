#include <stdio.h>
#include <stdlib.h>

typedef int *Array;

typedef struct
{
    Array *origin;
    int row;
    int col;
} Matrix;

Matrix *newMatrix(int rows, int cols)
{
    Matrix *matrix = (Matrix *)malloc(sizeof(Matrix));
    matrix->origin = (Array *)malloc(sizeof(Array) * rows);

    matrix->row = rows;
    matrix->col = cols;

    for (int row = 0; row < rows; row++)
    {
        matrix->origin[row] = (Array)malloc(sizeof(int) * cols);
    }

    return matrix;
}

void set(Matrix *matrix, int value, int row, int col)
{
    if (matrix == NULL)
    {
        return;
    }

    if (row < 0 || matrix->row < row)
    {
        return;
    }

    if (col < 0 || matrix->col < col)
    {
        return;
    }

    matrix->origin[col][row] = value;
}

Array getRow(Matrix *matrix, int row)
{
    if (matrix == NULL)
    {
        return NULL;
    }

    if (row < 0 || matrix->row < row)
    {
        return NULL;
    }

    return matrix->origin[row];
}

Array getCol(Matrix *matrix, int col)
{
    if (matrix == NULL)
    {
        return NULL;
    }

    if (col < 0 || matrix->col < col)
    {
        return NULL;
    }

    int rows = matrix->row;
    Array column = (Array)malloc(sizeof(int) * rows);

    for (int i = 0; i < rows; i++)
    {
        column[i] = matrix->origin[i][col];
    }

    return column;
}

Matrix *readInput()
{
    int rows, cols;
    Matrix *matrix;

    scanf("%d %d", &rows, &cols);

    matrix = newMatrix(rows, cols);

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            scanf("%d", &matrix->origin[row][col]);
        }
    }

    return matrix;
}

void printArray(Array array, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    Matrix *matrix;
    int subMatrix[4];
    int rowNumber, colNumber;
    Array row, col, subRow, subCol;

    matrix = readInput();

    scanf("%d %d", &rowNumber, &colNumber);

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &subMatrix[i]);
    }

    row = getRow(matrix, rowNumber);
    col = getCol(matrix, colNumber);
    subRow = getRow(matrix, subMatrix[0]);
    subCol = getRow(matrix, subMatrix[2]);

    printArray(row, matrix->col);
    printf("\n");
    printArray(col, matrix->row);
    printf("\n");
    printArray(&subRow[subMatrix[0]], 1 + subMatrix[2] - subMatrix[0]);
    printArray(&subCol[subMatrix[1]], 1 + subMatrix[3] - subMatrix[1]);

    return 0;
}