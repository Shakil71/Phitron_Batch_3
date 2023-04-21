#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1001];
    int i, freq[26] = {0};

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, freq[i]);
    }

    return 0;


}