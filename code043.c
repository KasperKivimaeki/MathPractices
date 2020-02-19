#include <stdio.h>

#define bigN 1000000000000

#define intl unsigned long long 

int isPandigital(intl p, int n) {
    intl d = 1000;
    intl l = 1;

    intl i = n - 4;

    intl pr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    while(i >= 0) {
        if(((p % d)/l) % pr[i])
            return 0;

        d *= 10;
        l *= 10;
        i--;
    }
    
    return 1;
}

intl swap(intl a, intl i, intl j) {
    if(i == j)
        return a;

    //printf("g%llu %llu %llu\n", a, i, j);

    intl p1 = 10;
    for(intl it = 0; it < i; it++) p1 *= 10; 

    intl p2 = 10;
    for(intl it = 0; it < j; it++) p2 *= 10; 

    intl d1 = (a / (p1 / 10)) % 10;
    intl d2 = (a / (p2 / 10)) % 10;

    a = (a / p2) * p2 + ((p2 / 10) * d1) + (a % (p2/10));
    a = (a / p1) * p1 + ((p1 / 10) * d2) + (a % (p1/10));

    //printf("s%llu\n", a);
    return a;
}

intl generate(int n, intl a) {
    int c[n];  
    intl i;

    intl f = 0;

    for(i = 0; i < n; i++) {
        c[i] = 0;
    }

    if(isPandigital(a, n)) {
        f += a;
        printf("%llu\n", a);
    }

    i = 0;
    while(i < n) {
        if(c[i] < i) {
            if(i % 2 == 0) {
                a = swap(a, 0, i);
            } else {
                a = swap(a, c[i], i);
            }
            if(isPandigital(a, n)) {
                f += a;
                printf("%llu\n", a);
            }
            c[i] += 1;
            i = 0;
        } else {
            c[i] = 0;
            i += 1;
        }
    }

    return f;
}


int main() {
    intl b = 1234567890;
    int n = 10;
    int l = 10;
    intl f = 0;
    f += generate(n, b);
    printf("0 %llu\n", f);
    for(int i = 0; i < 3; i++) {
        n++;
        for(int a = 0; a < l; a++) {
            f += generate(n, b + a);
        }
        printf("%d %llu\n", i, f);
        l *= 10;
    }

    return 0;
}
