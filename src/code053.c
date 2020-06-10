#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint64_t fac(uint64_t n) {
    if (n < 2) return 1;
    uint64_t s = 1;
    while(n > 1) {
        s *= n;
        n--;
    }
}

int test(unsigned int n, unsigned int r) {
    uint64_t o = fac(n - r);
    printf("%lu\n", o);

    uint64_t s = 1;
    while(n > r) {
        s *= n;
        n--;
        if (s > 1000000*o) return 1;
    }
    return s > 1000000*o;
}

void main() {
    unsigned int f = 0;

    for(unsigned int n = 23; n <= 100; n++) {
        unsigned int r = 1;
        while (r <= n && test(n, r)) {
            r += 1;
            f += 1;
        }
        printf("%u %u\n", n, f);
    }

    printf("%u\n", f);
}
