#include <stdio.h>
#include <stdlib.h>

// Might SEGFAULT
void tuplaa(char* t, int n) {
		while(n >= 0) {
			t[n] *= 2;
			if(t[n] > 9) t[n + 1] += 1;
			t[n] %= 10;
			n--;
		}
}

int sum(char* t, int n) {
	int s = 0;
	while(l >= 0) {
		s += t[l];
		l = l - 1;
	}
    return s;
}

int multiply(char* t, int n) {
}


int solve016(int p) {
	char* t = calloc(302000, 1);
	t[0] = 1;
	
	int l = 2;
	int i = 0;

    int st = 0;
    while(p % 2 == 0) {
        p /= 2;
        st++;
    }

	while(i < p) {
        tuplaa(t, l);
		while(t[l] != 0) l++;
		i++;
	}

    while(st > 0) {
        multiply(t, l);
		while(t[l] != 0) l++;
        st--;
    }

    int s = sum(t, l)
	free(t);

    return s;
}


void main() {
    printf("2^%d => %d\n", 1000, solve016(1000));
    printf("2^%d => %d\n", 1000000, solve016(1000000));
}

