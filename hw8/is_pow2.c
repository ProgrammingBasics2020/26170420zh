#include<stdio.h>

int is_pow2(int n)
{
    if( n>0 && ((n&(n-1))==0) )
        return 0;
    return -1;
}

int main()
{
    printf("Please enter an integer: ");
    int num;
    scanf("%d", &num);
    int ans = is_pow2(num);
    if(ans == -1)
        printf("not a number that is nth power of 2!");
    else
        printf("a number that is nth power of 2!");
    return 0;
}

