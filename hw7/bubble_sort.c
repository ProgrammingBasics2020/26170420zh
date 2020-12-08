#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for(j=0; j<n-1; j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Please enter total number:")
}

