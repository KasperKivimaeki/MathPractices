#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef unsigned long long int dt;
typedef long long double db;


db match(int n, db win, db draw, db loss) {
    char g[100];
    db sum = 0;
    for(int i = 0; i < n; i++) g[i] = 0;
    int t = 0;
    while(g[n] == 0) {
        if(g[t] == 0)
            g[t] = -1;
        else if(g[t] == -1)
            g[t] = 1;
        else if(g[t] == 1) {
            g[t] = 0;
            g[t + 1] = -1;
            while(t > 0) {
                t--;
                g[t] = 0
            }
        }
    }
}

db h(int n, int d) {
    db win = (db)1/sqrt(3+n);
    db loss = win + (db)1/(n*n);
    db draw = 1 - win - loss;

    db sum = 0;
    db odd = 1;

    for(int i = 1; i <= d; i++) {
        sum = match(i, win, draw, loss) * odd;
        odd *= (db)1 - (db)1/(n*n*n);
    }
}

void main() {
    for(int i = 0; i < 10) {
        printf("%d %6.llf\n", i, h(3, i));
    }
}
