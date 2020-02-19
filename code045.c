#include <stdio.h>

int main() {
    int f = 0;
    unsigned long long ti = 1, pi = 1, hi = 1;
    unsigned long long t = 1, p = 1, h = 1;

    while(f < 7) {
        while(h != p) {
            while(h > p) {
                pi++;
                p = pi*(3*pi-1)/2;
            }
            while(p > h) {
                hi++;
                h = hi*(2*hi-1);
            }
        }
        printf("%lld\n", h);
        while(t < p) {
            ti++;
            t = ti*(ti+1)/2;
        }
        if(t == p) {
            printf("%lld\n", t);
            hi++;
            h = hi*(2*hi-1);
            f++;
        }
    }

    return 0;
}
