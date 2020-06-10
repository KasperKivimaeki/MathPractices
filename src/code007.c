#include <stdio.h>
#include "common/common.h"

#define PNAME "Multiples of 3 and 5"

int main() {

    int p = 0;
    int i = 1;
    while (p < 10000) p += isPrime(++i);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", i);

    return 0;
}


