#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * prog_arit(int n, int r){
    int v[n];
    int a = 0, i = 0;
 
    while(i < n){
        
        v[i] = a;
        printf("%d ", v[i]);
        a = a + r;
        i++;
    }
    return 0;
}

int main() {
    int n, r, *p;

    scanf ("%d %d", &n, &r);

    p = (int*) malloc(n * sizeof(int));

    prog_arit(n, r);

    free(p);
 
    return 0;
}
