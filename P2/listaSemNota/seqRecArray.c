#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(){
    int key, n, i=0, quant, c=0;

    scanf("%d", &n);
    int v[n];

    while(i < n){
        scanf("%d", &v[i]);
        i++;
    }

    scanf("%d", &quant);

    for(c = 0; c < quant; c++){
        scanf("%d", &key);
        if(v[i] == key){
            printf("%d\n", i);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}