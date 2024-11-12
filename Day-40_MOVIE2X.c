#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Time spent watching first Y minutes at 2x speed
    int time_spent = Y / 2;

    // Time spent watching remaining (X - Y) minutes at normal speed
    time_spent += (X - Y);

    printf("%d\n", time_spent);
    return 0;
}