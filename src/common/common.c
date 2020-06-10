#include "common.h"
#include <stdio.h>
#include <math.h>

int isPal(long p) {
    char st[19];

    char i = 0;

    while (p) (st[i++] = p % 10, p /= 10);
    i--;
    char n = i;
    while (n && i) n *= st[n - i] == st[i--];

    return !!n;
}

int isPrime(long p) {
    long r = 2;
    while (r*r <= p) if (!(p % r)) break; else r++;
    return !!(p % r);
}

long r2(long a) {
    return (long)(sqrt(a) + 0.5f);
}
