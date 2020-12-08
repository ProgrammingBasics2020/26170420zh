#include <stdio.h>

int is_prime(int n){
    int i;
    for(i=2; i<=n; i++){
        if(n % i == 0)
            break;
    }
    if(i<n)
        return -1;
    return 0;
}

int main() {
    int count = 0;
    int i=2;
    while(count < 1000){
        if(is_prime(i) == 0){
            count++;
            if(count>=100)
                printf("%d ", i);
            if(count % 10 ==0)
                printf("\n");
        }
        i++;
    }
    return 0;
}

