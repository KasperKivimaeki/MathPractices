#include <stdio.h>
#include "common/common.h"

#define PNAME "Even Fibonacci numbers"

void __swap(int *i, int *j) {
    int c = *i;
    *i = *j;
    *j = c;
}

int main() {
    int s = 0;

    int i = 1;
    int j = 1;
    while (((i += j, __swap(&i, &j)), i < 4000000)) s += i * !(i % 2);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", s);

    return 0;
}


