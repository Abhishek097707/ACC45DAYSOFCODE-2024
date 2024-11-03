#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int maxLead = 0;
    int winner = 0;
    int player1Total = 0;
    int player2Total = 0;

    for (int i = 0; i < n; i++) {
        int s1, s2;
        scanf("%d %d", &s1, &s2);

        player1Total += s1;
        player2Total += s2;

        int currentLead = player1Total - player2Total;
        int currentWinner = currentLead > 0 ? 1 : 2;
        currentLead = currentLead > 0 ? currentLead : -currentLead;

        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentWinner;
        }
    }

    printf("%d %d\n", winner, maxLead);
    return 0;
}