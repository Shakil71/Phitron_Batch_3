#include <stdio.h>
int main()
{
    int l, spa, s;
    scanf("%d",  l);
    spa = l - 1;
    s = 1;
    for (int i = 1; i <= 2 * l - 1; i++)
    {
        for (int j = 1; j <= spa; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i < l)
        {
            spa--;
            s = s + 2;
        }
        else
        {
            spa++;
            s = s - 2;
        }
    }
}