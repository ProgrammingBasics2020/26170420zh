#include "stdio.h"

int fac_bit_count(int n){
    if(n >= 0){
        //n!
        int res=1;
        for(int i=1; i<=n; i++)
            res *= i;

        //count bit
        int count = 0;
        while(res){
            res /= 10;
            count++;
        }
        return res;
    }
    return 0;
}

