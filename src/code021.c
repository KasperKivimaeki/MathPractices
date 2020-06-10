#include <stdio.h>

int sd(int n) {
	int s = 0;
	for(int i = 1; i <= n/2; i++) {
		if(n % i == 0) s += i;
	}
	return s;
}

void main() {
	int sum2 = 0;
	int sum1 = 0;
	for(int i = 1; i <= 10000; i++) {
		int b = sd(i);
		if((i != b) && (sd(b) == i)) {
			if(b > 10000) {
				sum1 += i;
			} else {
				sum2 += i + b;
			}
		}
	}

	sum1 += sum2/2;
	printf("%d\n", sum1);
}
