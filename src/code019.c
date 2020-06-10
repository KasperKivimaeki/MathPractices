#include <stdio.h>


int leap(int y, int m) {
	if(m != 1) return 0;
	if(y % 4) return 0;
	if(y % 100) return 1;
	return y % 400 == 0;
}

void main() {
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int y = 1900;
	int m = 0;
	int d = 0;

	int w = 0;

	int f = 0;

	while(!(y == 2000 && m == 11 && d == 30)) {
		if(y > 1900 && d == 0 && w == 6) f++;

		w = (w + 1) % 7;
		d = d + 1;
		if((months[m] + leap(y, m)) == d) {
			d = 0;
			m = (m + 1) % 12;
			if(m == 0) y++;
		}
	}

	printf("%d\n", f);
	 
}






