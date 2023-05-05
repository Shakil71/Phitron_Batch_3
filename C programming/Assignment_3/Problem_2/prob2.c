#include <stdio.h>
int main()
{
    int n, spa, s;
    scanf("%d", &n);
    spa = n - 1;
    s = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spa; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("%d", i);
        }
        printf("\n");
        spa--;
        s++;
    }
}
