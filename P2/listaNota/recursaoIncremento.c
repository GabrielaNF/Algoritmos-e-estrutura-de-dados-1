#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int num1, int num2){
    if (num1 == 0){
        return num2;
    }

    return sum(num1 -1, num2+1);
}

int main(){
    int n, a, b;

    scanf("%d", &n);

    int func_return = 0;

    for (int i=0; i < n; i++){
        scanf("%d %d", &a, &b);
        func_return = sum(a,b);
        printf("%d \n", func_return);
    }
    return 0;
}