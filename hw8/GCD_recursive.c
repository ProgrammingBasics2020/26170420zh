#include<stdio.h>

int GCD_recursive(int m, int n)
{
    return n==0 ? m : GCD_recursive(n, m%n);
}

int main()
{
    printf("Please enter two integer numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = GCD_iterative(a, b);
    printf("The greatest common divisor: %d\n", ans);
    return 0;
}