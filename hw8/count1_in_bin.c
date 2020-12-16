#include<stdio.h>

int count1_in_bin(int n)
{
    int count=0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    printf("please enter an integer: ");
    int num;
    scanf("%d", &num);
    int ans = count1_in_bin(num);
    printf("the number of 1 in the binary form: %d", ans);
    return 0;
}