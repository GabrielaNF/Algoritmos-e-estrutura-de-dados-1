#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void repeating(char str[], char c, int *p, float *ptr){ //cria os ponteiros nos argumentos
    int i, count = *p; //criei uma var estatica pois nao estava aceitando o valor do ponteiro p direto (gambiarra rs)
    for (i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            count++;
        }
    }
    
    printf("%d\n", count);

    *ptr = (float)count/(float)i; //pega valor dos ponteiros com*
    
    printf("%.2f", *ptr);
}
           
int main() {
    char str[50];
    char c;
    int caracter = 0;
    float incidencia;
    float *ptr = &incidencia;


    scanf("%50s", str);
    while (getchar() != '\n');
    scanf("%c", &c);

    repeating (str, c, &caracter, ptr); //passando direto com & na inicializacao e declarando o ponteiro no argumento da funcao
                                        //da no mesmo que inicializar o ponteiro na main e pegar o valor la em cima

    return 0;
}