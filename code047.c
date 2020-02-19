#include <stdio.h>
#include <math.h>

int isPrime(long long p) {
	int r = sqrt(p) + 0.5f;

	for(long long int i = 2; i <= r; i++)
		if(p % i == 0) return 0;
	
	return 1;
}

int hasNprimes(int i, int n) {
    int divs = 0;

    int div = 2;

    while(i > 1 && divs < n) {
        if(!(i % div)) {
            divs++;
            while(!(i % div)) i /= div;
        }
        div++;
    }

    return i == 1 && divs == n;
}

int consecutiveNumbers(int n) {
    int f = 0;
    int i = 2;

    while(f < n) {
        if(hasNprimes(i, n)) {
            f++;
        } else {
            f = 0;
        }
        i++;
    }

    return i - n;
}

int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d: %d\n", i, consecutiveNumbers(i));
    }

    return 0;
}
