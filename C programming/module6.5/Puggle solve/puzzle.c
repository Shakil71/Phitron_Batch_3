#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    // Check a+b+c=d
    if (a + b * c == d) {
        printf("YES");
        return 0;
    }
    
    // Check a+b-c=d
    if (a + b - c == d) {
        printf("YES");
        return 0;
    }
    
    // Check a-b+c=d
    if (a - b + c == d) {
        printf("YES");
        return 0;
    }
    
    // Check a-b-c=d
    if (a - b - c == d) {
        printf("YES");
        return 0;
    }
    
    // Check a*b+c=d
    if (a * b + c == d) {
        printf("YES");
        return 0;
    }
    
    // Check a*b-c=d
    if (a * b - c == d) {
        printf("YES");
        return 0;
    }
    
    printf("NO");
    return 0;
}
