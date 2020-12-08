#include "stdio.h"

int bitlen(unsigned d) {
    int len = 0;
    for (; d; d >>= 1) {
        len++;
    }
    return len;
}

unsigned invert(unsigned x, unsigned p, unsigned n) {
    int len = bitlen(x);

    if (len < p + n) {
        printf("illegal p<%u> or n<%u>!\n", p, n);
        return 0;
    }
    else {
        unsigned tail = len - p - n;
        unsigned right = x & ~(~0 << tail);
        x >>= tail;
        x ^= ~(~0 << n);
        x <<= tail;
        x |= right;
        return x;
    }
}

int main()
{
    //test
    printf("invert(5, 1, 1) -> %u\n", invert(5, 1, 1));
    printf("invert(5, 4, 1) -> %u\n", invert(5, 4, 1));
    return 0;
}

