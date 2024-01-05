#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct student{
    int ra;
    char nome[100];
    int p1;
    int p2;
    int p3;
}Student;

Student aluno, nota;
Student maior;

Student maiorNota(int n, Student aluno[n]){
    int i;
    maior.p1 = 0;

    for(i = 0; i < n; i++)
}

int main(){
    int n;

    scanf("%d", &n);

    nota = maiorNota (n, aluno);
}