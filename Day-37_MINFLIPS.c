#include <stdio.h>
#include <stdlib.h>
int minFlips(int *arr, int n) {
    int sum = 0;
    int positiveOnes = 0;
    int negativeOnes = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] == 1)
            positiveOnes++;
        else
            negativeOnes++;
    }
    if (sum == 0)
        return 0;
    int targetFlips = abs(sum) / 2;
    if (abs(sum) % 2 != 0 || targetFlips > (positiveOnes > negativeOnes ? positiveOnes : negativeOnes))
        return -1;

    return targetFlips;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int result = minFlips(arr, n);
        printf("%d\n", result);
    }

    return 0;
}