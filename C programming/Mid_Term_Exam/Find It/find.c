#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n, x, i, count = 0;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}