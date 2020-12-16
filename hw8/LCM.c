#include<stdio.h>

int LCM(int m, int n)
{
    int temp;
    int a = m, b = n;
    while(n != 0)
    {
        temp = n % m;
        m = n;
        n = temp;
    }
    return a*b/m;
}

int main()
{
    printf("Please enter two integer numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = LCM(a, b);
    printf("The least common multiple: %d\n", ans);
    return 0;
}