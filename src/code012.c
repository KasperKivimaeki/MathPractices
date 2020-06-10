#include <stdio.h>
#include <math.h>

long double solve012() {
	long most_divs = 1;

	long n = 1;

	while(most_divs < 2000) {
		long tri = n*(n + 1)/2;
		long r = sqrt(tri);
	
		long divs = 0;

		for(long i = 1; i < r; i++) {
			if(tri % i == 0) {
				divs += 2;
			}
		}
	
		if(tri % r == 0)
			if(r*r == tri)
				divs += 1;
			else	
				divs += 2;

		if(divs > most_divs) {
			most_divs = divs;
			printf("%ld %ld %ld \n", n, tri, divs);
		}
		n += 1;
	}
    return n;
}

void main() {
    solve012();
}
