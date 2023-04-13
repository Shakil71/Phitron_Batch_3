#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) { // if N is negative or zero
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    } else { // if N is positive
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
