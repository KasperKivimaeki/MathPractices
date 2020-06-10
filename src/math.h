#include <math.h>

int isPrime(int p) {
    if(p < 2) return 0;

    int r = sqrt(p);

    for(int i = 2; i <= r; i++) {
        if(!(p % i)) return 0;
    }
    return 1;
}

int isSquare(unsigned long long int p) {
    if(p == 1) return 1;
    unsigned long long int r = sqrt(p);
    if(p == r*r) return 1;

    return 0;
}
