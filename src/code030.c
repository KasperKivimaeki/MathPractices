#include <stdio.h>

long long int po(long long int a, long long int n) { 
	long long int t = 1;
	while(n--) t *= a;
	return t;
}

long long int sum5(long long int n) {
    long long int sum = 0;
    long long int n0 = n;

    for(long long int i = 0; i < 8; i++) {
        sum += po(n % 10, 5);
        n /= 10;
    }

    return sum == n0;
}

void main() {
    long long int i = 1;
    long long int sum = 0;

    while(i++ < 10000000)
        if(sum5(i)) {
            printf("%lld\n", i);
            sum += i;
        }

    printf("Sum %lld\n", sum);
}
