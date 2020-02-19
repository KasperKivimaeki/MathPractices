#include <stdlib.h>
#include <stdio.h>

int isPrime(int p) {
    for(int i = 0; i < p/2; i++) {
        if
    }
}

int po(int a, int n) { 
    int t = 1;
    while(n-- > 0) t *= a;
    return t;
}

int same(int a0, int b0, int a1, int b2) {
    while(!(b0 % 2) && !(b1 % 2)) {
        b0 /= 2;
        b1 /= 2;
    }
    while(!(b0 % 3) && !(b1 % 3)) {
        b0 /= 3;
        b1 /= 3;
    }
    while(!(b0 % 5) && !(b1 % 5)) {
        b0 /= 5;
        b1 /= 5;
    }

    while(!(b0 % 7) && !(b1 % 7)) {
        b0 /= 7;
        b1 /= 7;
    }

    if(isPrime(a0) || isPrime(a1))
        return 0;
    
}

int dups(int a0, int b0, int n) {
    for(int a = 2; a < a0; a++)
        for(int b = b0 + 1; b <= n; b++)
            if(same(a, b, a0, b0))
                return 0;

    return 1;
}

int distinctPowers(int n) {
    int u = 0;

    for(int a = 2; a <= n; a++)
        for(int b = 2; b <= n; b++)
            u = u + dups(a, b, n);

    return u;
}

void main() {
    int n;
    n = distinctPowers(5);
    printf("Distinct powers [2, 5]: %d\n", n); 
    n = distinctPowers(100);
    printf("Distinct powers [2, 100]: %d\n", n); 
}
