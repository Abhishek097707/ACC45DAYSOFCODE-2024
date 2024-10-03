#include <stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int pointsA = 500;
        int pointsB = 1000;
        int scoreAfirst = (pointsA - X * 2) + (pointsB - (X + Y) * 4);
        int scoreBfirst = (pointsB - Y * 4) + (pointsA - (X + Y) * 2);
        printf("%d\n", max(scoreAfirst, scoreBfirst));
    }
    return 0;
}
