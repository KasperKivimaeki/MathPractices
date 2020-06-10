#include <stdio.h>

int solve028(int n) {
    n = (n - 1)/2 - 1;
    return 25 + (16*n*n*n + 78*n*n + 134*n)/3;
}

int main() {
    int n = solve028(1001);
    printf("%d\n", n);
    n = solve028(5);
    printf("%d\n", n);
    n = solve028(3);
    printf("%d\n", n);
    n = solve028(1);
    printf("%d\n", n);
    return 0;
}
