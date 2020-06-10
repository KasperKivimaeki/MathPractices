#include <stdio.h>
#include "common/common.h"

#define PNAME "Special Pythagorean triplet"

int main() {
    int s = 0;
    int a, b, c = 5;

    while ((b = c, a = 1000 - b - c), c++ <= 500) 
        while (b-- > a++) s += (a*a + b*b == (1000 - a - b)*(1000 - a - b))*a*b*(1000 - a - b);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", s);

    return 0;
}
