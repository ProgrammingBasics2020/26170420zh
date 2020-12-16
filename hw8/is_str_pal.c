#include<stdio.h>
#include "string.h"

int is_str_pal(const char* str)
{
    int i;
    int len = strlen(str);
    for(i=0; i<=len; i++){
        if(p[i] == p[len-1])
            len--;
        else
            return -1;
    }
    return 0;
}

int main(){
    printf("Please enter a string: ");
    char str[20];
    gets(str);
    char* s = str;
    int ans = is_str_pal(s);
    if(ans == -1)
        printf("not a palindromic string!");
    else
        printf("is a palindromic string!");
    return 0;
}

