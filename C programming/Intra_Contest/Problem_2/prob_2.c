#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const char* isEquilateralTriangle(int a, int b, int c) {
    if (a == b && b == c && a > 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    const char* result = isEquilateralTriangle(a, b, c);

    printf("%s\n", result);

    return 0;
}