#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int isSquare(int64_t p) {
    int i = 1;
    while(i*i < p) i++;
    return i*i == p;
}

int64_t diophantine(int64_t d) {
    int64_t x = 1;
    while (1) {
        int64_t a = x % d;
        if (((a * a) % d) == 1) {

            int64_t n = x / d;
            int64_t equ = 0;
            equ += (a*a - 1)/d;
            equ += 2*a*n;
            equ += n*n*d;

            if (isSquare(equ)) return x;
        }
        x++;
    }
}

void solve066(int64_t D) {
    int64_t max = 0;
    int64_t maxd = 0;
    #pragma omp parallel for
    for(int64_t d = 1; d <= D; d++) {
        if(isSquare(d)) continue;
        int64_t x = diophantine(d);
        if(x > max) {
            max = x;
            maxd = d;
        }
    }
    printf("%ld %ld\n", max, maxd);
}



void main(int argv, char** argc) {
    if (argv < 2) return;
    solve066(atoi(argc[1]));
}
