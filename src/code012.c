#include <stdio.h>
#include <math.h>
#include "common/common.h"

#define PNAME "Highly divisible triangular number"

int main() {

	long r, m, d = 0, n = 0;

	while(500 - d > 0) {
		m = ++n*(n + 1)/2;
		r = r2(m);
		d = !(m % r) * (2 - !!(r*r - m));

        while (--r) d += 2 * !(m % r);

		m *= !!(d - 500);
	}

    printf("Problem: %s\n", PNAME);
    printf("Solution: %ld\n", m);

    return 0;
}
