#include<stdio.h>

int is_int_pal(int n)
{
    int i=0, j=0;
    int a[20];
    //转数组
    for(i=0; n!=0; i++)
    {
        a[i] = n%10;
        n /= 10;
        j++;
    }

    for(i=0; i<j; i++)
    {
        if(a[i] == a[j-1])
            j--;
        else
            return -1
    }
    return 0;
}

int main()
{
    printf("Please enter an integer: ");
    int num;
    scanf("%d", &num);
    int ans = is_int_pal(num);
    if(ans == -1)
        printf("not a palindromic number!");
    else
        printf("is a palindromic number!");
    return 0;
}

