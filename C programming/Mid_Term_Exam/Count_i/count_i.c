#include <stdio.h>

int main()
{
    int i, n, A[1000], odd_count = 0, even_count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("%d %d", even_count, odd_count);

    return 0;
}