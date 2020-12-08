#include "stdio.h"
#include "math.h"

int main()
{
    int num, i;
    printf("Please enter a number(>3): ");
    scanf("%d", &num);
    //只用判断2-根号num之间的数不能被整除即可
    for (i=2; i<=sqrt(num); i++){
        if(num % i == 0)
            break;
    }
    if(i < num)
        printf("%d is not a prime number!\n", num);
    else
        printf("%d is a prime number!\n", num);
    return 0;
}

