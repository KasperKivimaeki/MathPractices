#include <stdio.h>

int nthDigit(int d, int n) {
    int l = 1;
    while(n) {
        d /= n;
        n--;
    }
}

int champernowne(int n) {
}

int main() {
    int i = 1;
    int p = 1;

    for(; i < 10000000; i *= 10) {
        p *= champernowne(i);
    }

    printf("%d\n", p);

    return 0;
}
