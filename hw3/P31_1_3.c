#include "stdio.h"

int main(){
    printf("answer 1.3 check: ");
    char a='B', b=33;
    char c='0', d='9';
    a = a - 'A' + '0';
    b = b * 2;
    printf("%c, %c\n",a, b);
    c++;
    d--;
    printf("%c, %c\n", c, d);
    return 0;
}

