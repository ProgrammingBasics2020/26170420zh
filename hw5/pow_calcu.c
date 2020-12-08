#include "stdio.h"
#include "time.h"

int main()
{
    clock_t start_clock, end_clock;
    double elapsed_time;
    start_clock = clock();
    for(int i=1; i<1000000000; ++i);

    /*-  -*/
    long long a, b ,c ;
    printf("Please enter a b c:");
    scanf("%lld %lld %lld", &a, &b ,&c);
    long long res = 1;
    //快速幂
    while(b){
        if(b & 1)
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    printf("a^b mod c = %lld\n", res);
    /*- -*/

    end_clock = clock();

    elapsed_time = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;
    printf("%.6lf", elapsed_time);
    return 0;
}


