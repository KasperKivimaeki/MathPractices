#include <stdio.h>


int in(int a, int b, int *p1, int *p2) {
    int fa = 0;
    int fb = 0;
    for(int i = 0; i < 6; i++) {
        if(a != 6 && a != 9) {
            if(p1[i] == a) fa = 1;
        } else {
            if(p1[i] == 6) fa = 1;
            if(p1[i] == 9) fa = 1;
        }
        if(b != 6 && b != 9) {
            if(p2[i] == b) fb = 1;
        } else {
            if(p2[i] == 6) fb = 1;
            if(p2[i] == 9) fb = 1;
        }
    }
    if(fa && fb) return 1;
    fa = 0;
    fb = 0;

    int *c = p1;
    p1 = p2;
    p2 = c;

    for(int i = 0; i < 6; i++) {
        if(a != 6 && a != 9) {
            if(p1[i] == a) fa = 1;
        } else {
            if(p1[i] == 6) fa = 1;
            if(p1[i] == 9) fa = 1;
        }
        if(b != 6 && b != 9) {
            if(p2[i] == b) fb = 1;
        } else {
            if(p2[i] == 6) fb = 1;
            if(p2[i] == 9) fb = 1;
        }
    }
    return fa && fb;
}

int check(int *p1, int *p2) {
    if(!in(0, 1, p1, p2)) return 0;
    if(!in(0, 4, p1, p2)) return 0;
    if(!in(0, 9, p1, p2)) return 0;
    if(!in(1, 6, p1, p2)) return 0;
    if(!in(2, 5, p1, p2)) return 0;
    if(!in(3, 6, p1, p2)) return 0;
    if(!in(4, 9, p1, p2)) return 0;
    if(!in(6, 4, p1, p2)) return 0;
    if(!in(8, 1, p1, p2)) return 0;
    return 1;
}

int ite(int* p, int n) {
    if(p[0] == 4) return 0;
    if (p[n] < 4 + n) {
        p[n] += 1;
        return 1;
    } else {
        int a = ite(p, n - 1);
        p[n] = p[n - 1] + 1;
        return a;
    }
}

void main() {
    int f = 0;
    int d1[6] = {0, 1, 2, 3, 4, 5};
    int d2[6] = {0, 1, 2, 3, 4, 5};

    f += check(d1, d2);
    while(ite(&d2[0], 5)) {
        f += check(d1, d2);
    }
    while(ite(&d1[0], 5)) {
        d2[0] = d1[0];
        d2[1] = d1[1];
        d2[2] = d1[2];
        d2[3] = d1[3];
        d2[4] = d1[4];
        d2[5] = d1[5];
        f += check(d1, d2);
        while(ite(&d2[0], 5)) {
            f += check(d1, d2);
        }
    }
    printf("%d\n", f);
}
