#include <stdio.h>

int triangles(int p) {
	int f = 0;

	for(int l = 1; l < p/2; l++) {
		int c = p - l;
		for(int a = 1; a < c; a++) {
			int b = (p - c - a);
			f += (b*b) == (c*c - a*a);
		} 
	}
	return f;
}


void main() {
	int m = 0;
	int i = 0;

	for(int p = 0; p < 1000; p++) {
		int t = triangles(p);
		if(t > m) {
			m = t;
			i = p;
		}
	}

	printf("Triangle with perimeter %d\nProduces %d different sides\n", i, m);

}
