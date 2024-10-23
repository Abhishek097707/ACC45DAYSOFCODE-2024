#include <stdio.h>

int min_attacks(int H, int X, int Y) {
    int attacks = 0;
    if (Y >= H) {
        return 1;
    }
    if (Y > X) {
        H -= Y;
        attacks++;
    }
    attacks += (H + X - 1) / X;
    return attacks;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        printf("%d\n", min_attacks(H, X, Y));
    }
    return 0;
}