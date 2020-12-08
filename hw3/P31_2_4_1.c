#include "stdio.h"

int main(){
    int ans, x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    ans = x*x*x + 2*x*x + 3*x + 1;
    printf("answer of expression: %d", ans);
}

