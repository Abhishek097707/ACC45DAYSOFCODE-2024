#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int totalRounds = 0;
        int teams = N;
        
        while (teams > 1) {
            teams /= 2;
            totalRounds++;
        }
        
        int totalTime = totalRounds * A + (totalRounds - 1) * B;
        
        printf("%d\n", totalTime);
    }
    
    return 0;
}