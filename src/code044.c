#include <stdio.h>

long long isPentagonal(unsigned long long p) {
    if(p == 0) return 0;
    unsigned long long i = 1;

    while(i*(3*i-1)/2 < p) i += 500;

    while(i*(3*i-1)/2 > p) i--;

    return i*(3*i-1)/2 == p;
}

int main() {

    unsigned long long h = 2;
    unsigned long long l = 1;
    unsigned long long d = 500000000;

    unsigned long long lp, hp, i;

    while(d > 2*h + 2) {
        hp = h*(3*h-1)/2;
        i = h - 1;
        while(i > l) { 
            lp = i*(3*i-1)/2;

            if(hp - lp > d) break;
            
            if(isPentagonal(hp - lp) && isPentagonal(hp + lp)) {
                d = hp - lp;
                l = i;

                printf("%llu %llu\n", h, i);
                printf("%llu\n", d);
            }
            i--;
        }
        h++;
    }

    printf("%llu\n", d);

    return 0;
}
