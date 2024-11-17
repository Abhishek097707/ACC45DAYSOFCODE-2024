#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the total duration
        int evenCount = N / 2;      // Number of even-indexed episodes
        int oddCount = N - evenCount; // Number of odd-indexed episodes
        int totalDuration = (oddCount * B) + (evenCount * A);
        
        printf("%d\n", totalDuration);
    }
    
    return 0;
}