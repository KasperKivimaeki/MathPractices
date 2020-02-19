#include <stdio.h>
#include <stdlib.h>

// malloc(alueenkoko) -> sattumanvaraista

// calloc(määrä , osia) -> nollia


// char = 1 tavu = 8 bittiä

//  int = 4 tavu = 32 bittiä

void main() {
	char* t = calloc(302000, 1);

	t[0] = 1;
	
	int l = 2;
	int i = 0;

	while(i < 1000000) {
		if(i % 1000 == 0)
			printf("%d\n", i);
		int d = l;

		while(d >= 0) {
			t[d] *= 2;
			if(t[d] > 9) t[d + 1] += 1;
			t[d] %= 10;
			d = d - 1;
		}

		if(t[l] != 0) l++;

		i++;
	}

	int s = 0;
	while(l >= 0) {
		s += t[l];
		l = l - 1;
	}

	printf("%d\n", s);

	free(t);
}
