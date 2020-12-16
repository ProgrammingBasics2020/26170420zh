#include<stdio.h>

int GCD_iterative(int m, int n)
{
    int temp;
    while(n != 0)
    {
        temp = n % m;
        m = n;
        n = temp;
    }
    return m;
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

