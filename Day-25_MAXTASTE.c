#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int option1 = a + c;
        int option2 = a + d;
        int option3 = b + c;
        int option4 = b + d;
        
        int result = max(max(option1, option2), max(option3, option4));
        
        printf("%d\n", result);
    }
    
    return 0;
}