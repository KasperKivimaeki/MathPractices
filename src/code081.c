#include <stdio.h>

int solve081() {
    int m[80][80];
    FILE* f = fopen("../res/p081_matrix.txt", "r");

    for(int y = 0; y < 80; y++) {
        for(int x = 0; x < 80; x++) {
            fscanf(f, "%d,", &m[y][x]);
        }
    }
    int sum = 0;

    int v[80][80];
    for(int y = 0; y < 80; y++) {
        for(int x = 0; x < 80; x++) {
            v[y][x] = m[y][x];
            if(x > 0 && y > 0)  {
                int vu = v[y - 1][x];
                int vl = v[y][x - 1];
                if(vu > vl) v[y][x] += vl;
                else v[y][x] += vu; 
            } else if(x > 0 && y == 0) {
                v[y][x] += v[y][x - 1];
            } else if(x == 0 && y > 0) {
                v[y][x] += v[y - 1][x];
            }
        }
    }

    fclose(f);
    return v[79][79];
}



void main() {
    int n = solve081();
    printf("%d\n", n);
}
