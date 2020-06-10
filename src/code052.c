#include <stdio.h>

int len(int n) {
    int l = 0;
    while (n > 0) {
        n /= 10;
        l++;
    }
    return l;
}

int cmp(int a, int b) {
    if (len(a) != len(b)) return 0;

    int ad[10];
    int bd[10];

    for(int i = 0; i < 10; i++) {
        ad[i] = 0;
        bd[i] = 0;
    }

    while(a > 0) {
        ad[a % 10]++;
        bd[b % 10]++;
        a /= 10;
        b /= 10;
    }

    for(int i = 0; i < 10; i++)
        if (ad[i] != bd[i]) return 0;
    return 1;
}

int test(int x) {
    if (!cmp(1 * x, 2 * x)) return 0;
    if (!cmp(3 * x, 4 * x)) return 0;
    if (!cmp(5 * x, 6 * x)) return 0;
    if (!cmp(1 * x, 3 * x)) return 0;
    if (!cmp(1 * x, 5 * x)) return 0;
    return 1;
}

void main() {
    int i = 1;
    while (!test(i)) i++;

    printf("%d\n", i);
}
