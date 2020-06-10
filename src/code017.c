#include <stdio.h>

int wtf(int d) {
	if(d == 0) return 0;
	if(d == 10) return 3;
	if(d == 11) return 6;
	if(d == 12) return 6;
	if(d == 13) return 8;
	if(d == 14) return 8;
	if(d == 15) return 7;
	if(d == 16) return 7;
	if(d == 17) return 9;
	if(d == 18) return 8;
	if(d == 19) return 8;

	int tens[10] = {1, 0, 6, 6, 5, 5, 5, 7, 6, 6};
	int ones[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};

	if(d < 10)
		return ones[d%10];

	return tens[d/10] + ones[d%10];
}

void main() {

	int words[10] = {0, 10, 10, 12, 11, 11, 10, 12, 12, 11};

	int l = 11;
	for(int i = 1; i < 1000; i++) {
		int c = 0, h = 0;

		h += words[i / 100];
		c += wtf(i % 100);
	
		if(c != 0 && h != 0) c += 3;

		printf("%d has %d and %d letters\n", i, h, c);

		l += c + h;
	}
	
	printf("I found %d letters\n", l);
}
