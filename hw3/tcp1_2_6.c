#include "stdio.h"

int bitlen(unsigned d) {
    int len = 0;
    for (; d; d >>= 1) {
        len++;
    }
    return len;
}

unsigned setbits(unsigned x, unsigned p, unsigned y) {
    unsigned len_x = bitlen(x);
    unsigned len_y = bitlen(y);

    if (len_x < p + n || len_y < n) {
        printf("illegal p<%u> or n<%u>!\n", p, n);
        return 0;
    } else {
        unsigned tail = lenx - p - n;
        unsigned right = x & ~(~0 << tail);
        unsigned replacement = y & ~(~0 << n);
        x >>= lenx - p;
        x <<= n;
        x |= replacement;
        x <<= tail;
        x |= right;
        return x;
    }
}

int main()
{
    //test
    printf("setbits(10, 1, 2, 3) -> %u\n", setbits(11, 1, 2, 3));
    printf("setbits(11, 3, 2, 1) -> %u\n", setbits(11, 3, 2, 1));
    return 0;
}



