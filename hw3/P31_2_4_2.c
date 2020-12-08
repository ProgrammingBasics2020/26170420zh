#include "stdio.h"
#include "math.h"

int main(){
    float x, a, b, c;
    printf("enter value of x, a, b, c: ");
    scanf("%f, %f, %f, %f", &x, &a, &b, &c);
    int ans = (sqrt(abs(x)) != 4*a/b/c)) ;
    printf("\nanswer= %d", ans);
    return 0;
}

