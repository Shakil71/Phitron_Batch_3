#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n, k, i, j;

    scanf("%d %d", &n, &k);

    for (i = 0; i < k; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
