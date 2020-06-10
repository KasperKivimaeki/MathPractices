#include <stdio.h>

#define INT_MAX 2 << 30

int solve082() {
    int m[80][80];
    FILE* f = fopen("../res/p081_matrix.txt", "r");

    for(int y = 0; y < 80; y++) {
        for(int x = 0; x < 80; x++) {
            fscanf(f, "%d,", &m[y][x]);
        }
    }
    fclose(f);
    printf("ok\n");

    int v[80][80];
    for(int x = 0; x < 80; x++) {
        for(int y = 0; y < 80; y++) {
            v[y][x] = 0;
        }
    }
    for(int y = 0; y < 80; y++)
        v[y][0] = m[y][0];

    for(int x = 1; x < 80; x++) {
        printf("%d\n", x);
        int c = 0;
        while(!c) {
            for(int y = 0; y < 80; y++) {
                int vl, vu, vd;
                v[y][x] = m[y][x];
                vl = v[y][x - 1];
                if(y == 0) vd = v[y + 1][x];
                else vd = INT_MAX;

                if(y == 79) vu = v[y - 1][x];
                else vu = INT_MAX;

                if(vu > vl && vd > vl) { 
                    v[y][x] += vl;
                }
                else if(vu > vd) v[y][x] += vd;
                else v[y][x] += vu;
            }
            for(int y = 79; y >= 0; y--) {
                int vl, vu, vd;
                v[y][x] = m[y][x];
                vl = v[y][x - 1];
                if(y == 0) vd = v[y + 1][x];
                else vd = INT_MAX;

                if(y == 79) vu = v[y - 1][x];
                else vu = INT_MAX;

                if(vu > vl && vd > vl) { 
                    v[y][x] += vl;
                    c = 1;
                }
                else if(vu > vd) v[y][x] += vd;
                else v[y][x] += vu;
            }
        }
    }

    int min = 2 << 20;
    for(int x = 0; x < 80; x++) {
        min = v[0][x];
        for(int y = 1; y < 80; y++)
            if(v[y][x] < min) min = v[y][x];
        printf("%d\n", min);
    }

    return min;
}



void main() {
    int n = solve082();
    printf("%d\n", n);
}
