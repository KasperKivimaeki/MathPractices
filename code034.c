#include <stdio.h>

long long factorial(long long i) {
    long long k[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    return k[i];
}

long long sumIsPower(long long i, long long n) {
    long long h = 1;

    long long s = 0;

    while(n) {
        s += factorial(i / h % 10);
        h *= 10;
        n--;
    }

    return s == i;
}

int main() {
    long long n = 1;

    long long t = 10;

    long long s = -3;

    while(n*362880 > t) {

        long long i = t/10;
        while(i < t) {
            if(sumIsPower(i, n)) {
                s += i;
            }
            i++;
        }
        t *= 10;
        n++;
    }

    printf("%lli\n", s);

    return 0;
}
