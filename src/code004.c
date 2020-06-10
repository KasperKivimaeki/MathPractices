#include <stdio.h>
#include "common/common.h"

#define PNAME "Largest palindrome product"

int main() {
    int m = 0;
    int a = 0;
    int b = 0;
    
    while (a < 1000) (m = m + (a*b > m)*isPal(a*b)*(a*b - m),(a += b / 999, b = b + 1 + (b / 999) * (a - b - 1)));

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", m);

    return 0;
}


