#include <stdio.h>

int chain_len(long a) {
	int i = 1;
	while(a > 1) {
		i++;
		if(a % 2)
			a = 3*a + 1;
		else
			a = a / 2;
	}
	return i;
}

void print_chain(int a) {
	while(a > 1) {
		printf("%d\n", a);
		if(a % 2)
			a = 3*a + 1;
		else
			a = a / 2;
	}
	printf("%d\n", a);
}

void main() {
	int n = 0;
	int m = 1;
	int d = 0;

	print_chain(910107);

	while(n < 1000000) {
		int l = chain_len(n + 1);
		if(l > m) {
			m = l;
			d = n + 1;
		}
		n++;
	}

	printf("%d\n", d);
}
