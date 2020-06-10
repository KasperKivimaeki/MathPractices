#include <stdio.h>
#include "common/common.h"

#define PNAME "Largest prime factor"

int main() {

    long int d = 600851475143;
    long int i = 1;
    while (i * i <= d) d = (d / i) * !(d % i) + d * !!(d % i++);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %ld\n", d);

    return 0;
}


