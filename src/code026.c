#include <stdio.h>

int find(int new, int* digits, int n) {
    for(int i = 0; i < n; i++) {
        if(digits[i] == new) return 1;
        if(digits[i] == 0) return 0;
    }
    return 0;
}

int repetition(int divider) {
    int k = 0;
    int N = 3000;
    int digits[N];
    while(k < N) digits[k++] = 0;
    int d = 0;
    int l = 1;
    int i = 0;
    while(i < N) {
        d = l / divider;
        int new = l % divider;
        if(new == 0) return 0;
        int r = find(new, digits, N);
        if(r) return i - r;
        digits[i++] = new;
        l = (l - d*divider) * 10;
    }
    return 0;
}

int solve026(int d) {
    int max = 0;
    int max_i = 0;
    for(int i = 2; i <= d; i++) {
        int r = repetition(i);
        printf("%d: %d\n", i, r);
        if(r > max) {
            max = r;
            max_i = i;
        }
    }
    return max_i;
}


int main() {
    int n = solve026(1000);
    printf("%d\n", n);
}
