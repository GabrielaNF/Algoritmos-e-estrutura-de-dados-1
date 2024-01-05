#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

           
int main() {

    char str[50];
    char c;
    int i = 0;
    int r = 0;


    scanf("%50s", str);
    while (getchar() != '\n');
    scanf("%c", &c);

    for (i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            r++;
        }
    }
    
    printf("%d\n", r);

    float frequency = (float)r/(float)i;
    
    printf("%.2f", frequency);

    return 0;
}