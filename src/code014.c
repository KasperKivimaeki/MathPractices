#include <stdio.h>
#include "common/common.h"

#define PNAME "Multiples of 3 and 5"

int main() {
	int n = 0;
	int m = 1;
	int d = 0;

	while(n < 1000000) {
        long a = n + 1;
        int i = 1;
        while(a > 1) {
            i++;
            a *= 3;
            if(a % 2) a += 1;
            else a /= 6;
        }
		if(i > m) {
			m = i;
			d = n + 1;
		}
		n++;
	}

    printf("Problem: %s\n", PNAME);
    printf("Solution: %d\n", d);

    return 0;
}
