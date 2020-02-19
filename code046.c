#include <stdio.h>
#include <math.h>

int isPrime(long long p) {
	int r = sqrt(p) + 0.5f;

	for(long long int i = 2; i <= r; i++)
		if(p % i == 0) return 0;
	
	return 1;
}

int isTwiceSquare(int p) {
    if(p % 2)
        return 0;

    if(p == 2)
        return 1;
        
    p /= 2;
    int h = p/2;

    while(h*h > p) h--;

    return h*h == p;
}

int isGoldbach(int p) {
    int i = 2;
    while(i < p) {
        if(isPrime(i)) {
            if(isTwiceSquare(p - i)) {
                return 1;
            }
        }
        i++;
    }

    return 0;
}

int main() {
    int i = 9;

    while(isGoldbach(i)) {
        printf("%d\n", i);
        i += 2;
        while(isPrime(i)) i += 2;
    }

    printf("%d\n", i);

    return 0;
}
