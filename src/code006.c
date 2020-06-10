#include <stdio.h>
#include "common/common.h"

#define PNAME "Sum square difference"

int main() {

    int i = 100;
    int s = i*i*(1 + 2*i + i*i) / 4;;
    while (i) (s -= i*i, i--);

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", s);

    return 0;
}


