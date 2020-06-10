#include "math.h"
#include <stdio.h>

int truncatableRight(int p) {
    while(p > 10) {
        p /= 10;
        if(!isPrime(p)) return 0;
    }
    return 1;
}

int truncatableLeft(int p) {
    int s = 1;
    while(p > 10*s) s *= 10;
    while(p > 10) {
        p %= s;
        s /= 10;
        if(!isPrime(p)) return 0;
    }
    return 1;
}

int solve037(int n) {
    int sum = 0;
    int x = 10;
    int s = 0;
    while(s < n) {
        if(isPrime(x)) 
            if(truncatableRight(x) && truncatableLeft(x)) {
                sum += x;
                s++;
                printf("%d\n", x);
            }
        x++;
    }

    return sum;
}


void main() {
    int s = solve037(12);
    printf("%d\n", s);
}
