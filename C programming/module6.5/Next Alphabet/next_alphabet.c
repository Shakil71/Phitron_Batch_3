#include <stdio.h>

int main() {
    // get input character
    char c;
    scanf("%c", &c);

    // calculate the next character
    char next_c = (c == 'z' ? 'a' : c + 1);

    // print the result
    printf("%c\n", next_c);

    return 0;
}
