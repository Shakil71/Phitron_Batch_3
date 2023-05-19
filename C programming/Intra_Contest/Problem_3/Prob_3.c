#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculateDifference(int marks[], int n) {
    int highestMark = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        }
    }

    for (int i = 0; i < n; i++) {
        int difference = highestMark - marks[i];
        printf("%d ", difference);
    }
}
int main() {
    int n;
    int marks[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    calculateDifference(marks, n);

    return 0;
}
