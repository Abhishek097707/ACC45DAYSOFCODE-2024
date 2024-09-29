#include <stdio.h>
int minimum_cost(int N, int X) {
    int subscriptions_needed = (N + 5) / 6;
    return subscriptions_needed * X;
}

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int result = minimum_cost(N, X);
        printf("%d\n", result);
    }

    return 0;
}