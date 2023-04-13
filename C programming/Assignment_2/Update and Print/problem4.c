#include <stdio.h>

int main() {
    int n, x, v;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d %d", &x, &v);
    a[x] = v; // change the value at X'th index to V
    
    for (int i = n-1; i >= 0; i--) { // loop through the array in reverse order
        printf("%d ", a[i]);
    }
    
    return 0;
}
