#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int i, int n, int v[]){  
    if(i > n)
        return 0;
    
    return v[i] + sum(i+1, n, v);
}

int main(){
    int n, i = 0; 

    scanf("%d", &n);
    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]); 
    }

    int result = sum(i, n, v);
    printf("%d", result);

    return 0;
}