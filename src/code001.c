#include <stdio.h>
#include "common/common.h"

#define PNAME "Multiples of 3 and 5"

int main() {

    int s = 0;
    int i = -1;
    while (++i < 1000) s += i * !(i % 3 && i % 5);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", s);

    return 0;
}


