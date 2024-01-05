#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct caracter{
    char name[100];
    int energy;
    int defense;
    int power;
}Caracter;

Caracter first, second;
Caracter won, r;

Caracter attackFirst(Caracter first, Caracter second){
    if ((second.energy - (first.power - second.defense)) <= 0)
    {
        second.energy  = 0;
    }
    else if ((first.power - second.defense) <= 0)
    {
        second.energy = second.energy - 1;
    }
    else 
    {
    second.energy = second.energy - (first.power - second.defense);
    }

    return second;
}

Caracter attackSecond(Caracter first, Caracter second){
    if ((first.energy - (second.power - first.defense)) <= 0)
    {
        first.energy  = 0;
    }
    else if ((second.power - first.defense) <= 0)
    {
        first.energy = first.energy - 1;
    }
    else{
    first.energy = first.energy - (second.power - first.defense);
    }

    return first;
}

Caracter rounds (int n, Caracter first, Caracter second){
    for(int i = 0; i < n; i++){
       
        if (first.energy <= 0){
        break;
        }
        second = attackFirst(first, second);

         if(second.energy <= 0){
            break;
         }
        first = attackSecond(first, second);
    }
    

     printf("%s %d\n", first.name, first.energy);
     printf("%s %d\n", second.name, second.energy);
    

     if (first.energy > second.energy)
        printf("%s", first.name);

    else if (second.energy > first.energy)
        printf("%s",second.name);
    
    else
        printf("empate");

    return r;
}


int main(){
    int n;

    scanf("%s", first.name);
    scanf("%d", &first.energy);
    scanf("%d", &first.defense);
    scanf("%d", &first.power);

    scanf("%s", second.name);
    scanf("%d", &second.energy);
    scanf("%d", &second.defense);
    scanf("%d", &second.power);

    scanf("%d", &n);

    r = rounds(n, first, second);

    return 0;
}