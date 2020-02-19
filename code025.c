#include <stdio.h>
#include <stdlib.h>

void main() {
	int* f0 = calloc(1010, sizeof(int));
	int* f1 = calloc(1010, sizeof(int));

	f0[0] = 1;
	f1[0] = 1;
	
	int i = 3;

	int s = 1;

	while(s < 1000) {
		for(int d = 0; d < s + 3; d++) {
			if(i % 2) {
				f0[d] += f1[d];
				f0[d + 1] += f0[d]/10;
				f0[d] %= 10;
			} else {
				f1[d] += f0[d];
				f1[d + 1] += f1[d]/10;
				f1[d] %= 10;
			}
		}

		while(f0[s] > 0 || f1[s] > 0) s++;
		i++;
	}

	printf("%d\n", i - 1);

	free(f0);
	free(f1);
}
