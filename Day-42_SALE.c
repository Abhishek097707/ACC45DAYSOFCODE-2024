#include <stdio.h>

int main() {
    int T, A, B, C;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &A, &B, &C);
        int total = A + B + C - (A < B ? (A < C ? A : C) : (B < C ? B : C));
        printf("%d\n", total);
    }
    return 0;
}