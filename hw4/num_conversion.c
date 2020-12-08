#include <stdio.h>

void binary_transfer(int num){
    int result=0,k=1;
    int i;
    while(num){
        i = num % 2;
        result = k * i + result;
        k = k*10;
        num /= 2;
    }
    printf("%d\n", result);
}

void octal_transfer(int num){
    int ans[10];
    int i, j;
    for(i=0; num>0; num/=8)
        ans[i++] = num % 8;
    for(j = i-1; j>=0; j--)
        printf("%d", ans[j]);
    printf("\n");
}

void hexadecimal_transfer(int num){
    char a[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char ans[10];

    int i,j;
    j = 0;
    while( num >= 16 )
    {
        i = (num % 16);
        ans[j] = a[i];
        j++;
        num /= 16;
        if(num < 16)
            ans[j] = a[num];
    }

    printf("0x");
    //十六进制数的数组倒序输出
    while(j >= 0)
    {
        if(j > 0)
            printf("%c", ans[j]);
        else
            printf("%c\n", ans[j]);
        j--;
    }
}


int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("binary number output: ");
    binary_transfer(num);
    printf("octal number output: ");
    octal_transfer(num);
    printf("hexadecimal number output: ");
    hexadecimal_transfer(num);
    return 0;
}

