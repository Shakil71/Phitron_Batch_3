#include <stdio.h>
#include <string.h>

int main()
{
    char A[1000];
    int len, vowels = 0;

    scanf("%s", A);
    len = strlen(A);

    for (int i = 0; i < len; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            vowels++;
        }
    }
    printf("%d", vowels);
    return 0;
}
