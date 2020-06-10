#include <stdio.h>
#include <stdlib.h>

void main() {
	int* t = calloc(600, sizeof(int));

	t[0] = 1;
	
	int i = 1;

	while(i < 100) {

		for(int j = 0; j < 599; j++) {
			t[j] *= i;
		}		

		for(int j = 0; j < 599; j++) {
			t[j + 1] += t[j]/10;
			t[j] %= 10;
		}		

		i++;
	}

	int s = 0;
	for(int j = 0; j < 599; j++) {
		s += t[j];
		if(t[j] < 0) abort();
	}

	printf("%d\n", s);

	free(t);
}
