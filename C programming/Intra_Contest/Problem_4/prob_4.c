#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == (n + 1) / 2 || j == (n + 1) / 2) {
                printf("#");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Input must be an odd integer.\n");
        return 0;
    }
    printPattern(n);

    return 0;
}