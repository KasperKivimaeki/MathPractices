#include <stdio.h>
#include "common/common.h"

#define PNAME "Smallest multiple"

#define T(i, n) (i % n)
#define T3(i,n) (T(i,n) + T(i,(n+1)) + T(i,(n+2)))
#define T0(i) (T3(i, 18) + T3(i, 15) + T3(i, 12) + T3(i, 9))

int main() {
    int i = 0;

    while (i += 20, T0(i));

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", i);

    return 0;
}


