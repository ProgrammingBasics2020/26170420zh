#include<stdio.h>
#include "string.h"

void reverse(char *str)
{
    char *t;
    int temp;
    for(t=str+strlen(str)-1; str<t; str++, t--)
    {
        temp = *str;
        *str = *t;
        *t = temp;
    }
}

int main()
{
    printf("Please enter a string: ");
    char str[20];
    gets(str);
    char* s = str;
    reverse(s);
    printf("reverse string: \n");

    for(int i=0; i<strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}

