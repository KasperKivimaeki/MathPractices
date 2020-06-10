#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long long p) {
	int r = sqrt(p) + 0.5f;

	for(long long int i = 2; i <= r; i++) {
		if(p % i == 0) return 0;
	}
	return 1;
}

void main() {
	int N = 78948;
	int *primes = malloc(sizeof(int) * N);

	primes[0] = 2;

	int p = 1;
	for(int i = 3; i < 1000000; i += 2) {
		if(!isPrime(i)) continue;
		primes[p] = i;
		p++;
	}

	long long int s = 0;

	for(int i = 0; i < N; i++) {
		s += primes[i];
	}
	while(s > 1000000) {
		N--;
		s = s - primes[N];
	}

	for(int i = N; i > 0; i--) {
		printf("Lets try if it has %d primes\n", i);
		for(int f = 0; f < N - i + 1; f++) {
			long long int s = 0;
			for(int j = f; (j < f + i); j++) {
				s += primes[j];
				if(s > 1000000) break;
			}
			if(s > 1000000) continue;
			if(!isPrime(s)) continue;
			printf("Prime %d has a big sum of %d different primes\n", s, i);
			free(primes);
			return;
		}
	}

	free(primes);
}
