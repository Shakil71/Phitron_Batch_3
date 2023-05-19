#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findPosition(int list[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (list[i] == num) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int t, n, s;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);

        int list[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &list[j]);
        }
        scanf("%d", &s);
        int position = findPosition(list, n, s);
        printf("Case %d: ", i);
        if (position == -1) {
            printf("Not Found\n");
        } else {
            printf("%d\n", position);
        }
    }

    return 0;
}